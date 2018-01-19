//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Furniture.h"
#include "DrawFurniture.h"
#include "Wall.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Furniture* fList[10];
DrawFurniture* cFurniture[20];
Wall * cWalls[20];
int scale = 20;
int countCurrentDrawFurniture;
DrawFurniture * cDrawFurniture;



void CreateDefaultFurniture();
void loadMenu();
void drawNet();
void drawAll();
void drawPanelSubject();

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	CreateDefaultFurniture();
	drawNet();
	drawAll();
	loadMenu();

}
//---------------------------------------------------------------------------

void CreateDefaultFurniture(){
	fList[0] = new Furniture("Sofa");
	fList[0]->width = 1;
	fList[0]->height = 2;

	fList[1] =new Furniture("Bed");
	fList[1]->width = 2;
	fList[1]->height = 3;

	fList[2] =new Furniture("Table");
	fList[2]->width = 2;
	fList[2]->height =1;


	Point2D* start = new Point2D(0,0);
	Point2D* end = new Point2D(1,22);
	cWalls[0] = new Wall(*start, *end);

	start = new Point2D(0,0);
	end = new Point2D(32,1);
	cWalls[1] = new Wall(*start, *end);

	start = new Point2D(0,21);
	end = new Point2D(32,22);
	cWalls[2] = new Wall(*start, *end);

	start = new Point2D(31,0);
	end = new Point2D(32,22);
	cWalls[3] = new Wall(*start, *end);

}


void __fastcall clickMenu(TMenuItem* Sender) {
//	TMenuItem* It = (TMenuItem*)&Sender;
//	ShowMessage(It);
//	ShowMessage(Sender->Caption.SubString(2,Sender->Caption.Length()-1));
	for(int i=0;i<10;i++){
		if(fList[i]){
			if(fList[i]->Name().c_str() == Sender->Caption.SubString(2,Sender->Caption.Length()-1)){
				wchar_t* name(InputBox("Name","Name of furniture" ,fList[i]->Name().c_str()).c_str());
				std::wstring ws(name);
				std::string str(ws.begin(), ws.end());

				cDrawFurniture = new DrawFurniture(fList[i],
												   countCurrentDrawFurniture,
												   str);
				cFurniture[countCurrentDrawFurniture++] = cDrawFurniture;
				drawPanelSubject();
				return;

			}
		}
	}

}

void loadMenu(){
	for(int i=0;i<10;i++){
		if(fList[i]){
			TMenuItem *It = new TMenuItem(Form1->MainMenu1);
			It->Caption = fList[i]->Name().c_str();
			TMethod Method;
			Method.Data = It;
			Method.Code= clickMenu;
			It->OnClick =  *(TNotifyEvent*)&Method;
			Form1->MainMenu1->Items[0].Items[0]->Insert(0,It);
		}
	}
}

void drawNet(){

	for(int j=5;j<430;j+=scale){
		for(int i=5;i<640;i+=scale){
			Form1->Image1->Canvas->Rectangle(i,j,i+scale,j+scale);
		}
	}
}

void drawAll(){
	//draw walls
	Form1->Image1->Canvas->Brush->Color = clMedGray;
	for(int i=0;i<20;i++){
		if(cWalls[i]){
			Form1->Image1->Canvas->Rectangle(5+scale*cWalls[i]->start.x,
											 5+scale*cWalls[i]->start.y,
											 5+scale*cWalls[i]->end.x,
											 5+scale*cWalls[i]->end.y);
		}
	}

}

void drawPanelSubject(){

	Form1->ListBox1->Clear();
//	draw current subject panel
	if(cDrawFurniture){
		Form1->Edit1->Text = cDrawFurniture->custom_name.c_str();
	}else{
		Form1->Edit1->Text = "";
	}
//  draw curent subjects pannel
	for(int i=0;i<20;i++){
		if(cFurniture[i]){
			Form1->ListBox1->Items->Add(cFurniture[i]->custom_name.c_str());
		}
	}
}



//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
//	ShowMessage(Form1->ListBox1->Items[Form1->ListBox1->ItemIndex-1][0]);
	UnicodeString cName = Form1->ListBox1->Items->Strings[Form1->ListBox1->ItemIndex];
	for(int i=0;i<20;i++){
		 if(cFurniture[i] != NULL){
			if(cFurniture[i]->custom_name.c_str() == cName){
				if(cDrawFurniture){
                 	if(cDrawFurniture->id == cFurniture[i]->id){
						cDrawFurniture = NULL;
					}
				}
				cFurniture[i] = NULL;

				drawPanelSubject();
				return;
			}
		 }
	}
}
//---------------------------------------------------------------------------


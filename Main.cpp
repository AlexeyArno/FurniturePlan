//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Draw.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Furniture* fList[10];
DrawFurniture* cFurniture[20];
Wall * cWalls[20];
int scale = 20;
int countCurrentDrawFurniture;
int countFList=2;
DrawFurniture * cDrawFurniture;



void CreateDefaultFurniture();
void loadMenu();
//void drawNet();
void drawWalls();
void drawPanelSubject();
void drawFurniture();
void drawAll();
void newFurniture();

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	CreateDefaultFurniture();
	loadMenu();
	drawAll();

}
//---------------------------------------------------------------------------

void CreateDefaultFurniture(){
	fList[0] = new Furniture("Кресло");
	fList[0]->width = 1;
	fList[0]->height = 2;

	fList[1] =new Furniture("Кровать");
	fList[1]->width = 2;
	fList[1]->height = 3;

	fList[2] =new Furniture("Стол");
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

__fastcall TForm1::drawAll(){
//	Form1->Image1->Repaint();
	Form1->Image1->Refresh();
	drawNet(430,640,scale,Form1->Image1->Canvas);
	drawWalls();
	drawFurniture();
	drawPanelSubject();
}

void __fastcall clickMenu(TMenuItem* Sender) {

	for(int i=0;i<10;i++){
		if(fList[i]){
			if(fList[i]->Name().c_str() == Sender->Caption){


				cDrawFurniture = new DrawFurniture(*fList[i],
												   countCurrentDrawFurniture,
												   InputBox("Name","Name of furniture" ,fList[i]->Name().c_str()));
				cFurniture[countCurrentDrawFurniture++] = cDrawFurniture;
				Form1->drawAll();
				return;

			}
		}
	}

}

void loadMenu(){
	Form1->MainMenu1->Items[0].Items[0]->Clear();

   	TMenuItem *It = new TMenuItem(Form1->MainMenu1);
	It->Caption = "-";
	Form1->MainMenu1->Items[0].Items[0]->Insert(0,It);

//	It = new TMenuItem(Form1->MainMenu1);
//	It->Caption = "+ New";
//	TMethod Method;
//	Method.Data = It;
//	Method.Code = newFurniture;
//	It->OnClick =  *(TNotifyEvent*)&Method;
//	Form1->MainMenu1->Items[0].Items[0]->Insert(1,It);

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


void drawWalls(){
	//draw walls
	TColor defColor = Form1->Image1->Canvas->Brush->Color;
	Form1->Image1->Canvas->Brush->Color = clMedGray;
	for(int i=0;i<20;i++){
		if(cWalls[i]){
			Form1->Image1->Canvas->Rectangle(5+scale*cWalls[i]->start.x,
											 5+scale*cWalls[i]->start.y,
											 5+scale*cWalls[i]->end.x,
											 5+scale*cWalls[i]->end.y);
		}
	}
	Form1->Image1->Canvas->Brush->Color = defColor;

}

void drawFurniture(){

		for(int i=0;i<20;i++){
			if(cFurniture[i]){
				if(cDrawFurniture){
					if(cFurniture[i]->id == cDrawFurniture->id){
						continue;
					}
				}
				cFurniture[i]->Draw(Form1->Image1->Canvas,
									scale,
									false);
			}
		}
		if(cDrawFurniture) cDrawFurniture->Draw(Form1->Image1->Canvas,
							 scale,
							 true);
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
	int count = 0;
	for(int i=0;i<20;i++){
		if(cFurniture[i]){
			Form1->ListBox1->Items->Add(cFurniture[i]->custom_name.c_str());
			if(!cDrawFurniture){continue;};
			if(cDrawFurniture->id == cFurniture[i]->id){
				Form1->ListBox1->ItemIndex = count;
			}
			count++;
		}
	}

}



//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	UnicodeString cName = Form1->ListBox1->Items->Strings[Form1->ListBox1->ItemIndex];
	if(!cDrawFurniture){return;};
	for(int i=0;i<20;i++){
		 if(!cFurniture[i]){continue;};
		 if(cFurniture[i]->id == cDrawFurniture->id){
			cFurniture[i] = NULL;
			cDrawFurniture = NULL;
			Form1->drawAll();
			return;
		 }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1Click(TObject *Sender)
{
	UnicodeString cName = Form1->ListBox1->Items->Strings[Form1->ListBox1->ItemIndex];
	for(int i=0;i<20;i++){
		 if(cFurniture[i] != NULL){
			if(cFurniture[i]->custom_name.c_str() == cName){
				cDrawFurniture = cFurniture[i];
				Form1->drawAll();
				return;
			}
		 }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1DblClick(TObject *Sender)
{

	Form2->InitFurniture(cDrawFurniture,true);
	Form2->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if(cDrawFurniture){
		cDrawFurniture->position.y--;
		int* result = cDrawFurniture->getExtremePoints();
		if(cDrawFurniture->getExtremePoints()[1]<1
			|| cDrawFurniture->getExtremePoints()[3]<1){
			cDrawFurniture->position.y++;
			return;
		}
		Form1->drawAll();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if(cDrawFurniture){
		cDrawFurniture->position.y++;
		int* result = cDrawFurniture->getExtremePoints();
		if(result[1]>=int(430/scale)+1 || result[3]>=int(430/scale)+1){
				cDrawFurniture->position.y--;
				return;
			}
		Form1->drawAll();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if(cDrawFurniture){
		cDrawFurniture->position.x++;
		int* result = cDrawFurniture->getExtremePoints();
		if(result[0]>=int(640/scale) || result[2]>=int(640/scale)){
				cDrawFurniture->position.x--;
				return;
			}

		Form1->drawAll();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(cDrawFurniture){
		cDrawFurniture->position.x--;
		int* result = cDrawFurniture->getExtremePoints();
		if(result[0]<1 || result[2]<1){
				cDrawFurniture->position.x++;
				return;
		}
		Form1->drawAll();
	}
}
//---------------------------------------------------------------------------

__fastcall TForm1::addObject(DrawFurniture* newFurniture){
	fList[++countFList] = &newFurniture->origin;
	newFurniture->position.x++;
    newFurniture->position.y++;
	cFurniture[countCurrentDrawFurniture] = newFurniture;
	cDrawFurniture = cFurniture[countCurrentDrawFurniture];
	loadMenu();

}

void newFurniture(){
	Furniture* nFurniture = new Furniture(InputBox("New Furniture","Name of new furniture",""));
	DrawFurniture* CNDFurniture = new DrawFurniture(*nFurniture,
										-1,
										nFurniture->Name());
	Form2->InitFurniture(CNDFurniture, false);
	Form2->Show();
}
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	if(cDrawFurniture){
		if(cDrawFurniture->setOrientation(((cDrawFurniture->orientation<3)?
										cDrawFurniture->orientation+1:
										0), int(630/20), int(430/20)))Form1->drawAll();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if(cDrawFurniture){
		if(cDrawFurniture->setOrientation(((cDrawFurniture->orientation>0)?
										cDrawFurniture->orientation-1:
										3),int(630/20), int(430/20)))Form1->drawAll();
	}
}
//---------------------------------------------------------------------------


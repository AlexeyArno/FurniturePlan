//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ObjectProperties.h"
#include "Main.h"
#include "Draw.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
DrawFurniture* COFurniture;
DrawFurniture* cFurniture;
TPanel* buttons[6];
bool change;

void createColorButtons();

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
__fastcall TForm2::InitFurniture(DrawFurniture * furn, bool _change){
	change = _change;
	if(_change){
		Form2->Caption = "Изменение объекта";
	}else{
		Form2->Caption = "New Object";
	}
	COFurniture = furn;
	cFurniture = new DrawFurniture(*furn);
	cFurniture->position.x = 0;
	cFurniture->position.y = 0;
	cFurniture->orientation = 0;
	Form2->draw();

}
//---------------------------------------------------------------------------
__fastcall TForm2::draw(){
	int scale = 25;
	Form2->Image1->Repaint();
	drawNet(230,270,scale,Form2->Image1->Canvas);
	cFurniture->Draw(Form2->Image1->Canvas,scale,false);
	Form2->Edit1->Text = cFurniture->custom_name.c_str();
	Form2->Edit2->Text = IntToStr(cFurniture->origin.width);
	Form2->Edit3->Text = IntToStr(cFurniture->origin.height);

	createColorButtons();

}

void colorClick(TObject* Sender){
	 cFurniture->origin.color = ((TPanel*)Sender)->Color;
	 Form2->draw();

}

void createColorButtons(){
	TColor colors[6] = {clMedGray, clPurple, clTeal, clRed, clLime, clAqua};

	for(int i=0;i<6;i++){
		buttons[i] = new TPanel(Form2->Panel2);
		buttons[i]->Parent = Form2->Panel2;
		buttons[i]->Left = i*35+10;
		buttons[i]->Top = Form2->Panel3->Top;
		buttons[i]->Width = Form2->Panel3->Width;
		buttons[i]->Height = Form2->Panel3->Height;
		buttons[i]->ParentBackground = false;
		buttons[i]->ParentColor = false;
		buttons[i]->Color = colors[i];
		if(cFurniture->origin.color == colors[i]){
			buttons[i]->BorderStyle = bsSingle;
		}else{
			TMethod Method;
			Method.Data = buttons[i];
			Method.Code= colorClick;
			buttons[i]->OnClick =  *(TNotifyEvent*)&Method;
		}
	}
	Form2->Panel3->Hide();
}


void __fastcall TForm2::Button1Click(TObject *Sender)
{
//	*COFurniture = *cFurniture;
	if(change){
		COFurniture->origin = cFurniture->origin;
		COFurniture->custom_name = cFurniture->custom_name;
	}else{
		Form1->addObject(cFurniture);
	}

	Form2->Hide();
	Form1->drawAll();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit1Change(TObject *Sender)
{
	cFurniture->custom_name = Form2->Edit1->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit2Change(TObject *Sender)
{
	if(Form2->Edit2->Text!=""){
		int size = StrToInt(Form2->Edit2->Text);
		cFurniture->origin.width = (size>10)?10:size;
		Form2->draw();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Edit3Change(TObject *Sender)
{
	if(Form2->Edit3->Text!=""){
		int size = StrToInt(Form2->Edit3->Text);
		cFurniture->origin.height = (size>10)?10:size;
		Form2->draw();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Form2->Hide();
}
//---------------------------------------------------------------------------


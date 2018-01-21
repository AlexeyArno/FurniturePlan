//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>

#include "Furniture.h"
#include "DrawFurniture.h"
#include "Wall.h"
#include "ObjectProperties.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TEdit *Edit1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TLabel *Label1;
	TPanel *Panel2;
	TLabel *Label2;
	TPanel *Panel3;
	TLabel *Label4;
	TPanel *Panel1;
	TLabel *Label3;
	TImage *Image1;
	TMenuItem *N2;
	TMenuItem *New1;
	TPanel *Panel4;
	TListBox *ListBox1;
	TLabel *Label5;
	TButton *Button7;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall ListBox1Click(TObject *Sender);
	void __fastcall ListBox1DblClick(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	__fastcall drawAll();
	__fastcall addObject(DrawFurniture*);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
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
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

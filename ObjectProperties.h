//---------------------------------------------------------------------------

#ifndef ObjectPropertiesH
#define ObjectPropertiesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "Furniture.h"
#include "DrawFurniture.h"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TImage *Image1;
	TEdit *Edit1;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label6;
	TLabel *Label7;
	TPanel *Panel3;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Edit2Change(TObject *Sender);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
	__fastcall draw();
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
	__fastcall InitFurniture(DrawFurniture *, bool);
	friend	void colorClick(TObject* Sender);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif

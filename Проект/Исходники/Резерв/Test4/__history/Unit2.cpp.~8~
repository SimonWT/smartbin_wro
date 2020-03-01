//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit4.h"
#include "Unit3.h"
#include "ToChtoChutRabotaet.h"




//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
ThreadClass *SecondProcess = new ThreadClass(true);
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{




}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{

 Form2->Close();
 //SecondProcess->Resume();
}
//---------------------------------------------------------------------------





void __fastcall TForm2::FormCreate(TObject *Sender)
{
Form2->Color=clWhite;
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>



//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	std::stringstream stream;
	stream << "calc.exe"
		<< " " // разделитель, отдел€ющий программу от аргумента
		<< "myargument";
	system(stream.str().c_str());


}
//---------------------------------------------------------------------------

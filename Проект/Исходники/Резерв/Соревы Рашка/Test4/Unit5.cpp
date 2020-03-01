//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
#include "ToChtoChutRabotaet.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <conio.h>
#pragma package(smart_init)

using namespace std;



//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
	string put="D:\\QR\\";
	 string bmp=".bmp";
	 string sFile=put+(AnsiString(Form1->Edit1->Text).c_str())+bmp;
	 UnicodeString usFile = sFile.c_str();

  //Form2->Image1->Picture->LoadFromFile("D:\\QR\\Example.bmp")  ;

	Form2->Show();

   //	ShowMessage("Добро пожаловать, друг");

	Form2->Image1->Picture->LoadFromFile(usFile);
	Form5->Close();

	extern UnicodeString usUser;
		   int Pl,Al,Pa,Points;

	 Form2->LKTable->Requery();
	 Form2->Label2->Caption=usUser;



	 bool key;
	 for(int i; i<=Form2->LKTable->RecordCount;i++){
		if((Form2->LKTable->FieldByName("Login")->AsString) == usUser){
			 key=true;

             Form2->LKTable->Edit();
			 Form2->LKTable->FieldByName("Points")->AsInteger=Points;
			 Form2->LKTable->FieldByName("Plastic")->AsInteger=Pl;
			 Form2->LKTable->FieldByName("Aluminium")->AsInteger=Al;
			 Form2->LKTable->FieldByName("Paper")->AsInteger=Pa;
			 Form2->Label7->Caption=Pl;
			 Form2->Label8->Caption=Al;
			 Form2->Label9->Caption=Pa;
			 Form2->Label10->Caption=Points;

				   }else{
			 Form2->LKTable->Next();
				 }
				 }





}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <conio.h>
#pragma package(smart_init)

using namespace std;

#include "Unit6.h"
#include "Unit2.h"
#include "Unit3.h"
#include "ToChtoChutRabotaet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::ВойтиClick(TObject *Sender)
{


		   int Pl=0,Al=0,Pa=0,Points=0;

		  bool key=false;

	   string put="D:\\QR\\";
	   string bmp=".bmp";
	   string sFile=put+(AnsiString(Form6->Edit1->Text).c_str())+bmp;
	   UnicodeString usFile = sFile.c_str();

		   for(int i=0; i < (Form3->TLogin->RecordCount);i++){
			 if((Form3->TLogin->FieldByName("Login")->AsString) == Edit1->Text){

			 Form3->TLogin->Open();
			 Form3->TLogin->Edit();
			 Points=Form3->TLogin->FieldByName("Points")->AsInteger;
			 Pl=Form3->TLogin->FieldByName("Plastic")->AsInteger;
			 Al=Form3->TLogin->FieldByName("Aluminium")->AsInteger;
			 Pa=Form3->TLogin->FieldByName("Paper")->AsInteger;
			 Form2->Label7->Caption=Pl;
			 Form2->Label8->Caption=Al;
			 Form2->Label9->Caption=Pa;
			 Form2->Label10->Caption=Points;

				  key=true;
				   }
		 Form3->TLogin->Next();
				 }

		 if(key==false){


			 ShowMessage("Неправильный логин. Введите повтороно)");


		 }else{


		   Form2->Show();
		   Form2->Image1->Picture->LoadFromFile(usFile);
		   Form6->Close();
		   Form2->Label2->Caption=Edit1->Text;


		 }










}
//---------------------------------------------------------------------------

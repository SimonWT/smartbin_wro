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

//extern string ssid;


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
	   string ssid;
	   fstream F;
	   F.open("C:\\ReturningFiles\\return_from_login_to_qr.txt");
	   F >> ssid;
	   F.close();



	 string put="D:\\QR\\";
	 string bmp=".bmp";
	// string sFile=put+(AnsiString(Form1->Edit1->Text).c_str())+bmp;
	string sFile=put+ssid+bmp;

	 UnicodeString usFile = sFile.c_str();
	 UnicodeString uUsername;
  //Form2->Image1->Picture->LoadFromFile("D:\\QR\\Example.bmp")  ;

	//Form2->Show();

   //	ShowMessage("����� ����������, ����");

	Form2->Image1->Picture->LoadFromFile(usFile);
	Form5->Close();

	extern UnicodeString ussid;
		   int Pl,Al,Pa,Points;

	 Form2->LKTable->Requery();

   //Form2->Label2->Caption=ussid;




	 bool key;

	 for(int i; i<=(Form2->LKTable->RecordCount);i++){
		if((Form2->LKTable->FieldByName("ID")->AsString) == ussid){
			 key=true;
		   /*
			 Form2->LKTable->Edit();
			 Form2->LKTable->FieldByName("Points")->AsInteger=Points;
			 Form2->LKTable->FieldByName("Plastic")->AsInteger=Pl;
			 Form2->LKTable->FieldByName("Aluminium")->AsInteger=Al;
			 Form2->LKTable->FieldByName("Paper")->AsInteger=Pa;
			 Form2->Label7->Caption=Pl;
			 Form2->Label8->Caption=Al;
			 Form2->Label9->Caption=Pa;
			 Form2->Label10->Caption=Points;
		   */

			 Form2->LKTable->Edit();
			// uUsername=Form2->LKTable->FieldByName("Login")->AsString;
			 Form2->Label2->Caption=Form2->LKTable->FieldByName("Login")->AsString;
			 //ShowMessage("Yes");

		   //	 break;
				   }else{
			 //ShowMessage(ussid);
			 Form2->LKTable->Next();
				 }
				 }



		Form2->Show();

}
//---------------------------------------------------------------------------

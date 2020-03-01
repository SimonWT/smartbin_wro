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

#include "Unit2.h"
#include "Unit5.h"
#include "Unit4.h"
#include "Unit3.h"
#include "ToChtoChutRabotaet.h"

 UnicodeString usUser;


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
//	tl->SQL->Add("insert into data (Login,Aluminium,Plastic,Points,Paper)");
//	tl->SQL->Add( "VALUES(null)");


  Form1->tl->Open();
  if (tl->FieldByName("Login")->AsString !="") {  tl->Append();
  tl->FieldByName("Login")->AsString = "";
  tl->Post();
  Form1->tl->First();

  }

  //tl->Append();
  //tl->FieldByName("Login")->AsString = "";
  //tl->Post();


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{

   bool k=true;
   int i=0;


   for (int i=0; i < tl->RecordCount; i++) {
		 if (tl->FieldByName("Login")->AsString == Edit1->Text) {
		  k=false;
		   }
		  tl->Next();
		 }


	if (k==false) {
				 ShowMessage("ВВедите другой логин");
				 // Label1->Caption="Est Takoy"; Form1->tl->First();
				 }

		 else {

				 Form1->tl->First();
				 //Label1->Caption="NETU";


				 tl->Edit(); 	 tl->Append();
				 tl->FieldByName("Login")->AsString = Edit1->Text;
				 tl->Post();









	 string put="D:\\QR\\";
	 string bmp=".bmp";
	 string sFile=put+(AnsiString(Form1->Edit1->Text).c_str())+bmp;
	 UnicodeString usFile = sFile.c_str();

	 usUser=Edit1->Text;

	FILE *f;
	string a;
	f = fopen("C:\\ReturningFiles\\return_from_login_to_qr.txt", "w");
	ofstream fout("C:\\ReturningFiles\\return_from_login_to_qr.txt");
	fout << (AnsiString(Edit1->Text).c_str());
	fclose(f);

	WinExec("C:\\Исходники\\exe OpenCV\\QRGenerator.exe", SW_SHOWMINIMIZED);




  Form5->Show();
  Form1->Close();


   }
	 Form3->TLogin->Requery();
	 tl->Requery();
	 tabl->Requery();


}
//---------------------------------------------------------------------------





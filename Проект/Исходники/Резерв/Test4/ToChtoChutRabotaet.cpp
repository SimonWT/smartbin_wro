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
 string ssid;
 UnicodeString ussid;

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
		 break;
		  k=false;
		   }
		  tl->Next();
		 }


	if (k==false) {
				 ShowMessage("������� ������ �����");
				 // Label1->Caption="Est Takoy"; Form1->tl->First();
				 }

		 else {


			  /*
				 Form1->tl->First();
				 //Label1->Caption="NETU";


				 tl->Edit();
				 tl->Append();
				 tl->FieldByName("Login")->AsString = Edit1->Text;
				 tl->Post();


				 */

	   int id;

	   fstream F;
	   F.open("C:\\ReturningFiles\\id.txt");
	   F >> id;
	   F.close();

	   id++;




	   ofstream fout1("C:\\ReturningFiles\\id.txt");
	   fout1 << id;
	   fout1.close();

	   stringstream ss1;
	   ss1 << id;
	   ssid = ss1.str();



	   if(id==1000){ }

	   if(id>99){
	   ssid="0"+ssid;
	   }
	   if(id>9){
	   ssid="00"+ssid;
	   }
	   if(id<=9){
	   ssid="000"+ssid;
	   }



	   ShowMessage(id);

	   ofstream fout2("C:\\ReturningFiles\\return_from_login_to_qr.txt");
	   fout2 << ssid;
	   fout2.close();

	   ussid = ssid.c_str();


       	 Form1->tl->First();
				 //Label1->Caption="NETU";


	 tl->Edit();
	 tl->Append();
	 tl->FieldByName("Login")->AsString = Edit1->Text;

	 tl->Post();
	 tl->Edit();

	 tl->FieldByName("ID")->AsString = ussid;


	 string put="D:\\QR\\";
	 string bmp=".bmp";
	 string sFile=put+ssid+bmp;
	 UnicodeString usFile = sFile.c_str();

	 usUser=Edit1->Text;

  /*	FILE *f;
	string a;
	f = fopen("C:\\ReturningFiles\\return_from_login_to_qr.txt", "w");
	ofstream fout("C:\\ReturningFiles\\return_from_login_to_qr.txt");
	fout << (AnsiString(Edit1->Text).c_str());
	fclose(f);
   */
	WinExec("C:\\���������\\exe OpenCV\\QRGenerator.exe", SW_SHOWMINIMIZED);




  Form5->Show();
  Form1->Close();


   }
	 Form3->TLogin->Requery();
	 tl->Requery();
	 tabl->Requery();


}
//---------------------------------------------------------------------------







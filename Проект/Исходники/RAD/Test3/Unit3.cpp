//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <conio.h>

using namespace std;

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{




}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	   string Username;
	   bool key;
	   fstream F;
	   F.open("C:\\ReturningFiles\\return_from_decoding.txt");
	   F >> Username;
	   F.close();

	   UnicodeString sUsername = Username.c_str();

	  if(Username!="0"){
	   ShowMessage(sUsername);
		for(int i=0; i <= (TLogin->RecordCount);i++){
		  if((TLogin->FieldByName("Login")->AsString) == sUsername){
			 key=true;
			 ShowMessage("True");
				  }else{ShowMessage("False");}
			  }
			}

		 if (key==true) {
			ShowMessage("Welcome");
		 }else{
		 ShowMessage("Don't found it");
		 }

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include "Unit2.h"
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <conio.h>

using namespace std;




//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"


TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  std::stringstream stream;
	stream << "\"C:\\���������\\exe OpenCV\\IDcan.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream.str().c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
std::stringstream stream;
	stream << "\"C:\\���������\\exe ��������\\Lotok_v1.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream.str().c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
std::stringstream stream;
	stream << "\"C:\\���������\\exe ��������\\Raspredelenie.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream.str().c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	std::stringstream stream;
	stream << "\"C:\\���������\\exe ��������\\GivingOut.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	 system(stream.str().c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{

   Form2->Show();

	/* string Username;
	 bool key;
	 char c;

	do{
		std::stringstream stream;
	stream << "\"C:\\���������\\exe OpenCV\\libzbar64-0.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream.str().c_str());

		//��������� ����
	   fstream F;
	   F.open("C:\\ReturningFiles\\return_from_decoding.txt");
	   F >> Username;
	   F.close();

	  //if(kbhit())if(getch() == 27)break;
		UnicodeString sUsername = Username.c_str();



		if(Username!="0"){
	   ShowMessage(sUsername);
		for(int i=0; i < (TLogin->RecordCount);i++){
		  if((TLogin->FieldByName("Login")->AsString) == sUsername){
			 key=true;
				  }
											 }


		if (key==true) {

	//��������� �����
			std::stringstream stream;
	stream << "\"C:\\���������\\exe ��������\\Lotok_v1.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream.str().c_str());

	//��������� �����������



    //�������� ���������, ������������ �����������
	   std::stringstream stream1;
	stream1 << "\"C:\\���������\\exe ��������\\Raspredelenie.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream1.str().c_str());


	//�������� �����-> ������ �����
	  for(int i=0;i < TLogin->RecordCount;i++){
		  if(TLogin->FieldByName("Login")->AsString==sUsername){
		  if(TLogin->FieldByName("Points")->AsInteger > 5){

		  //������ �����
		   std::stringstream stream2;
	stream2 << "\"C:\\���������\\exe ��������\\GivingOut.exe\""
		<< " " // �����������, ���������� ��������� �� ���������
		<< "myargument";
	system(stream2.str().c_str());


		  }
		 }
		}





		}else{ShowMessage("Wrong Login");}
	   }


	}while(true);

	  */
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button6Click(TObject *Sender)
{
ShowMessage("OK");
}
//---------------------------------------------------------------------------



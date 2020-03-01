//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit2.h"
#include "Unit4.h"
#include "Unit3.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <fstream>
#include <conio.h>
#pragma package(smart_init)
#include "ToChtoChutRabotaet.h"

using namespace std;
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall ThreadClass::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall ThreadClass::ThreadClass(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall ThreadClass::Execute()
{
	//---- Place thread code here ----
	string Username;
	int Price=5;

	bool key;
	do{


		//Form3->Label1->Caption="OK";
		//for (;;){
		WinExec("C:\\Исходники\\exe OpenCV\\libzbar64-0.exe", SW_SHOWMINIMIZED); //SW_SHOWMINIMIZED
		Sleep (2300);

	   fstream F;
	   F.open("C:\\ReturningFiles\\return_from_decoding.txt");
	   F >> Username;
	   F.close();



	  //if(kbhit())if(getch() == 27)break;
		UnicodeString sUsername = Username.c_str();

		//Sleep(500);

		if(Username!="0"){
		  //Form3->TLogin->Refresh();
		  Form3->Label2->Caption=sUsername;
          for(int i=0; i <= (Form3->TLogin->RecordCount);i++){
		  if((Form3->TLogin->FieldByName("Login")->AsString) == sUsername){

			 key=true;
				   }
			 Form3->TLogin->Next();
				 }

		Form3->TLogin->Requery();


		if (key==true) {
		Form3->Label3->Caption="Yes";

		int Pl=0,Al=0,Pa=0,Points=0;



	   string put="D:\\QR\\";
	   string bmp=".bmp";
	   string sFile=put+(AnsiString(sUsername).c_str())+bmp;
	   UnicodeString usFile = sFile.c_str();

		   for(int i=0; i < (Form3->TLogin->RecordCount);i++){
			 if((Form3->TLogin->FieldByName("Login")->AsString) == sUsername){

			 Form3->TLogin->Open();
			 Form3->TLogin->Edit();
			 Points=Form3->TLogin->FieldByName("Points")->AsInteger;
			 Pl=Form3->TLogin->FieldByName("Plastic")->AsInteger;
			 Al=Form3->TLogin->FieldByName("Aluminium")->AsInteger;
			 Pa=Form3->TLogin->FieldByName("Paper")->AsInteger;

			 Form3->Label9->Visible=true;
			 Form3->Label10->Visible=true;
			 Form3->Label11->Visible=true;
			 Form3->Label12->Visible=true;
			 Form3->Label8->Visible=true;
			 Form3->Label7->Visible=true;
			 Form3->Label6->Visible=true;
			 Form3->Label5->Visible=true;
			 Form3->Label4->Visible=true;


			 Form3->Label4->Caption=sUsername;
			 Form3->Label9->Caption=Pl;
			 Form3->Label10->Caption=Al;
			 Form3->Label11->Caption=Pa;
			 Form3->Label12->Caption=Points;

			 Form3->QR->Visible=true;
			 Form3->QR->Picture->LoadFromFile(usFile);


				  break;
				   }
		 Form3->TLogin->Next();
		  }

	   /*	   Form2->Show();
		   Form2->Image1->Picture->LoadFromFile(usFile);
		   Form2->Label2->Caption=sUsername;


		   Form2->Show();
	   */

	//Открываем лоток
	  WinExec("C:\\Исходники\\exe Механика\\Lotok.exe", SW_SHOWMINIMIZED);

	//Запускаем определение
	   //WinExec("C:\\Исходники\\exe OpenCV\\.exe", SW_SHOWMINIMIZED);
		Sleep(35000);


				string coun;
				fstream F;
				F.open("C:\\opencv\\return_from_cv.txt");
				F >> coun;
				F.close();


		  UnicodeString ccoun = coun.c_str();

		  Form3->Label1->Caption=ccoun;

		 if (coun=="4" || coun==""){

		  WinExec("C:\\Исходники\\exe Механика\\Lotok_Wrong.exe", SW_SHOWMINIMIZED);

		   Sleep(10000);

             Form3->Label9->Visible=false;
			 Form3->Label10->Visible=false;
			 Form3->Label11->Visible=false;
			 Form3->Label12->Visible=false;
			 Form3->Label8->Visible=false;
			 Form3->Label7->Visible=false;
			 Form3->Label6->Visible=false;
			 Form3->Label5->Visible=false;
			 Form3->Label4->Visible=false;
			 Form3->QR->Visible=false;

			 Form3->Label1->Caption="";

		  }else{



	//Опускаем платформу, поворачиваем направляюще
		WinExec("C:\\Исходники\\exe Механика\\Raspredelenie.exe", SW_SHOWMINIMIZED);

		   Sleep(15000);







		  if(coun=="1")
		  {
		   Pl++;
		   Form3->TLogin->Edit();
		   Form3->TLogin->FieldByName("Plastic")->AsInteger=Pl;
		   Points=Points+2;
		   Form3->TLogin->Edit();
		   Form3->TLogin->FieldByName("Points")->AsInteger=Points;
		  }
		  if(coun=="2")
		  {
		   Al++;
		   Form3->TLogin->Edit();
		   Form3->TLogin->FieldByName("Aluminium")->AsInteger=Al;
		   Points=Points+3;
		   Form3->TLogin->Edit();
		   Form3->TLogin->FieldByName("Points")->AsInteger=Points;
		  }
		  if(coun=="3")
		  {
		   Pa++;
		   Form3->TLogin->Edit();
		   Form3->TLogin->FieldByName("Paper")->AsInteger=Pa;
		   Points++;
           Form3->TLogin->Edit();
		   Form3->TLogin->FieldByName("Points")->AsInteger=Points;
		  }

			 Form3->Label9->Caption=Pl;
			 Form3->Label10->Caption=Al;
			 Form3->Label11->Caption=Pa;
			 Form3->Label12->Caption=Points;




		Sleep(5000);


			   if(Points>=Price){
			   WinExec("C:\\Исходники\\exe Механика\\GivingOut.exe", SW_SHOWMINIMIZED);
			   Sleep(7000);
			   Points=Points-Price;
			   Form3->TLogin->Edit();
			   Form3->TLogin->FieldByName("Points")->AsInteger=Points;

			 }


		  Sleep(8000);

			 Form3->Label9->Visible=false;
			 Form3->Label10->Visible=false;
			 Form3->Label11->Visible=false;
			 Form3->Label12->Visible=false;
			 Form3->Label8->Visible=false;
			 Form3->Label7->Visible=false;
			 Form3->Label6->Visible=false;
			 Form3->Label5->Visible=false;
			 Form3->Label4->Visible=false;
			 Form3->QR->Visible=false;

			 Form3->TLogin->Requery();

             Form3->Label2->Caption="....";
		     Form3->Label3->Caption="....";



			 Form3->Label1->Caption="";
			 key=false;
			   }
		}else{Form3->Label3->Caption="Wrong Login";

		}
	   }else{
		Form3->Label2->Caption="....";
		Form3->Label3->Caption="....";
		}


	 }while(!Terminated);

}
//---------------------------------------------------------------------------

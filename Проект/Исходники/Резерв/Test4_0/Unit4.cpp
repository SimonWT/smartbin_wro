//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#pragma package(smart_init)
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
	do{


		Form3->Label1->Caption="OK";
        for (;;){
		WinExec("C:\\Исходники\\exe OpenCV\\libzbar64-0.exe", SW_SHOWMINIMIZED); //SW_SHOWMINIMIZED

		/*for (int i = 0; i < 100000; i++){
			for (int i = 0; i < 8400; i++) {
			}
		}*/

		Sleep (2300);
	}


	}while(!Terminated);
}
//---------------------------------------------------------------------------

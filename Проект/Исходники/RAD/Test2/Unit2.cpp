//---------------------------------------------------------------------------

#include <vcl.h>
#include <windows.h>

#pragma hdrstop
#pragma comment(lib, "ws2_32.lib")


#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 for (;;){
		WinExec("C:\\Исходники\\exe OpenCV\\libzbar64-0.exe",SW_SHOWMINIMIZED); //SW_SHOWMINIMIZED

		/*for (int i = 0; i < 100000; i++){
			for (int i = 0; i < 8400; i++) {
			}
		}*/

		Sleep (2300);
	}
 }
//---------------------------------------------------------------------------

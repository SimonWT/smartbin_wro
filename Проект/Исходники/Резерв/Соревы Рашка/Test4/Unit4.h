//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class ThreadClass : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall ThreadClass(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif

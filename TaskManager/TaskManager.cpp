//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TaskManager.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddTaskButtonClick(TObject *Sender)
{
	AddTask();
}

//---------------------------------------------------------------------------
 void __fastcall TForm1::AddTask(){
	String taskText = TaskInput->Text.Trim();
	if (!taskText.IsEmpty()) {
		TasksListBox->Items->Add(taskText);
		TaskInput->Text="";
	}
 }

//---------------------------------------------------------------------------
void __fastcall TForm1::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	TasksListBox->Items->Delete(Item->Index);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::TaskInputKeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift)
{
	if(Key == 13){
		AddTask();
	}
}
//---------------------------------------------------------------------------

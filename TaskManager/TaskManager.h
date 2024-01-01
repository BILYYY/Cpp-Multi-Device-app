//---------------------------------------------------------------------------

#ifndef TaskManagerH
#define TaskManagerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *AddTaskButton;
	TLabel *Label1;
	TEdit *TaskInput;
	TListBox *TasksListBox;
	void __fastcall AddTask() ;
	void __fastcall AddTaskButtonClick(TObject *Sender);
	void __fastcall TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);
	void __fastcall TaskInputKeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);



private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

#include "test.h"

//(*InternalHeaders(test)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(test)
//*)

BEGIN_EVENT_TABLE(test,wxPanel)
	//(*EventTable(test)
	//*)
END_EVENT_TABLE()

test::test(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(test)
	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	//*)
}

test::~test()
{
	//(*Destroy(test)
	//*)
}


void test::OnPaint(wxPaintEvent& event)
{
}

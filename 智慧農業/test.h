#ifndef TEST_H
#define TEST_H

//(*Headers(test)
#include <wx/panel.h>
//*)

class test: public wxPanel
{
	public:

		test(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~test();

		//(*Declarations(test)
		//*)

	protected:

		//(*Identifiers(test)
		//*)

	private:

		//(*Handlers(test)
		void OnPaint(wxPaintEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif

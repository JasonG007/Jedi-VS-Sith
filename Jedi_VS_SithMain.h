/***************************************************************
 * Name:      Jedi_VS_SithMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-03-22
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef JEDI_VS_SITHMAIN_H
#define JEDI_VS_SITHMAIN_H

//(*Headers(Jedi_VS_SithFrame)
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/scrolwin.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
//*)
#include "wx/dc.h"

class Jedi_VS_SithFrame: public wxFrame
{
    public:

        Jedi_VS_SithFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Jedi_VS_SithFrame();

    private:

        //(*Handlers(Jedi_VS_SithFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnSetData(wxCommandEvent& event);
        void OnRun(wxCommandEvent& event);
        void OnScrolledWindow1Paint(wxPaintEvent& event);
        void OnScrolledWindow1Resize(wxSizeEvent& event);
        void OnMathPlot1Paint(wxPaintEvent& event);
        void OnPanel2Paint(wxPaintEvent& event);
        void OnScrolledWindow1MouseMove(wxMouseEvent& event);
        void OnPanel2LeftUp(wxMouseEvent& event);
        void OnScrolledWindow2LeftUp(wxMouseEvent& event);
        void OnScrolledWindow3LeftUp(wxMouseEvent& event);
        void OnScrolledWindow4LeftUp(wxMouseEvent& event);
        void OnScrolledWindow5LeftUp(wxMouseEvent& event);
        void OnScrolledWindow6LeftUp(wxMouseEvent& event);
        void OnScrolledWindow6MouseWheel(wxMouseEvent& event);
        //*)

        //(*Identifiers(Jedi_VS_SithFrame)
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT4;
        static const long ID_PANEL2;
        static const long ID_SCROLLEDWINDOW1;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT11;
        static const long ID_STATICTEXT12;
        static const long ID_PANEL3;
        static const long ID_SCROLLEDWINDOW2;
        static const long ID_STATICTEXT13;
        static const long ID_STATICTEXT14;
        static const long ID_STATICTEXT15;
        static const long ID_STATICTEXT16;
        static const long ID_STATICTEXT17;
        static const long ID_STATICTEXT18;
        static const long ID_PANEL4;
        static const long ID_SCROLLEDWINDOW3;
        static const long ID_STATICTEXT19;
        static const long ID_STATICTEXT20;
        static const long ID_STATICTEXT21;
        static const long ID_STATICTEXT22;
        static const long ID_STATICTEXT23;
        static const long ID_STATICTEXT24;
        static const long ID_PANEL5;
        static const long ID_SCROLLEDWINDOW4;
        static const long ID_STATICTEXT25;
        static const long ID_STATICTEXT26;
        static const long ID_STATICTEXT27;
        static const long ID_STATICTEXT28;
        static const long ID_STATICTEXT29;
        static const long ID_STATICTEXT30;
        static const long ID_PANEL6;
        static const long ID_SCROLLEDWINDOW5;
        static const long ID_STATICTEXT31;
        static const long ID_STATICTEXT32;
        static const long ID_STATICTEXT33;
        static const long ID_STATICTEXT34;
        static const long ID_STATICTEXT35;
        static const long ID_STATICTEXT36;
        static const long ID_PANEL7;
        static const long ID_SCROLLEDWINDOW6;
        static const long ID_NOTEBOOK1;
        static const long ID_PANEL1;
        static const long ID_MENUITEM2;
        static const long ID_MENUITEM1;
        static const long ID_MENUITEM3;
        static const long ID_MENUITEM4;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Jedi_VS_SithFrame)
        wxMenuItem* MenuItem2;
        wxStaticText* StaticText24;
        wxStaticText* StaticText22;
        wxMenuItem* MenuItem1;
        wxPanel* Panel1;
        wxPanel* Panel6;
        wxStaticText* StaticText21;
        wxStaticText* StaticText13;
        wxStaticText* StaticText14;
        wxPanel* Panel7;
        wxStaticText* StaticText15;
        wxStaticText* StaticText35;
        wxScrolledWindow* ScrolledWindow1;
        wxMenu* Menu1;
        wxStatusBar* StatusBar1;
        wxStaticText* StaticText32;
        wxStaticText* StaticText17;
        wxStaticText* StaticText28;
        wxScrolledWindow* ScrolledWindow5;
        wxMenu* Menu3;
        wxScrolledWindow* ScrolledWindow4;
        wxStaticText* StaticText20;
        wxStaticText* StaticText18;
        wxStaticText* StaticText1;
        wxStaticText* StaticText10;
        wxStaticText* StaticText16;
        wxPanel* Panel2;
        wxStaticText* StaticText3;
        wxPanel* Panel4;
        wxStaticText* StaticText23;
        wxMenuItem* MenuItem3;
        wxPanel* Panel5;
        wxStaticText* StaticText8;
        wxStaticText* StaticText34;
        wxStaticText* StaticText12;
        wxScrolledWindow* ScrolledWindow6;
        wxPanel* Panel3;
        wxStaticText* StaticText7;
        wxScrolledWindow* ScrolledWindow3;
        wxScrolledWindow* ScrolledWindow2;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxMenuBar* MenuBar1;
        wxStaticText* StaticText36;
        wxStaticText* StaticText30;
        wxStaticText* StaticText2;
        wxStaticText* StaticText27;
        wxNotebook* Notebook1;
        wxMenuItem* MenuItem4;
        wxStaticText* StaticText26;
        wxStaticText* StaticText6;
        wxMenu* Menu2;
        wxStaticText* StaticText19;
        wxStaticText* StaticText29;
        wxStaticText* StaticText9;
        wxStaticText* StaticText33;
        wxStaticText* StaticText31;
        wxStaticText* StaticText11;
        wxStaticText* StaticText25;
        //*)

        int numJedi;
		int numSith;
		int numArenas;
		int numObstacles;
		int columns;
		int rows;
		int numIterations;
		void updateVirtualSize();

        DECLARE_EVENT_TABLE()
};

#endif // JEDI_VS_SITHMAIN_H
                                                                                                                                                                
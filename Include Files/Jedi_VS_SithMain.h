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
        void OnPanel3Paint(wxPaintEvent& event);
        void OnPanel4Paint(wxPaintEvent& event);
        void OnPanel5Paint(wxPaintEvent& event);
        void OnPanel6Paint(wxPaintEvent& event);
        void OnPanel7Paint(wxPaintEvent& event);
        //*)

        //(*Identifiers(Jedi_VS_SithFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_PANEL2;
        static const long ID_SCROLLEDWINDOW1;
        static const long ID_PANEL3;
        static const long ID_SCROLLEDWINDOW2;
        static const long ID_PANEL4;
        static const long ID_SCROLLEDWINDOW3;
        static const long ID_PANEL5;
        static const long ID_SCROLLEDWINDOW4;
        static const long ID_PANEL6;
        static const long ID_SCROLLEDWINDOW5;
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
        wxMenuItem* MenuItem1;
        wxPanel* Panel1;
        wxPanel* Panel6;
        wxPanel* Panel7;
        wxScrolledWindow* ScrolledWindow1;
        wxMenu* Menu1;
        wxStatusBar* StatusBar1;
        wxScrolledWindow* ScrolledWindow5;
        wxMenu* Menu3;
        wxScrolledWindow* ScrolledWindow4;
        wxStaticText* StaticText1;
        wxPanel* Panel2;
        wxStaticText* StaticText3;
        wxPanel* Panel4;
        wxMenuItem* MenuItem3;
        wxPanel* Panel5;
        wxScrolledWindow* ScrolledWindow6;
        wxPanel* Panel3;
        wxStaticText* StaticText7;
        wxScrolledWindow* ScrolledWindow3;
        wxScrolledWindow* ScrolledWindow2;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxMenuBar* MenuBar1;
        wxStaticText* StaticText2;
        wxNotebook* Notebook1;
        wxMenuItem* MenuItem4;
        wxStaticText* StaticText6;
        wxMenu* Menu2;
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

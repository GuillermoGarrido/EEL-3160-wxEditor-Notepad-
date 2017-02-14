/***************************************************************
 * Name:      wxEditorMain.h
 * Purpose:   Defines Application Frame
 * Author:    Guillermo Garrido (ggarr018@fiu.edu)
 * Created:   2017-01-31
 * Copyright: Guillermo Garrido ()
 * License:
 **************************************************************/

#ifndef WXEDITORMAIN_H
#define WXEDITORMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "wxEditorApp.h"

class wxEditorFrame: public wxFrame
{
    public:
        wxEditorFrame(wxFrame *frame, const wxString& title);
        ~wxEditorFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout,
            ID_TextBox,
            idMenuOpen, //Included in version PW4
            idMenuSave //Not part of the original program, included in version PW5
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnOpen (wxCommandEvent& event); //Included in version PW4
        void OnSave (wxCommandEvent& event); //Not part of original program, included in version PW5
        DECLARE_EVENT_TABLE()
};


#endif // WXEDITORMAIN_H

/***************************************************************
 * Name:      wxEditorApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Guillermo Garrido (ggarr018@fiu.edu)
 * Created:   2017-01-31
 * Copyright: Guillermo Garrido ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "wxEditorApp.h"
#include "wxEditorMain.h"

IMPLEMENT_APP(wxEditorApp);

bool wxEditorApp::OnInit()
{
    wxEditorFrame* frame = new wxEditorFrame(0L, _("wxWidgets Application Template"));
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    
    return true;
}

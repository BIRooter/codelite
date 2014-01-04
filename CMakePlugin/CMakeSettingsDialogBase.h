//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CMAKESETTINGSDIALOG_BASE_CLASSES_H
#define CMAKESETTINGSDIALOG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/choice.h>
#include <wx/arrstr.h>
#include <wx/statline.h>
#include <wx/button.h>

class CMakeSettingsDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticTextProgram;
    wxFilePickerCtrl* m_filePickerProgram;
    wxStaticText* m_staticTextDefaultGenerator;
    wxChoice* m_choiceDefaultGenerator;
    wxStaticLine* m_staticLine;
    wxStdDialogButtonSizer* m_stdBtnSizer;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;

protected:

public:
    CMakeSettingsDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("CMakePlugin Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400,150), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~CMakeSettingsDialogBase();
};

#endif

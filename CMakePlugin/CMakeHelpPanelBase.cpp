//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CMakeHelpPanel.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "CMakeHelpPanelBase.h"


// Declare the bitmap loading function
extern void wxCrafterYVsKJwInitBitmapResources();

static bool bBitmapLoaded = false;


CMakeHelpPanelBase::CMakeHelpPanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterYVsKJwInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer);
    
    m_splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE|wxSP_NO_XP_THEME|wxSP_3DSASH);
    m_splitter->SetSashGravity(0.3);
    m_splitter->SetMinimumPaneSize(100);
    
    boxSizer->Add(m_splitter, 1, wxALL|wxEXPAND, 5);
    
    m_splitterPageList = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizerList = new wxBoxSizer(wxVERTICAL);
    m_splitterPageList->SetSizer(boxSizerList);
    
    m_searchCtrlFilter = new wxSearchCtrl(m_splitterPageList, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_PROCESS_ENTER);
    m_searchCtrlFilter->SetFocus();
    m_searchCtrlFilter->ShowSearchButton(true);
    m_searchCtrlFilter->ShowCancelButton(false);
    
    boxSizerList->Add(m_searchCtrlFilter, 0, wxBOTTOM|wxEXPAND, 5);
    m_searchCtrlFilter->SetMinSize(wxSize(-1,22));
    
    wxArrayString m_listBoxListArr;
    m_listBoxList = new wxListBox(m_splitterPageList, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_listBoxListArr, wxLB_SINGLE);
    
    boxSizerList->Add(m_listBoxList, 1, wxALL|wxEXPAND, 0);
    m_listBoxList->SetMinSize(wxSize(100,200));
    
    m_splitterPageText = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter->SplitVertically(m_splitterPageList, m_splitterPageText, 100);
    
    wxBoxSizer* boxSizerText = new wxBoxSizer(wxVERTICAL);
    m_splitterPageText->SetSizer(boxSizerText);
    
    m_htmlWinText = new wxHtmlWindow(m_splitterPageText, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxHW_SCROLLBAR_AUTO|wxBORDER_THEME);
    m_htmlWinText->SetPage(wxT(""));
    
    boxSizerText->Add(m_htmlWinText, 1, wxALL|wxEXPAND, 0);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_searchCtrlFilter->Connect(wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler(CMakeHelpPanelBase::OnSearch), NULL, this);
    m_searchCtrlFilter->Connect(wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN, wxCommandEventHandler(CMakeHelpPanelBase::OnSearchCancel), NULL, this);
    m_searchCtrlFilter->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(CMakeHelpPanelBase::OnSearch), NULL, this);
    m_listBoxList->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(CMakeHelpPanelBase::OnSelect), NULL, this);
    
}

CMakeHelpPanelBase::~CMakeHelpPanelBase()
{
    m_searchCtrlFilter->Disconnect(wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler(CMakeHelpPanelBase::OnSearch), NULL, this);
    m_searchCtrlFilter->Disconnect(wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN, wxCommandEventHandler(CMakeHelpPanelBase::OnSearchCancel), NULL, this);
    m_searchCtrlFilter->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(CMakeHelpPanelBase::OnSearch), NULL, this);
    m_listBoxList->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(CMakeHelpPanelBase::OnSelect), NULL, this);
    
}

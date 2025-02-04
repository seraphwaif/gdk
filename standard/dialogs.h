/*********************************************************************************
*Copyright,2018-2028,Longyou
*FileName: dialogs.h
*Module: standard
*Author: DaXiang
*Version: 1.0
*Date: 2020
*Description:
*Others:
*Function List:
*History:
**********************************************************************************/


#ifndef __STANDARD_DIALOGS_H__
#define __STANDARD_DIALOGS_H__

#include <standard/gui.h>

class CDialog: public CPanel, public CUIEvent{
public:
    CDialog();
    virtual ~CDialog();
    virtual void Close();
};

class CMessageBox: public CPanel, public CUIEvent{
public:
    CMessageBox( const char* strCaption, const char* strTitle );
    virtual ~CMessageBox();
    virtual void Close();

private:
    virtual void OnClick( CUIElement *pSelf );
    CUIElement* m_vElementList[ 4 ];

};

class COpenFileDialog: public CPanel, public CUIEvent{
public:
    COpenFileDialog( const char* strFindPathExtname, const char* strDefaultFileName, const char* strDescText, CUIEvent* pEventObject, int32 nEventID );
    virtual ~COpenFileDialog();
    char* GetFileName( char* strTextBuff );
    char* GetPathName( char* strTextBuff );
    char* GetPathFileName( char* strTextBuff );
private:
    void Init( const char* strFindPathExtname, const char* strDefaultFileName, const char* strDescText, int32 nEventID );
    virtual void OnClick( CUIElement *pSelf );
    virtual void OnSelected( CUIElement* pSelf, int32 nType, int32 nIndex );
    void Close();

private:
    char m_strPath[256];
    int32 m_nSelectIndex;

    CUIEvent* m_pEventObject;
    CLable* m_pDescLB;
    CLable* m_pPathDescLB;
    CLable* m_pPathLB;
    CListView* m_pFilesList;
    CButton* m_pOKBtn;
    CButton* m_pCloseBtn;
};

class CSaveFileDialog: public CPanel, public CUIEvent{
public:
    CSaveFileDialog( const char* strFindPathExtname, const char* strDefaultFileName, const char* strDescText, CUIEvent* pEventObject, int32 nEventID );
    virtual ~CSaveFileDialog();
    char* GetFileName( char* strTextBuff );
    char* GetPathName( char* strTextBuff );
    char* GetPathFileName( char* strTextBuff );
private:
    void Init( const char* strFindPathExtname, const char* strDefaultFileName, const char* strDescText, int32 nEventID );
    virtual void OnClick( CUIElement *pSelf );
    virtual void OnSelected( CUIElement* pSelf, int32 nType, int32 nIndex );
    virtual int32 OnTextEditEvent( CUIElement *pSelf,  const char* strText );
    void Close();

private:
    char m_strPath[256];
    CUIEvent* m_pEventObject;
    CLable* m_pDescLB;
    CLable* m_pPathDescLB;
    CLable* m_pPathLB;
    CListView* m_pFilesList;
    CLable* m_pFileNameDescLB;
    CEditBox* m_pFileNameEB;

    CButton* m_pOKBtn;
    CButton* m_pCloseBtn;

};

class CColorDialog: public CPanel{
public:
    CColorDialog();
    virtual ~CColorDialog();
    virtual void Close();
protected:


};

class CAboutDialog: public CPanel, public CUIEvent{
public:
    CAboutDialog( const char* strName, const char* strVersion, const char* strWebSite, const char* strDesciption,  const char* strCopyright, const char* strDeveloper  );
    virtual ~CAboutDialog();
    virtual void Close();

private:
    virtual void OnClick( CUIElement *pSelf );
    CUIElement* m_vElementList[8];
};


#endif

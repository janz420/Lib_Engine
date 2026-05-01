
#pragma once

#include "./DxAniKeys.h"
#include "./CharacterSound.h"
#include "./DxPieceDefine.h"
#include "./DxAniBoneScale.h"
#include "../DxEffect/EffAni/DxEffAni.h"

enum EMANICONINFO
{
	ACF_NEWINFO		= 0x0001,
	ACF_LOOP		= 0x0010,
	ACF_UPBODY		= 0x0100,	// UPBODY ¼ÂÆÃ.		// UP DOWN ÀÌ ¼ÂÆÃ ¾ÈµÉ °æ¿ì´Â µðÆúÆ®·Î ÀüÃ¼´Ù.
	ACF_DOWNBODY	= 0x0200,	// UPÀÌ ¾ø°í DOWN¸¸ ¼ÂÆÃ µÉ °æ¿ì UPÀº DOWN¿¡ ¿µÇâÀ» ¹Þ¾Æ¾ß ÇÑ´Ù.
	ACF_SZNAME		= 128,
	ACF_DIV			= 8,
	ACF_STRIKE		= 9,
};

struct SANIMCONINFO_101
{
	TCHAR			m_szName[ACF_SZNAME];		//	ÀÌ¸§.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	»À´Ù±Í ÀÌ¸§.

	DWORD			m_dwFlag;					//	±âÅ¸ ¼Ó¼º.
	DWORD			m_dwSTime;					//	½ÃÀÛ ½Ã°£.
	DWORD			m_dwETime, m_dwETimeOrig;	//	³¡ ½Ã°£.
	DWORD			m_UNITTIME;					//	Å°´ÜÀ§ ½Ã°£.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å° °¹¼ö.
	WORD			m_wDivFrame[ACF_DIV];		//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å°µé..

	SANIMCONINFO_101()
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );
	}
};

struct SANIMCONINFO_102
{
	TCHAR			m_szName[ACF_SZNAME];		//	ÀÌ¸§.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	»À´Ù±Í ÀÌ¸§.

	DWORD			m_dwFlag;					//	±âÅ¸ ¼Ó¼º.
	DWORD			m_dwSTime;					//	½ÃÀÛ ½Ã°£.
	DWORD			m_dwETime, m_dwETimeOrig;	//	³¡ ½Ã°£.
	DWORD			m_UNITTIME;					//	Å°´ÜÀ§ ½Ã°£.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å° °¹¼ö.
	WORD			m_wDivFrame[ACF_DIV];		//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å°µé..

	SChaSoundData_102	m_ChaSoundData;				//	»ç¿îµå µ¥ÀÌÅ¸

	SANIMCONINFO_102()
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );
	}
};

struct SANIMCONINFO_103
{
	TCHAR			m_szName[ACF_SZNAME];
	TCHAR			m_szSkeletion[ACF_SZNAME];

	DWORD			m_dwFlag;
	DWORD			m_dwSTime;
	DWORD			m_dwETime, m_dwETimeOrig;
	DWORD			m_UNITTIME;

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;
	WORD			m_wDivFrame[ACF_DIV];

	SChaSoundData_103	m_ChaSoundData;

	SANIMCONINFO_103()
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );
	}
};

enum EMSTRIKE_EFF
{
	EMSF_NULL		= 0,
	EMSF_SELFBODY	= 1,
	EMSF_TARGET		= 2,

	EMSF_SIZE		= 3
};

struct SANIMSTRIKE
{
	EMPIECECHAR		m_emPiece;
	EMSTRIKE_EFF	m_emEffect;
	DWORD			m_dwFrame;

	SANIMSTRIKE () :
	m_emPiece(PIECE_RHAND),
		m_emEffect(EMSF_TARGET),
		m_dwFrame(0)
	{
	}
};

struct SANIMCONINFO_104
{
	TCHAR			m_szName[ACF_SZNAME];		//	ÀÌ¸§.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	»À´Ù±Í ÀÌ¸§.

	DWORD			m_dwFlag;					//	±âÅ¸ ¼Ó¼º.
	DWORD			m_dwSTime;					//	½ÃÀÛ ½Ã°£.
	DWORD			m_dwETime, m_dwETimeOrig;	//	³¡ ½Ã°£.
	DWORD			m_UNITTIME;					//	Å°´ÜÀ§ ½Ã°£.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å° °¹¼ö.
	WORD			m_wDivFrame[ACF_DIV];		//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å°µé.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Å¸°Ý ÀÌÆÑÆ® ½ÃÁ¡µé.

	SChaSoundData_103	m_ChaSoundData;				//	»ç¿îµå µ¥ÀÌÅ¸

	SANIMCONINFO_104()
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );
	}
};

struct SANIMCONINFO_105
{
	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	ÀÌ¸§.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	»À´Ù±Í ÀÌ¸§.

	DWORD			m_dwFlag;					//	±âÅ¸ ¼Ó¼º.
	DWORD			m_dwSTime;					//	½ÃÀÛ ½Ã°£.
	DWORD			m_dwETime, m_dwETimeOrig;	//	³¡ ½Ã°£.
	DWORD			m_UNITTIME;					//	Å°´ÜÀ§ ½Ã°£.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å° °¹¼ö.
	WORD			m_wDivFrame[ACF_DIV];		//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å°µé.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Å¸°Ý ÀÌÆÑÆ® ½ÃÁ¡µé.

	SChaSoundData_103	m_ChaSoundData;				//	»ç¿îµå µ¥ÀÌÅ¸

	EFFANILIST		m_listEffAni;				// ¸ð¼Ç È¿°ú !

	SANIMCONINFO_105()
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );
	}
};

struct SANIMCONINFO_106
{
	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	ÀÌ¸§.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	»À´Ù±Í ÀÌ¸§.

	DWORD			m_dwFlag;					//	±âÅ¸ ¼Ó¼º.
	DWORD			m_dwSTime;					//	½ÃÀÛ ½Ã°£.
	DWORD			m_dwETime, m_dwETimeOrig;	//	³¡ ½Ã°£.
	DWORD			m_UNITTIME;					//	Å°´ÜÀ§ ½Ã°£.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å° °¹¼ö.
	WORD			m_wDivFrame[ACF_DIV];		//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å°µé.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Å¸°Ý ÀÌÆÑÆ® ½ÃÁ¡µé.

	SChaSoundData	m_ChaSoundData;				//	»ç¿îµå µ¥ÀÌÅ¸

	EFFANILIST		m_listEffAni;				// ¸ð¼Ç È¿°ú !

	SANIMCONINFO_106 () :
		m_dwFlag(ACF_LOOP|ACF_NEWINFO),
		m_dwSTime(0),
		m_dwETime(0),
		m_dwETimeOrig(0),
		m_UNITTIME(0),
		m_MainType(AN_GUARD_N),
		m_SubType(AN_SUB_NONE),

		m_wDivCount(0),
		m_wStrikeCount(0)
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );

		memset ( m_wDivFrame, 0, sizeof(WORD)*ACF_DIV );
	}
};

// Added by janzs420  | add new version for animation cfg
struct SANIMCONINFO_107			// 107
{
	//enum { VERSION = 0x0108 };

	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	�̸�.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	���ٱ� �̸�.

	DWORD			m_dwFlag;					//	��Ÿ �Ӽ�.
	DWORD			m_dwSTime;					//	���� �ð�.
	DWORD			m_dwETime, m_dwETimeOrig;	//	�� �ð�.
	DWORD			m_UNITTIME;					//	Ű���� �ð�.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	���ϸ��̼� ���� Ű ����.
	WORD			m_wDivFrame[ACF_DIV];		//	���ϸ��̼� ���� Ű��.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Ÿ�� ����Ʈ ������.

	SChaSoundData	m_ChaSoundData;				//	���� ����Ÿ

	EFFANILIST		m_listEffAni;				// ��� ȿ�� !
	DxAniScale*		m_pAniScale;				// �ִϸ��̼� ������.~!

	SANIMCONINFO_107 () :
		m_dwFlag(ACF_LOOP|ACF_NEWINFO),
		m_dwSTime(0),
		m_dwETime(0),
		m_dwETimeOrig(0),
		m_UNITTIME(0),
		m_MainType(AN_GUARD_N),
		m_SubType(AN_SUB_NONE),

		m_wDivCount(0),
		m_wStrikeCount(0),
		m_pAniScale(NULL)
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );

		memset ( m_wDivFrame, 0, sizeof(WORD)*ACF_DIV );

		m_pAniScale = new DxAniScale;
	}
};

struct SANIMCONINFO_108			// 107
{
	//enum { VERSION = 0x0108 };

	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	�̸�.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	���ٱ� �̸�.

	DWORD			m_dwFlag;					//	��Ÿ �Ӽ�.
	DWORD			m_dwSTime;					//	���� �ð�.
	DWORD			m_dwETime, m_dwETimeOrig;	//	�� �ð�.
	DWORD			m_UNITTIME;					//	Ű���� �ð�.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	���ϸ��̼� ���� Ű ����.
	WORD			m_wDivFrame[ACF_DIV];		//	���ϸ��̼� ���� Ű��.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Ÿ�� ����Ʈ ������.

	SChaSoundData	m_ChaSoundData;				//	���� ����Ÿ

	EFFANILIST		m_listEffAni;				// ��� ȿ�� !
	DxAniScale*		m_pAniScale;				// �ִϸ��̼� ������.~!

	SANIMCONINFO_108 () :
		m_dwFlag(ACF_LOOP|ACF_NEWINFO),
		m_dwSTime(0),
		m_dwETime(0),
		m_dwETimeOrig(0),
		m_UNITTIME(0),
		m_MainType(AN_GUARD_N),
		m_SubType(AN_SUB_NONE),

		m_wDivCount(0),
		m_wStrikeCount(0),
		m_pAniScale(NULL)
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );

		memset ( m_wDivFrame, 0, sizeof(WORD)*ACF_DIV );

		m_pAniScale = new DxAniScale;
	}
};

struct SANIMCONINFO_109			// 107
{
	//enum { VERSION = 0x0108 };

	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	�̸�.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	���ٱ� �̸�.

	DWORD			m_dwFlag;					//	��Ÿ �Ӽ�.
	DWORD			m_dwSTime;					//	���� �ð�.
	DWORD			m_dwETime, m_dwETimeOrig;	//	�� �ð�.
	DWORD			m_UNITTIME;					//	Ű���� �ð�.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	���ϸ��̼� ���� Ű ����.
	WORD			m_wDivFrame[ACF_DIV];		//	���ϸ��̼� ���� Ű��.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Ÿ�� ����Ʈ ������.

	SChaSoundData	m_ChaSoundData;				//	���� ����Ÿ

	EFFANILIST		m_listEffAni;				// ��� ȿ�� !
	DxAniScale*		m_pAniScale;				// �ִϸ��̼� ������.~!

	SANIMCONINFO_109 () :
		m_dwFlag(ACF_LOOP|ACF_NEWINFO),
		m_dwSTime(0),
		m_dwETime(0),
		m_dwETimeOrig(0),
		m_UNITTIME(0),
		m_MainType(AN_GUARD_N),
		m_SubType(AN_SUB_NONE),

		m_wDivCount(0),
		m_wStrikeCount(0),
		m_pAniScale(NULL)
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );

		memset ( m_wDivFrame, 0, sizeof(WORD)*ACF_DIV );

		m_pAniScale = new DxAniScale;
	}
};

struct SANIMCONINFO_110			// 107
{
	//enum { VERSION = 0x0108 };

	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	�̸�.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	���ٱ� �̸�.

	DWORD			m_dwFlag;					//	��Ÿ �Ӽ�.
	DWORD			m_dwSTime;					//	���� �ð�.
	DWORD			m_dwETime, m_dwETimeOrig;	//	�� �ð�.
	DWORD			m_UNITTIME;					//	Ű���� �ð�.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	���ϸ��̼� ���� Ű ����.
	WORD			m_wDivFrame[ACF_DIV];		//	���ϸ��̼� ���� Ű��.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Ÿ�� ����Ʈ ������.

	SChaSoundData	m_ChaSoundData;				//	���� ����Ÿ

	EFFANILIST		m_listEffAni;				// ��� ȿ�� !
	DxAniScale*		m_pAniScale;				// �ִϸ��̼� ������.~!

	SANIMCONINFO_110 () :
		m_dwFlag(ACF_LOOP|ACF_NEWINFO),
		m_dwSTime(0),
		m_dwETime(0),
		m_dwETimeOrig(0),
		m_UNITTIME(0),
		m_MainType(AN_GUARD_N),
		m_SubType(AN_SUB_NONE),

		m_wDivCount(0),
		m_wStrikeCount(0),
		m_pAniScale(NULL)
	{
		memset( m_szName, 0, sizeof(TCHAR)*ACF_SZNAME );
		memset( m_szSkeletion, 0, sizeof(TCHAR)*ACF_SZNAME );

		memset ( m_wDivFrame, 0, sizeof(WORD)*ACF_DIV );

		m_pAniScale = new DxAniScale;
	}
};

struct SANIMCONINFO	
{
	enum 
	{ 
		VERSION			= 0x0115,
		VERSION_ENCODE	= 0x0115,
	};

	typedef std::list<DxEffAniData*>				EFFANILIST;			
	typedef std::list<DxEffAniData*>::iterator		EFFANILIST_ITER;

	TCHAR			m_szName[ACF_SZNAME];		//	ÀÌ¸§.
	TCHAR			m_szSkeletion[ACF_SZNAME];	//	»À´Ù±Í ÀÌ¸§.

	DWORD			m_dwFlag;					//	±âÅ¸ ¼Ó¼º.
	DWORD			m_dwSTime;					//	½ÃÀÛ ½Ã°£.
	DWORD			m_dwETime, m_dwETimeOrig;	//	³¡ ½Ã°£.
	DWORD			m_UNITTIME;					//	Å°´ÜÀ§ ½Ã°£.

	EMANI_MAINTYPE	m_MainType;
	EMANI_SUBTYPE	m_SubType;

	WORD			m_wDivCount;				//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å° °¹¼ö.
	WORD			m_wDivFrame[ACF_DIV];		//	¿¡´Ï¸ÞÀÌ¼Ç ºÐÇÒ Å°µé.

	WORD			m_wStrikeCount;
	SANIMSTRIKE		m_sStrikeEff[ACF_STRIKE];	//	Å¸°Ý ÀÌÆÑÆ® ½ÃÁ¡µé.

	SChaSoundData	m_ChaSoundData;				//	»ç¿îµå µ¥ÀÌÅ¸

	EFFANILIST		m_listEffAni;				// ¸ð¼Ç È¿°ú !
	DxAniScale*		m_pAniScale;				// ¾Ö´Ï¸ÞÀÌ¼Ç ½ºÄÉÀÏ.~!

	SANIMCONINFO();
	~SANIMCONINFO();
	void CleanUp();

	BOOL LoadFile ( const TCHAR *szFileName, LPDIRECT3DDEVICEQ pd3dDevice=NULL );
	void LoadFile_0101 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0102 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0103 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0104 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0105 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0106 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0107 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	
	//official version partial read only
	void LoadFile_0108_0109_0110 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	void LoadFile_0111_0112_0114_0115 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );
	
	void LoadFile_0200 ( basestream &SFile, LPDIRECT3DDEVICEQ pd3dDevice );

	BOOL SaveFile ( const TCHAR *szFileName );

	SANIMCONINFO& operator = ( SANIMCONINFO &value );
};
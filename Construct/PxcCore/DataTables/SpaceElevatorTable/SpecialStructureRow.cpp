#include "SpecialStructureRow.h"

CSpecialStructureRow::CSpecialStructureRow()
{
	//
}

CSpecialStructureRow::~CSpecialStructureRow()
{
	//
}

void CSpecialStructureRow::Read(PxcUtil::CCSVTableOperator& tabop)
{
	tabop.GetValue("ID", m_iID);
	tabop.GetValue("DisplayText", m_iDisplayTextID);
	tabop.GetValue("AssetName", m_strAssetName);
	tabop.GetValue("ZLocation", m_dZLocation);
	tabop.GetValue("Height", m_dHeight);
	tabop.GetValue("Offset", m_dOffset);
	int iBool = 0;
	tabop.GetValue("IsBase", iBool);
	m_bBase = (bool)iBool;
}
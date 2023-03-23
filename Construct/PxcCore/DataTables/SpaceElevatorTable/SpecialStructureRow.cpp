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
	tabop.GetValue("EmbedType", *(int*)&m_eEmbedType);
}
#pragma once
#include "PxcUtil/CSVTableOperator.h"
#include "PublicDefinitions/SpaceElevatorDef.h"

class CSpecialStructureRow
{
public:
	CSpecialStructureRow();
	~CSpecialStructureRow();
	void Read(PxcUtil::CCSVTableOperator& tabop);

	int m_iID;
	int m_iDisplayTextID;
	std::string m_strAssetFile;
	double m_dZLocation;//米（100单位）
	double m_dHeight;//单位（0.01米）
	double m_dOffset;//-1到1
	SpaceElevatorDef::EEmbedType m_eEmbedType;//嵌入类型
	double m_dDocking;//单位，0对应ZLocation
};
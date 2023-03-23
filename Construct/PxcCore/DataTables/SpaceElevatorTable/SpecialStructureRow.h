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
	std::string m_strAssetName;
	double m_dZLocation;//�ף�10��λ��
	double m_dHeight;//��λ��0.1�ף�
	double m_dOffset;//-1��1
	SpaceElevatorDef::EEmbedType m_eEmbedType;//Ƕ������
};
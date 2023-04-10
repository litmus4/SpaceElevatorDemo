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
	double m_dZLocation;//�ף�100��λ��
	double m_dHeight;//��λ��0.01�ף�
	double m_dOffset;//-1��1
	SpaceElevatorDef::EEmbedType m_eEmbedType;//Ƕ������
	double m_dDocking;//��λ��0��ӦZLocation
};
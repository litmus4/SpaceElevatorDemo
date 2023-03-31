#pragma once
#include "PxcUtil/CSVTableOperator.h"
#include "PublicDefinitions/SpaceElevatorDef.h"

class CCarNumberRow
{
public:
	CCarNumberRow();
	~CCarNumberRow();
	void Read(PxcUtil::CCSVTableOperator& tabop);

	int m_iID;
	int m_iDisplayTextID;
	std::string m_strAssetFile;//�����ͼ
	SpaceElevatorDef::ECarType m_eCarType;
	bool m_bUp;//�Ƿ�����
	std::vector<int> m_vecDockings;//ͣ��վ�㣬��Ӧ����ṹID
	double m_dVelocity;
	double m_dAcceleration;
	double m_dDeceleration;
	std::vector<int> m_vecRubbingShoulders;//��������Ľ��ᳵ��ID
	std::vector<double> m_vecRubbingZs;//���������Z��߶�
};
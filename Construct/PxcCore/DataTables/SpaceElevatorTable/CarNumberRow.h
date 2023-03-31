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
	std::string m_strAssetFile;//编号贴图
	SpaceElevatorDef::ECarType m_eCarType;
	bool m_bUp;//是否上行
	std::vector<int> m_vecDockings;//停靠站点，对应特殊结构ID
	double m_dVelocity;
	double m_dAcceleration;
	double m_dDeceleration;
	std::vector<int> m_vecRubbingShoulders;//擦肩而过的轿厢车次ID
	std::vector<double> m_vecRubbingZs;//擦肩而过的Z轴高度
};
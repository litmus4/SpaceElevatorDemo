#include "CarNumberRow.h"

CCarNumberRow::CCarNumberRow()
{
	//
}

CCarNumberRow::~CCarNumberRow()
{
	//
}

void CCarNumberRow::Read(PxcUtil::CCSVTableOperator& tabop)
{
	tabop.GetValue("ID", m_iID);
	tabop.GetValue("DisplayText", m_iDisplayTextID);
	tabop.GetValue("AssetPath", m_strAssetFile);
	tabop.GetValue("CarType", *(int*)&m_eCarType);
	int iBool = 0;
	tabop.GetValue("IsUp", iBool);
	m_bUp = (bool)iBool;
	tabop.GetArray("Dockings", m_vecDockings);
	tabop.GetValue("Velocity", m_dVelocity);
	tabop.GetValue("Acceleration", m_dAcceleration);
	tabop.GetValue("Deceleration", m_dDeceleration);
	tabop.GetArray("RubbingShoulders", m_vecRubbingShoulders);
	tabop.GetArray("RubbingZs", m_vecRubbingZs);
}
#include "SpaceElevatorTableCenter.h"
#include "..\LoadDefines.h"

CSpaceElevatorTableCenter::CSpaceElevatorTableCenter()
{
	//
}

CSpaceElevatorTableCenter::~CSpaceElevatorTableCenter()
{
	//
}

bool CSpaceElevatorTableCenter::Init(const std::string& strPath)
{
	LOADTABLE(SpecialStructure, strPath, "SpaceElevatorTable", m_mapSpecialStructures, m_iID)
	return true;
}

void CSpaceElevatorTableCenter::Release()
{
	UNLOADTABLE(SpecialStructure, m_mapSpecialStructures)
	DeleteInstance();
}

CSpecialStructureRow* CSpaceElevatorTableCenter::GetSpecialStructureRow(int iID)
{
	std::map<int, CSpecialStructureRow*>::iterator iter = m_mapSpecialStructures.find(iID);
	if (iter != m_mapSpecialStructures.end())
		return iter->second;
	return NULL;
}

CSpecialStructureRow* CSpaceElevatorTableCenter::GetFirstSpecialStructureRow()
{
	if (m_mapSpecialStructures.empty())
		return NULL;
	return m_mapSpecialStructures.begin()->second;
}

CSpecialStructureRow* CSpaceElevatorTableCenter::GetNextSpecialStructureRow(int iID)
{
	std::map<int, CSpecialStructureRow*>::iterator iter = m_mapSpecialStructures.find(iID);
	if (iter != m_mapSpecialStructures.end())
	{
		if (++iter != m_mapSpecialStructures.end())
			return iter->second;
	}
	return NULL;
}
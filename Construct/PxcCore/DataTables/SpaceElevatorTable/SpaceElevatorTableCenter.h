#pragma once
#include "PxcUtil/Singleton.h"
#include "SpecialStructureRow.h"
#include "CarNumberRow.h"

class CSpaceElevatorTableCenter : public PxcUtil::Singleton<CSpaceElevatorTableCenter>
{
DECLARE_SINGLETON_CONSTRUCTOR(CSpaceElevatorTableCenter)
public:
	~CSpaceElevatorTableCenter();
	bool Init(const std::string& strPath);
	void Release();

	CSpecialStructureRow* GetSpecialStructureRow(int iID);
	CSpecialStructureRow* GetFirstSpecialStructureRow();
	CSpecialStructureRow* GetNextSpecialStructureRow(int iID);

	CCarNumberRow* GetCarNumberRow(int iID);

private:
	std::map<int, CSpecialStructureRow*> m_mapSpecialStructures;
	std::map<int, CCarNumberRow*> m_mapCarNumbers;
};
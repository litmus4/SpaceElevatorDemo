#pragma once
#include "PxcUtil/Singleton.h"
#include "SpecialStructureRow.h"

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

private:
	std::map<int, CSpecialStructureRow*> m_mapSpecialStructures;
};
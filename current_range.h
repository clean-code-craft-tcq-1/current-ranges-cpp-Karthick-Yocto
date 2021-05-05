#pragma once
#include <vector>

using namespace std;

struct RangeInfo
{
	int m_min;
	int m_max;
	int m_numsInRange;
}; 


void processRangeInfo(std::vector<int>, std::vector<RangeInfo*>&);

void findRanges(const std::vector<int>&, std::vector<RangeInfo*>&);

void displayRangeInfo(std::vector<RangeInfo*>&);

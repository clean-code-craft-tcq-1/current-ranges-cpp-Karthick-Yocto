#pragma once
#include <vector>

using namespace std;

struct RangeInfo
{
	int m_min;
	int m_max;
	int m_numsInRange;
}; 


void processRange(std::vector<int>, std::vector<RangeInfo*>&);

void findRanges(const std::vector<int>&, std::vector<RangeInfo*>&);

void displayRange(std::vector<RangeInfo*>&);

#include "current_range.h"
#include <iostream>
#include <algorithm>

void displayRange(std::vector<RangeInfo*>& processesedRangeList)
{
	
	for (const auto& i : processesedRangeList)
		cout << i->m_min << "-" << i->m_max << "  ,  " << i->m_numsInRange << endl;
	
}

void processRange(std::vector<int> inputList, std::vector<RangeInfo*>& outputList)
{
	int min, max, count = 0; 
	sort(inputList.begin(), inputList.end());
	min = inputList[0];
	max = inputList[0];
	
	for (std::vector<int>::const_iterator itr = inputList.begin() ; itr != inputList.end(); ++itr)
	{
		if (*itr - max <= 1)
		{
			max = *itr;
			++count;
		}
		else
		{
			outputList.push_back(new RangeInfo{ min,max,count });
			min = *itr;
			max = *itr;
			count = 1;
		}

	}
	outputList.push_back(new RangeInfo{ min,max,count });
}

void findRanges(const std::vector<int>& inputList, std::vector<RangeInfo*>& outputList)
{
	if (inputList.empty())
	{
		/*ignore if empty input*/
		return ;
	}
	else
	{
		processRangeInfo(inputList, outputList);

		/*@Todo : Display completion*/
		displayRangeInfo(outputList);
	}
}

#pragma once
#include "Speaker.hpp"

class compare
{
public:
	bool operator()(Speaker& s1, Speaker& s2)
	{
		return s1.score < s2.score;
	}
};
class Compare
{
public:
	bool operator()(Speaker& s1, Speaker& s2)
	{
		return s1.score > s2.score;
	}
};
#pragma once
#include <string>

using namespace std;

struct DateWorker {
	int d;
	int m;
	int y;
};

struct Worker
{
	string FullName;
	DateWorker date_w;
};
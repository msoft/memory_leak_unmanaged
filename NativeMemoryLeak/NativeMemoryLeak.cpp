#include "pch.h"
#include <windows.h>
#include <iostream>
#include "LeakingObject.h"

int main()
{
	int objectCount = 10000;

	LeakingObject **leakingObjects = new LeakingObject*[objectCount];
	for (int i = 0; i < objectCount; i++)
	{
		leakingObjects[i] = new LeakingObject(10);
	}

	for (int i = 0; i < objectCount; i++)
	{
		leakingObjects[i]->CreateObjects();

		if (i % 10 == 0)
			Sleep(100);
	}
}

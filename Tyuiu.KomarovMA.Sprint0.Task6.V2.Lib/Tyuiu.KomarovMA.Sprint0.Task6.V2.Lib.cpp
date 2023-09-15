// Tyuiu.KomarovMA.Sprint0.Task6.V2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service3 : public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return (a / 3 / b + 6);
	}
};

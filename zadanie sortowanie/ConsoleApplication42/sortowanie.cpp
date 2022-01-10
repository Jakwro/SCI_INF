
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include"sortowanie.h"
#include <time.h>
using namespace std;
sortowanie::sortowanie() {
	srand(time(NULL));
	for (int i = 0; i < 20000; i++)
	{
		random_numb.push_back(rand() % 1000);
	}
	//wys();
}
void sortowanie::gen() {
	srand(time(NULL));
	for (int i = 0; i < random_numb.size() - 1; i++)
	{
		random_numb[i] = rand() % 1000;
	}
	//wys();
}
void sortowanie::sortowanie_std() {
	sort(random_numb.begin(), random_numb.end());
	//wys();
}
void sortowanie::quick_sort(int left, int right) {
	int i = (left + right) / 2;
	int piwot = random_numb[i];
	random_numb[i] = random_numb[right];
	int j = left;
	for (i = left; i < right; i++)
	{
		if (random_numb[i] < piwot)
		{
			swap(random_numb[i], random_numb[j]);
			j++;
		}
	}
	random_numb[right] = random_numb[j];
	random_numb[j] = piwot;
	if (left < j - 1)
	{
		quick_sort(left, j - 1);
	}

	if (j + 1 < right) {
		quick_sort(j + 1, right);
	}
}
void sortowanie::wybor() {
	for (int j = 0; j < random_numb.size() - 1; j++)
	{
		int naj = j;
		for (int i = j + 1; i < random_numb.size(); i++)
		{
			if (random_numb[i] < random_numb[naj])
			{
				naj = i;
			}
		}
		int temp;
		temp = random_numb[j];
		random_numb[j] = random_numb[naj];
		random_numb[naj] = temp;
	}
	//wys();
}
void sortowanie::wys() {
	cout << "\n----------------------------------------------------";
	for (int i = 0; i < random_numb.size(); i++)
	{
		cout << "\n" << "liczba nr " << i + 1 << ": " << random_numb[i];
	}
	cout << "\n----------------------------------------------------";
}
void sortowanie::babel() {
	for (int i = 0; i < random_numb.size() - 1; i++)
	{
		for (int i = 0; i < random_numb.size() - 1; i++)
		{

			if (random_numb[i] > random_numb[i + 1]) {
				int temp = random_numb[i];
				random_numb[i] = random_numb[i + 1];
				random_numb[i + 1] = temp;
			}
		}
	}
	//wys();
}
void sortowanie::select() {
	for (int j = random_numb.size() - 1; j >= 0; j--)
	{
		x = random_numb[j];
		i = j + 1;
		while (i<random_numb.size() && x>random_numb[i])
		{
			random_numb[i - 1] = random_numb[i];
			i++;
		}
		random_numb[i - 1] = x;
	}
	//wys();
}

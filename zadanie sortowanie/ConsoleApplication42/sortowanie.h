#include<vector>
using namespace std;
class sortowanie
{
public:
	sortowanie();
	void wys();
	void babel();
	void wybor();
	void sortowanie_std();
	void select();
	void quick_sort(int left, int right);
	void gen();
	vector <int> random_numb;
private:
	int x, i;
};
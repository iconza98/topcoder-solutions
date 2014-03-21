#include <iostream>
#include <vector>

using namespace std;

class SpeedRadar
{
public:
	double averageSpeed(int minimit, int maxLimit, vector<int> readings){
		int sum = 0;
		int speeders = 0;
		int legal = 0;
		for(auto it = readings.begin(); it !=readings.end(); ++it){
			if(*it > maxLimit || *it < minimit)
				++speeders;
			else{
				sum += *it;
				++legal;
			}
		}
		return (speeders > 0 && (double)speeders/readings.size() > .1) ? 0.0 : (double)sum/legal;
	}
};




int main()
{
	SpeedRadar radar1;
	vector<int> data;

	data.push_back(25);
	data.push_back(45);
	data.push_back(45);
	data.push_back(43);
	data.push_back(24);
	data.push_back(9);
	data.push_back(51);
	data.push_back(55);
	data.push_back(60);
	data.push_back(34);
	data.push_back(61);
	data.push_back(23);
	data.push_back(40);
	data.push_back(40);
	data.push_back(47);
	data.push_back(49);
	data.push_back(33);
	data.push_back(23);
	data.push_back(47);
	data.push_back(54);
	data.push_back(54);

	cout << radar1.averageSpeed(20,60,data) << endl;


	return 0;
}

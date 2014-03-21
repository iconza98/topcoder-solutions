

#include <cstdio>	// sprintf
#include <iostream> //cout & endl;

using namespace std;

class Time{
public:
	// whatTime function
	// purpose: take a amount of seconds and process time
	//			<hours>:<minutes>:<seconds>
	// args:	the amount of seconds as an integer
	// returns:	string
	static string whatTime(int seconds){
		char buffer[128];
		string temp;
		sprintf(buffer, "%d:%d:%d", seconds/3600, (seconds%3600)/60, seconds%60);
		return temp = buffer;
	}
};

int main()
{
	int time = 3661;
	cout << Time::whatTime(time) << endl;

}
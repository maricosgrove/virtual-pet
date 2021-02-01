#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t current_time;

	current_time = time(NULL);
	cout << current_time << " seconds has passed since 00:00:00 GMT, Jan 1, 1970";


	cout << "\nGo ahead and count to 10...\n";
	system("pause");
	current_time = time(NULL) - current_time;
	cout << "\nThis should return about 10: " << current_time;
	return 0;
}

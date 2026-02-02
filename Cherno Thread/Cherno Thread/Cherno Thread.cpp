#include <thread>
#include <iostream>
using namespace std;
static bool sf = false;

void work() {
	cout << "ID =" << this_thread::get_id() << endl;
	while (!sf) {
		cout << "Working..\n";
		this_thread::sleep_for(0.5s);
	}
}

int main()
{
	thread worker(work);

	cin.get();
	sf = true;

	worker.join();
	cout << "Finished ID =" << this_thread::get_id() << endl;
	cin.get();

}

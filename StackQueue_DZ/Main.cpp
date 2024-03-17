#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<fstream>
#include<ctime>

void ShuffleQueue(std::queue<std::string>& q) {
	srand(time(NULL));
	int n = rand() % q.size();
	while (n > 0) {
		std::string first = q.front();
		q.pop();
		q.push(first);
		n--;
	}

}

int main() {

	std::ifstream file("Name.txt");

	if (!file.is_open()) {
		std::cerr << "Error opening file" << std::endl;
	}

	std::string name;
	std::queue<std::string> qwe1;
	std::queue<std::string> qwe2;

	while (std::getline(file, name)) {
		qwe1.push(name);
		qwe2.push(name);
	}

	for (int i = qwe1.size(); i != 0; i--) {
		std::cout << qwe1.front() << ' ';
		qwe1.pop();
	}
	std::cout << std::endl;

	ShuffleQueue(qwe2);
	
	for (int i = qwe2.size(); i != 0; i--) {
		std::cout << qwe2.front() << ' ';
		qwe2.pop();
	}

	return 0;
}
		



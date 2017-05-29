#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

bool login(void) {
	std::string logi, passwd, check_logi = "admin", check_passwd = "admin";
	
	std::cout << "Welcome" << std::endl;
	std::cout << "Type a login" << std::endl;
	std::cin >> logi;
	std::cout << "Type password" << std::endl;
	std::cin >> passwd;
	
	if (logi == check_logi && passwd == check_passwd){
		return true;
	}
	else {
		return false;
	}
}


void add_to_file(void) {
	std::string name, price, check;
	int count = 1;
	std::ifstream items("items.txt");

	while (std::getline(items, check)) {
		count++;
	}
	std::ofstream copy_items("items.txt", std::ios_base::app | std::ios_base::out);
	std::cout << "Give a name of an item." << std::endl;
	std::cin >> name;
	std::cout << "Give a price of an item." << std::endl;
	std::cin >> price;
	copy_items << "ID: " << count << " " << "Name: " << name << " " << "Price: " << price << std::endl;
}

void items_database(void) {
	std::ifstream items("items.txt");
	
	if (items.is_open()) {
		std::cout << items.rdbuf();
	}
	else {
		std::cout << "File does not exist." << std::endl;
	}
}

void receipts_database(void) {
	std::ifstream receipts("receipts.txt");
	
	if (receipts.is_open()) {
		std::cout << receipts.rdbuf();
	}
	else {
		std::cout << "File does not exist." << std::endl;
	}
}

void show_options(void) {
	int options;
	bool loop = true;

	while (loop) {
		std::cout << "What you want to do." << "\n" << "(1)Add new item to database." << "\n" << "(2)Show items database." << "\n" << "(3)Show receipts database." << "\n" << "(0)Exit." << std::endl;
		std::cin >> options;
		if (options == 0) {
			loop = false;
		}
		else if (options == 1) {
			add_to_file();
		}
		else if (options == 2) {
			items_database();
		}
		else if (options == 3) {
			receipts_database();
		}
	}
}

int main() {
	bool l = login();
	if (l) {
		show_options();
	}
	else {
		std::cout << "You typed wrong login and/or password." << "\n" << "Program terminates." << std::endl;
		std::cin.get();
		std::cin.get();
	}
	return 1;
}
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <time.h>
#include <fstream>

std::string receipt;

void show_items(void) {
	std::ifstream items("items.txt");

	if (items.is_open()) {
		std::cout << items.rdbuf();
	}
	else {
		std::cout << "File does not exist." << std::endl;
	}
}

void show_receipt(void) {
	std::ifstream user_receipt(receipt);

	if (user_receipt.is_open()) {
		std::cout << user_receipt.rdbuf();
	}
	else {
		std::cout << "File does not exist." << std::endl;
	}
}

void create_receipt(void) {
	std::string first, last;
	time_t t = time(0);
	struct tm * now = localtime(&t);
	char buf[16];

	std::cout << "Type your first name." << std::endl;
	std::cin >> first;
	std::cout << "Type your last name." << std::endl;
	std::cin >> last;

	snprintf(buf, 16, "%lu", time(NULL));
	receipt = first + "_" + last + "_" + buf + ".txt";
	
	std::ofstream all_receipts("receipts.txt", std::ios_base::app | std::ios::out);
	all_receipts << "Receipt name: " << receipt << "\n" << "Receipt for: " << first << " " << last << "\n" << "Receipt for day: " << (now->tm_year + 1900) << "-" << (now->tm_mon + 1) << "-" << (now->tm_mday) << std::endl;
	std::ofstream user_receipt(receipt, std::ios_base::app | std::ios::out);
	user_receipt << "Receipt for day: " << (now->tm_year + 1900) << "-" << (now->tm_mon + 1) << "-" << (now->tm_mday) << std::endl;
}

void add_to_receipt(void) {
	std::ifstream items("items.txt");
	int amount, id, count = 0;
	std::string choice;
	

	std::cout << "Type the ID of the product to add it to your receipt." << std::endl;
	std::cin >> id;
	std::cout << "Type amount of item you want to buy." << std::endl;
	std::cin >> amount;

	for (int i = 1; i <= id; i++) {
		std::getline(items, choice);
	}

	std::cout << "Added to your receipt: " << choice << " Amount: " << amount << std::endl;

	std::ofstream receipt_user(receipt, std::ios::app);
	std::ofstream receipts("receipts.txt", std::ios::app);
	receipt_user << choice << " Amount: " << amount << std::endl;
	receipts << choice << " Amount: " << amount << std::endl;
}

void show_options(void) {
	bool loop = true;
	int option;
	
	while (loop) {
		std::cout << "What do you want to do." << "\n" << "(1)Show items in shop." << "\n" << "(2)Create new receipt" << "\n" << "(3)Add item to receipt." << "\n" << "(4)Show my actual receipt." << "\n" << "(5)End shopping and show my receipt." << "\n" << "(0)Exit." << std::endl;
		std::cin >> option;
		if (option == 0) {
			loop = false;
		}
		else if (option == 1) {
			show_items();
		}
		else if (option == 2) {
			create_receipt();
		}
		else if (option == 3) {
			add_to_receipt();
		}
		else if (option == 4) {
			show_receipt();
		}
	}
}

int main() {
	std::cout << "Welcome in our shop." << std::endl;
	show_options();
	return 1;
}
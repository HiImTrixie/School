#include <iostream>
#include <string>

struct personal_information{
	std::string first, last, sex, status;
	//std::string last.
	//std::string sex,
	//std::string status;
};

void load(struct personal_information inf[], int n){
	int c, m;
	for(int i=0; i < n; i++){
		std::cout << "Man(0) or woman(1)?" << std::endl;
		std::cin >> c;
		
		if(c == 0){
			inf[i].sex = "Male";
			std::cout << "Married? Yes(0) No(1)" << std::endl;
			std::cin >> m;
			if(m == 0){
				inf[i].status = "Married man";
			}else if(m == 1){
				inf[i].status = "Not married man";
			}else{
				std::cout << "Wrong option. Program terminates." << std::endl;
				break;
			}
		} else if(c == 1){
			inf[i].sex = "Female";
			std::cout << "Married? Yes(0) No(1)" << std::endl;
			std::cin >> m;
			if(m == 0){
				inf[i].status = "Married woman";
			}else if(m == 1){
				inf[i].status = "Not married woman";
			}else{
				std::cout << "Wrong option. Program terminates." << std::endl;
			}
		}else{
			std::cout << "Wrong option. Program terminates." << std::endl;
			break;
		}
		std::cout << "First name?" << std::endl;
		std::cin >> inf[i].first;
		std::cout << "Last name?" << std::endl;
		std::cin >> inf[i].last;
	}
}

int main(){
	personal_information information[3];
	load(information, 3);
	return 0;
}

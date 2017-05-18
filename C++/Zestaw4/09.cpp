#include <iostream>


double twodmax_array(int array[][5], int n, int m){
    double result, check_result;
    
    for(int i=0; i < m; i++){
        for(int j=0; j < n; j++){
            check_result += array[i][j];
        }
        check_result = check_result / m;
        if(check_result > result){
            result = check_result;
            check_result = 0;
        }else{
            check_result = 0;
        }
    }
    return result;
}

int main(){
    int n=5, m=5;
    int array[5][5] = {{1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}, {4,5,6,7,8}, {5,6,7,8,9}};
    std::cout << twodmax_array(array, n, m) << std::endl;
    return 0;
}

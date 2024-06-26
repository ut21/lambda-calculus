#include <iostream>
using namespace std;
void fizzbuzz(int n){
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
        } else if(i % 3 == 0){
            cout << "Fizz" << endl;
        } else if(i % 5 == 0){
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

}

bool isMod3Zero(int n){
  if(n==0){
    return true;
  }
  else if(n<0){
    return false;
  }
  else{
    return isMod3Zero(n-3);
  }
}

void fizzbuzz_rec(int n, int i){
    if(i > n){
        return;
    }
    if(i % 3 == 0 && i % 5 == 0){
        cout << "FizzBuzz" << endl;
    } else if(i % 3 == 0){
        cout << "Fizz" << endl;
    } else if(i % 5 == 0){
        cout << "Buzz" << endl;
    } else {
        cout << i << endl;
    }
    fizzbuzz_rec(n, i+1);

}



int main(){
    isMod3Zero(5)? cout<<"Yes\n": cout<<"No\n";
}
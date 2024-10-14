#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::string fizzbuzz () {
	std::vector<std::string> hasil;
	
	for (int i = 1; i <= 100; i++) {
		if (i % 15 == 0) {
			hasil.push_back("FizzBuzz");
		} else if (i % 3 == 0) {
			hasil.push_back("Fizz");
		} else if (i % 5 == 0) {
			hasil.push_back("Buzz");
		} else {
			hasil.push_back(std::to_string(i));
		}
	}
	std::string stringhasil;
	for(int i=0;i<100;i++){
        stringhasil += hasil[i] + "\n";
	}
	return stringhasil;
}

std::string reversearray (std::string n) {
	std::string a = n;
    int len= a.length();
    std::string out;
    if(a[0]=='['){
        out += "[";
		for(int i = len-2; i > 0; i--){
			if(a[i-1] == ' '){
				out += a[i];
			}
			else if(a[i] == ' '){
				out += " ";
			}
			else{
				int count=1;
				int p=i;
				while(a[p-1]!=' '){
					count++;
					p--;
				}
				std::string temp;
				for(int j=i-count;j<=i;j++){
					temp+=a[j];
				}
				int tlen=temp.length();
				for(int m=1;m<tlen;m++){
					out+=temp[m];
				}
				out += " ";
				i -= count;
			}
		} 
		out += "]";   
    }
	return out;
}

int main(){
    std::ifstream test("test.txt");
	if(test.is_open()){
		std::string input, output, temp;
        bool done = false;
		int test_num = 1;
		int line = 1;
		while (getline(test,temp)){
            if(done==false){
                output+=temp+"\n";
                if(line==100){
                    if(output == fizzbuzz()){
                        std::cout<<"Fizzbuzz is working as expected\n";
                    }
                    else{
                        std::cout<<"Fizzbuzz isn't working as expected\n";
                    }
                    done=true;
                    line=0;
                    std::cout<<"Reverse Array :\n";
                }  
                line++;
            }
            else{
                if(line==1){
                    input = temp;
                }
                else{
                    output=temp;
                    if(output == reversearray(input)){
                        std::cout<<"Test "<<test_num<<" is as expected\n";
                    }
                    else{
                        std::cout<<"Test "<<test_num<<" isn't as expected\n";
                    }
                    test_num++;
                    line=0;
                }
                line++;
            }
        }
    }    
	else{
		std::cout<<"File input tidak ditemukan.";
	}
}
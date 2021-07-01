#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> f;
    int n = s.length();
	for(int i = 0; i < n; i+=2){
	    std::string d = "";
	    d = d + s[i]+s[i+1];
	    f.push_back(d);
	}
	if(n % 2){
		std::cout << "\"" << f[f.size()-1] << "\"" << std::endl;
	    f[f.size()-1] += "_";
	}
    return f;
}

int main(){
	std::vector<std::string> res = 	solution("abcde");
	for(int i = 0; i < res.size(); i++){
	    std::cout << "\"" << res[i] << "\"" << " ";
	}
	std::cout << std::endl;
	return 0;
}



#include <iostream>
#include <string>
void EX4_15();
void EX4_14();
void EX4_13();
void main(){
    EX4_13();
    //EX4_14();
    //For debug
    system("pause");
}

void EX4_14(){
    // ex4-14
    std::string name;
    std::cout << "7+23+5+100+25와같이덧셈문자열을입력하세요." << std::endl;
    getline(std::cin, name, '\n');
    int sum = 0;
    int startIndex = 0;
    while(true){
        int fIndex = name.find('+',startIndex);
        if(fIndex == -1){
            std::string part = name.substr(startIndex);
            if(part == "") break;
            std::cout<<part<<std::endl;
            sum += stoi(part);
            break;
        }
        int count = fIndex - startIndex;
        std::string part = name.substr(startIndex, count);
        std::cout << part << std::endl;
        sum += stoi(part);
        startIndex = fIndex + 1;
        std::cout<<"Debug::StartIndex :: " << startIndex << std::endl;
    }
    std::cout << "숫자들의 합은" << sum;
}
void EX4_13()
{
    std::string s;
    std::cout<< "문자열을입력하세요(한글안됨) " << std::endl;
    getline(std::cin, s, '\n'); // 문자열입력
    int len= s.length(); // 문자열의길이
    for(int i=0; i<len; i++) {std::string first = s.substr(0,1); // 맨앞의문자1개를문자열로분리
        std::string sub = s.substr(1, len-1); // 나머지문자들을문자열로분리
        s = sub + first; // 두문자열을연결하여새로운문자열로만듦
        std::cout<< s << std::endl;}
}
void EX4_15()
{
    
}
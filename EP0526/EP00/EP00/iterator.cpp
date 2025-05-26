#include <iostream>
#include <vector>
#include <string>
#include <map>

void main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	std::vector<int>::iterator iter;

	for (iter = v.begin(); iter != v.end(); iter++) {
		int n = *iter;
		n = n * 2;
		*iter = n;
	}

	for (iter = v.begin(); iter != v.end(); iter++) {
		std::cout << *iter << std::endl;
	}
	system("pause");



	std::map<std::string, std::string> dict;

	dict.insert(std::make_pair("love", "사랑"));
	dict.insert(std::make_pair("hate", "싫어하다"));
	dict["cherry"] = "체리";
	std::cout << "단어 개수" << dict.size() << std::endl;

	std::string eng;
	while (1) {
		std::cout << "찾고 싶은 단어>>";
		getline(std::cin, eng);
		if (eng == "exit") break;

		if (dict.find(eng) == dict.end()) {
			std::cout << "단어가 없습니다." << std::endl;
		}
		else
		{
			std::cout << dict[eng] << std::endl;
		}
		std::cout << "종료합니다.." << std::endl;
	}
}
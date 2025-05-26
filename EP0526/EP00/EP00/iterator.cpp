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

	dict.insert(std::make_pair("love", "���"));
	dict.insert(std::make_pair("hate", "�Ⱦ��ϴ�"));
	dict["cherry"] = "ü��";
	std::cout << "�ܾ� ����" << dict.size() << std::endl;

	std::string eng;
	while (1) {
		std::cout << "ã�� ���� �ܾ�>>";
		getline(std::cin, eng);
		if (eng == "exit") break;

		if (dict.find(eng) == dict.end()) {
			std::cout << "�ܾ �����ϴ�." << std::endl;
		}
		else
		{
			std::cout << dict[eng] << std::endl;
		}
		std::cout << "�����մϴ�.." << std::endl;
	}
}
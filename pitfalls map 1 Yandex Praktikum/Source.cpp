#include <iostream>
#include <string>
#include <map>

using namespace std;

/*����� ���������� �����������, ���� ���� �� ��� ����� �������� ������������� ���� � ������. 
��������, �eat� � �tea� � ���������, ������ ��� ������� �� ����� � ��� �� ���� � ������ �������.
����� �battle� � �beatle� � �� ���������. � ������ ��� ����� �t�, � �� ������ ��� �e�.
�������� ������� CheckAnagram, ������� ��������� ��� ����� � ���������� true, ���� ��� ���������.
��� ����� ������������� ���� ���������
����� �������� ���������� ������ ������� CheckAnagram.
� �������� ���������� ����� ������������ �����, ������� ��������� �� �������� ���������� ����.
������� main, ������� �� ��������, ����������� �� �����.
�����������
������ �� �������� � cout � �� ������� �� cin.
�� ������� �������� ������� � CheckAnagram.
�������
����� hare � rhea. ��������� true.
����� battle � beatle. ��������� false.
����� eat � tea. ��������� true.
����� lift � elevator. ��������� false.*/

map<char, int> BuildCharCounters(const string& word) {
    map<char, int> counters;
    for (char c : word) {
        ++counters[c];
    }
    return counters;
}

bool CheckAnagram(const string& s1, const string& s2) {
    return BuildCharCounters(s1) == BuildCharCounters(s2);
}

// ������� ��������� ������� ��� ��������
void CheckIsTrue(bool value) {
    if (value) {
        cout << "Test passed :)"s << endl;
    }
    else {
        cout << "Test failed :("s << endl;
    }
}

int main() {
    CheckIsTrue(CheckAnagram("tea"s, "eat"s));
    CheckIsTrue(!CheckAnagram("battle"s, "beatle"s));
    CheckIsTrue(!CheckAnagram("lift"s, "elevator"s));
    CheckIsTrue(CheckAnagram("ocean"s, "canoe"s));
}
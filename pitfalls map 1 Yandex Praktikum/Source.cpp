#include <iostream>
#include <string>
#include <map>

using namespace std;

/*—лова называютс€ анаграммами, если одно из них можно получить перестановкой букв в другом. 
Ќапример, УeatФ и УteaФ Ч анаграммы, потому что состо€т из одних и тех же букв в разном пор€дке.
—лова УbattleФ и УbeatleФ Ч не анаграммы. ¬ первом две буквы УtФ, а во втором две УeФ.
Ќапишите функцию CheckAnagram, котора€ принимает два слова и возвращает true, если они анаграммы.
 ак будет тестироватьс€ ваша программа
“есты провер€т правильную работу функции CheckAnagram.
¬ качестве параметров будут передаватьс€ слова, целиком состо€щие из строчных английских букв.
‘ункци€ main, которую вы напишете, учитыватьс€ не будет.
ќграничени€
Ќичего не выводите в cout и не читайте из cin.
Ќе мен€йте название функции Ч CheckAnagram.
ѕримеры
—лова hare и rhea. –езультат true.
—лова battle и beatle. –езультат false.
—лова eat и tea. –езультат true.
—лова lift и elevator. –езультат false.*/

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

// напишем небольшую функцию дл€ проверки
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
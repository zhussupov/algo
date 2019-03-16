/*
1 I     10 X    100 C    1000 M
2 II    20 XX   200 CC   2000 MM
3 III   30 XXX  300 CCC  3000 MMM
4 IV    40 XL   400 CD   4000 MMMM
5 V     50 L    500 D    5000 MMMMM
6 VI    60 LX   600 DC   6000 MMMMMM
7 VII   70 LXX  700 DCC  7000 MMMMMMM
8 VIII  80 LXXX 800 DCCC 8000 MMMMMMMM
9 IX    90 XC   900 CM   9000 MMMMMMMMM
*/

class Solution {
public:
    
    string get(int x, int shift) {
        string rom[7] = {"I", "V", "X", "L", "C", "D", "M"};
        string one = rom[shift*2];
        string two = rom[shift*2 + 1];
        string three = rom[shift * 2 + 2];
        if (x == 4)
            return one + two;
        if (x == 9)
            return one + three;
        string ret = x > 4 ? two : "";
        for (int i = 0; i < x % 5; i++)
            ret += one;
        return ret;
}
    
    string intToRoman(int num) {
        string ret = "";
        for (int i = 0; i < num / 1000; i++)
            ret += "M";
        num %= 1000;
        ret += get(num/100, 2);
        ret += get((num/10)%10, 1);
        ret += get(num%10, 0);
        return ret;
    }
};



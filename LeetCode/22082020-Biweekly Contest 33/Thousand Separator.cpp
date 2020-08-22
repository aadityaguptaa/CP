class Solution {
public:
    string thousandSeparator(int n) {
        return quickAddThousandSeparators(to_string(n));
    }
    string quickAddThousandSeparators(string value, char thousandSep = '.'){
    int len = value.length();
    int dlen = 3;

    while (len > dlen) {
        value.insert(len - dlen, 1, thousandSep);
        dlen += 4;
        len += 1;
    }
    return value;
    }
};
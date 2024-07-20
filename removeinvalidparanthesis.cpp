class Solution {
public:
void removeInvalid (string s, int start, int lastRemove, char openParen,char
closeParen, vector<string>& result) {
int balance = 0;
for (int i = start; i < s.size(); i++) {
if (s[i] == openParen) balance++;
if (s[i] == closeParen) balance--;
if (balance >= 0) continue;
for (int j = lastRemove; j <= i; j++) {
if (s[j] == closeParen && (j == lastRemove ||s[j-1]!=closeParen))
{
removeInvalid (s.substr(0, j) + s.substr(j + 1),i,j,openParen,
closeParen, result);
}
}
return;
}
reverse(s.begin(), s.end());
if (openParen == '(') {
removeInvalid (s, 0, 0, ')', '(', result);
}
else {
result.push_back(s);
}
}
vector<string> removeInvalidParentheses(string s) {
vector<string> result;
removeInvalid (s, 0, 0, '(', ')', result);
return result;
}
};

class Solution {
public:
vector<vector<int>> generate(int numRows) {
int i,j;
vector<vector<int>> array(numRows);
for(i=0;i<numRows;i++){
array[i].resize(i+1,1);
}
if(numRows==1){
array[0][0]=1;
return array;
}
else
{
for(i=1;i<numRows;i++)
{
array[i][0]=1;
for(j=1;j<=i-1;j++)
{
array[i][j]=array[i-1][j-1]+array[i-1][j];
}
array[i][j]=1;
}
}
return array;
}
};

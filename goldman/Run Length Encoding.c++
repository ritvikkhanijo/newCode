string encode(string src)
{     
  //Your code here 
  string ans = "";
  int n = src.length();
  int c = 1;
  int i;
  for(i=0;i<n-1;i++){
      while(src[i] == src[i+1]){
          i++;
          c++;
      }
      ans+=src[i]+to_string(c);
      c = 1;
  }
  if(i == n-1){
      ans+=src[i] + to_string(1);
  }
  return ans;
}     
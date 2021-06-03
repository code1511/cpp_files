int Solution::repeatedNumber(const vector<int> &A) {

  int n=A.size();
  int c1=0,c2=0,first=0,second=0;
  for(int i=0;i<A.size();i++){
     if(first==A[i]){
          c1++;
      }
      else if(second==A[i]){
          c2++;
      }      
      else if(c1==0){
          first=A[i];
          c1++;
      }
      else if(c2==0){
          second=A[i];
          c2++;
      }

      else{
          c1--;
          c2--;
      }
  }
  c1=0;
  c2=0;
  for(int i=0;i<A.size();i++){
      if(first==A[i]){
          c1++;
      }
      else if(second==A[i]){
          c2++;
      }
  }
  if(c1>n/3){
      return first;
  }
if(c2>n/3){
      return second;
  }
  return -1;
}

long long getMaxArea(long long arr[], int n){
  stack<int> s; 
  long long maxArea = 0, i  = 0, topElement;
  long long findArea;
  
  while(i < n) {
      if (s.empty() || arr[s.top()] <= arr[i]) {
          s.push(i++);
      } else {
          topElement = s.top();
          s.pop();
          findArea = arr[topElement] * (s.empty() ? i : (i-s.top()-1));
      }
      
    if (maxArea < findArea) maxArea=findArea;
  }
  
  while(!s.empty()) {
      topElement = s.top();
          s.pop();
          findArea = arr[topElement] * (s.empty() ? i : (i-s.top()-1));
      
    if (maxArea < findArea) maxArea=findArea;
  }
   
    return maxArea; 
}
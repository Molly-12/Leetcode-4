void intersection(int *input1, int *input2, int size1, int size2)
{
  int arr[1000]={0};
  for(int i=0;i<size2;i++){
      arr[input2[i]]++;
  }
  for(int i=0;i<size2;i++){
    if(arr[input1[i]]>0){
        cout<<input1[i]<<"";
        arr[input1[i]]--;
    }
  }
}

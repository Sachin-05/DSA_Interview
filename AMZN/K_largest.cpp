struct CustomData{
  int age;
  double size;
}

void Answer(vector<int> v, int k){
  // optimize the variable with the top-up & bottom-down methods
  priority_queue <int> pqlar;
  priority_queue <int> pqsmal;
  for(int i=0; i<v.size(); i++){
	pqlar.push(v[i]);
	pqsmal.push(v[i);
}
// till now we have the element in the priority queue.
while(k>1){
 pqlar.pop();
 pqsmal.pop();
}

int largele = pqlar.top();
int smalele = pqsmal.top();

cout << largele << "and" << smalele;
}

gcd of a number

int gcdoftwono(int a, int b){
  if(b==0){
	return a;
  } else{
     gcd (a, a mod b);
}

// lcm of a number

int lcm(int a, intb){
 return (a*b) / gcdoftwono(a,b);
}

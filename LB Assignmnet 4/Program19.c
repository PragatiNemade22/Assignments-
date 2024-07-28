int sumNonFactors(int ino) {
  int sum = 0;
  
  for (int i = 1; i <= ino; i++) {
    
    if (ino % i == 0) {
      continue;
    }
  
    sum += i;
  }
  return sum;
}

int main() {
  int ino;
  printf("Enter a number: ");
  scanf("%d", &ino);

  int nonFactorSum = sumNonFactors(ino);
  printf("The sum of all non-factors of %d is %d\n", ino, nonFactorSum);

  return 0;
}
int map(x){
  if (x == 0) {
  printf("No contributions")
  }
  return map(x + 1)
}

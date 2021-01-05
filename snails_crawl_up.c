int snail(int column, int day, int night) {
  int d = 0;
  while (++d) {
    column -= day;
    if (column <= 0) return d;
    column += night;
  }
}

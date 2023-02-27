bool overlap(int l1, int r1, int l2, int r2) {
    return (l1 >= l2 && l1 <= r2) ||
           (r1 >= l2 && r1 <= r2) ||
           (l2 >= l1 && l2 <= r1) ||
           (r2 >= l1 && r2 <= r1);
}
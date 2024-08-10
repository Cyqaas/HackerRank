int towerBreakers(int n, int m) {
    // pattern: player two will always win iff each tower has a height of 1 or there are an even amount of towers 

    return (m == 1 || n % 2 == 0 ? 2 : 1);
}
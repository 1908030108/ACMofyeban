#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

const int mod = 1e9 + 7;

int main() {
	int n, k;
	cin >> n >> k;

	long long cnt = 0;
	if(n == 1) {
		for (int i = 1; i <= 6; i++)
			if(i % k == 0)  cnt++;
		cout << cnt << endl;
	}else if(n == 2) {
		long long ans = 0;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				ans = a * 10;
				ans += b;
				if(ans % k == 0)  {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}else if(n == 3) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					ans = a * 10;
					ans += b;
					ans *= 10;
					ans += c;
					if(ans % k == 0)  {
						cnt++;
					}
					cnt %= mod;
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 4) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						ans = a * 10;
						ans += b; ans *= 10;
						ans += c; ans *= 10;
						ans += d;
						if(ans % k == 0)  cnt++;
						cnt %= mod;
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 5) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						for (int e = 1; e <= 6; e++) {
							ans = a * 10;
							ans += b; ans *= 10;
							ans += c; ans *= 10;
							ans += d; ans *= 10;
							ans += e;
							if(ans % k == 0)  cnt++;
							cnt %= mod;
						}
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 6) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						for (int e = 1; e <= 6; e++) {
							for (int f = 1; f <= 6; f++) {
								ans = a * 10;
								ans += b; ans *= 10;
								ans += c; ans *= 10;
								ans += d; ans *= 10;
								ans += e; ans *= 10;
								ans += f;
								if(ans % k == 0)  cnt++;
								cnt %= mod;
							}
						}
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 7) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						for (int e = 1; e <= 6; e++) {
							for (int f = 1; f <= 6; f++) {
								for (int g = 1; g <= 6; g++) {
									ans = a * 10;
									ans += b; ans *= 10;
									ans += c; ans *= 10;
									ans += d; ans *= 10;
									ans += e; ans *= 10;
									ans += f; ans *= 10;
									ans += g;
									if(ans % k == 0)  cnt++;
									cnt %= mod;
								}
							}
						}
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 8) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						for (int e = 1; e <= 6; e++) {
							for (int f = 1; f <= 6; f++) {
								for (int g = 1; g <= 6; g++) {
									for (int h = 1; h <= 6; h++) {
										ans = a * 10;
										ans += b; ans *= 10;
										ans += c; ans *= 10;
										ans += d; ans *= 10;
										ans += e; ans *= 10;
										ans += f; ans *= 10;
										ans += g; ans *= 10;
										ans += h;
										if(ans % k == 0)  cnt++;
										cnt %= mod;
									}
								}
							}
						}
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 9) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						for (int e = 1; e <= 6; e++) {
							for (int f = 1; f <= 6; f++) {
								for (int g = 1; g <= 6; g++) {
									for (int h = 1; h <= 6; h++) {
										for (int i = 1; i <= 6; i++) {
											ans = a * 10;
											ans += b; ans *= 10;
											ans += c; ans *= 10;
											ans += d; ans *= 10;
											ans += e; ans *= 10;
											ans += f; ans *= 10;
											ans += g; ans *= 10;
											ans += h; ans *= 10;
											ans += i;
											if(ans % k == 0)  cnt++;
											cnt %= mod;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}else if(n == 10) {
		long long ans = 1;
		for (int a = 1; a <= 6; a++) {
			for (int b = 1; b <= 6; b++) {
				for (int c = 1; c <= 6; c++) {
					for (int d = 1; d <= 6; d++) {
						for (int e = 1; e <= 6; e++) {
							for (int f = 1; f <= 6; f++) {
								for (int g = 1; g <= 6; g++) {
									for (int h = 1; h <= 6; h++) {
										for (int i = 1; i <= 6; i++) {
											for (int j = 1; j <= 6; j++) {
												ans = a * 10;
												ans += b; ans *= 10;
												ans += c; ans *= 10;
												ans += d; ans *= 10;
												ans += e; ans *= 10;
												ans += f; ans *= 10;
												ans += g; ans *= 10;
												ans += h; ans *= 10;
												ans += i; ans *= 10;
												ans += j;
												if(ans % k == 0)  cnt++;
												cnt %= mod;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		cout << cnt % mod<< endl;
	}

	return 0;
}


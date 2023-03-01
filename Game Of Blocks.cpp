long long int maximumPoints(long long int x, long long int y, long long int m)
{
	long long int ans = 0;
	ans += x/m + y/m;
	ans *= m;
	x %= m;
	y %= m;
	if(x + y >= m)
	{
		ans += max(x, y);
	}
	return ans;
} 
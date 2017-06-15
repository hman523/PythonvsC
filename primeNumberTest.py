
import math
from time import time
fileName = 'primes.txt'

def isPrime(number):
	count = 2
	while(count < math.sqrt(number)):
		if (number%count is 0):
			return False
		else:
			count+=1
	return True


def main():
	time1 = time()
	num = 9
	while(num < 10000000):
		if(isPrime(num)):
			print(str(num))
		num+=1
	time2 = time()
	print(time2-time1)



if __name__ == '__main__':
	main()

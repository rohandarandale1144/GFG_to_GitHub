#User function Template for python3
class Solution:
	def findSum(self, X, Y):
		# code here
        a1=int (X);
        a2=int (Y);
        return a1+a2;
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		x = input()
		y = input()
		ob = Solution()	
		answer = ob.findSum(x,y)
		
		print(answer)


# } Driver Code Ends
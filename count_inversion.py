import bisect
import heapq

def inversionCount(self, arr, n):
        if n<=1:
            return 0
        sortList = []
        result = 0
        
        for i, v in enumerate(arr):
            heappush(sortList, (v, i))
  
        x = []  # create a sorted list of indexes
        while sortList:
            v, i = heappop(sortList)  # O(log(N))
        # find the current minimum's index
        # the index y can represent how many minimums on the left
            y = bisect(x, i)  # O(log(N))
        # i can represent how many elements on the left
        # i - y can find how many bigger nums on the left
            result += i - y
  
            insort(x, i)  # O(log(N))
  
        return result

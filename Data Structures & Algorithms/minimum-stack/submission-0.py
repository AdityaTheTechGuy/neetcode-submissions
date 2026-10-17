class MinStack:

    def __init__(self):
        self.Stack = []
        self.minStack = []
        

    def push(self, val: int) -> None:
        self.Stack.append(val)

        if(not self.minStack or val <= self.minStack[-1]):
            self.minStack.append(val)

    def pop(self) -> None:
        val = self.Stack.pop()

        if(val == self.minStack[-1]):
            self.minStack.pop()

    def top(self) -> int:


        return self.Stack[-1]
    
    def getMin(self):
        return self.minStack[-1]


    

import sys

class Heap:

    def __init__(self):
        self.heap = []
        self.size = -1

    def __parent(self, index):
        return index // 2
    
    def __right_child(self, index):
        return (index * 2) + 1
    
    def __left_child(self, index):
        return (index * 2)

    def __isLeaf(self, index):
        if (index >= (self.size // 2 - 1)) and (index <= self.size):
            return True
        return False
    
    def __heapify(self, index):
        if not self.__isLeaf(index):
            if self.heap[self.__left_child(index)] >= self.heap[self.__right_child(index)]:
                self.heap[index], self.heap[self.__left_child(index)] = self.heap[self.__left_child(index)], self.heap[index]
                self.__heapify(self.__left_child(index))
            else:
                self.heap[index], self.heap[self.__right_child(index)] = self.heap[self.__right_child(index)], self.heap[index]
                self.__heapify(self.__right_child(index))

    def insert(self, item):
        self.heap.append(item)
        self.size += 1
        current = self.size
        while (self.heap[current] > self.heap[self.__parent(current)]) and current != 0:
            self.heap[current], self.heap[self.__parent(current)] = self.heap[self.__parent(current)], self.heap[current]
            current = self.__parent(current)

    def extract_max(self):
        max_element = self.heap[0]
        self.heap[0], self.heap[self.size] = self.heap[self.size], self.heap[0]
        self.heap.pop(self.size)
        self.size -= 1
        self.__heapify(0)
        return max_element

def main():
    h = Heap()
    array = [14,12,15,21,8,9,13,17,1,5]
    for i in array:
        h.insert(i)

    print(h.heap)
    print(h.extract_max())
    print(h.heap)

if __name__ == "__main__":
    main()
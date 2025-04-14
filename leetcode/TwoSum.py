class SinglyLinked:
    class Node:
        def __init__(self, data):
            self.data = data
            self.next = None

    class SinglyLinkedList:
        def __init__(self):
            self.head = None

        def append(self, data):
            new_node = Node(data)
            if not self.head:
                self.head = new_node
                return
            current = self.head
            while current.next:
                current = current.next
            current.next = new_node

        def iterate(self):
            current = self.head
            while current:
                print(current.data, end=" -> ")
                current = current.next
            print("None")

    # Example usage
    linked_list = SinglyLinkedList()
    linked_list.append(10)
    linked_list.append(20)
    linked_list.append(30)
    linked_list.append(40)



    print("Iterating through the linked list:")
SinglyLinked().linked_list.iterate()
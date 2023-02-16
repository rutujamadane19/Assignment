list=[ 1.5,"Python", -5, 4, 0.8, -3.2, 'C++']
print("List is", list)

list.append(0.8)
print("List after adding 0.8 is",list)

list.extend([9,11,13])
print("List after adding elements is ",list)

list.insert(1,7)
print("List after inserting elements is",list)

del list[7]
print("List after deleting is",list)

del list[5]
print("List after removing element from given position is", list)

print(list.count(4))

print(list.index(-5))

print(list[2:7])

list.reverse()
print("Reversed list is",list)

print(list.copy())




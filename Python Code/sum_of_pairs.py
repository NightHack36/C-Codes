# Sum of pairs
def sum_pairs(ints, s):
    complement_dict = {}
    
    for i in ints:
        if i in complement_dict:
            return [s-i, i]
        else:
            complement_dict[s - i] = i
            
    return None

l1= [1, 4, 8, 7, 3, 15]
answer = sum_pairs(l1, 8) # Pass list and number for sum
print(answer)

# l1= [1, 4, 8, 7, 3, 15]
# sum = 8
# output: [1, 7]
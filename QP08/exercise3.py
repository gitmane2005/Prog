def max_path(tree):
    right = 0
    left = 0
    if type(tree[2]) == tuple:
        right += max_path(tree[2])
    else:
        right = tree[2]
    if type(tree[0]) == tuple:
        left += max_path(tree[0])
    else:
         left = tree[0]
    return max( tree[1] + left, tree[1] + right)


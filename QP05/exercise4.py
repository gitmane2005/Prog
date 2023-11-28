def multi(g):
    edge_multiplicities = {}

    for edge in g:
        if edge in edge_multiplicities:
            edge_multiplicities[edge] += 1
        else:
            edge_multiplicities[edge] = 1
    multi_representation = tuple((edge[0], edge_multiplicities[edge], edge[1]) for edge in edge_multiplicities)

    return multi_representation


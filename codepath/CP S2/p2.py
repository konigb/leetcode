
def create_dictionary(keys, values):
    hashmap = dict()
    for i in range(len(keys)):
        hashmap[keys[i]] = values[i]
    return hashmap

keys = ["peanut", "dragon", "star", "pop", "space"]
values = ["butter", "fly", "fish", "corn", "ship"]
res = create_dictionary(keys, values)
print(res.items())


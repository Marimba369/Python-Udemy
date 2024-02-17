'''
    This module return a list of number random's
'''
from random import randrange

def get_random_list(init, end, length):
    random_list = list()
    while length > 0:
        random_list.append(randrange(init, end))
        length -= 1
    return random_list
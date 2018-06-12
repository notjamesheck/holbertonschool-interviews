#!/usr/bin/python3
'''
   returns info on employees and their tasks

'''
import collections
import csv
import json
import requests
import sys

if __name__ == "__main__":
    '''
       e = employee, t = task
    '''
    i = 1
    new = {}
    while i <= 10:
        e = requests.get('https://jsonplaceholder.typicode.com/users/{}'.
                         format(i))

        t = requests.get(
            'https://jsonplaceholder.typicode.com/todos?userId={}'.
            format(i))

        user_id = i
        username = e.json()['username']
        value = []

        for tasks in t.json():
            dic = {}
            dic["task"] = tasks['title']
            dic["completed"] = tasks['completed']
            dic["username"] = username
            value.append(dic)

        new[i] = value
        i = i + 1

    with open('todo_all_employees.json', 'w') as item:
        json.dump(new, item, ensure_ascii=False)

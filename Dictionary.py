# states =['NY', 'PA', 'CA']
# states = ['New York', 'Pennsylvania', 'California']
# states = ['New York', 'NY', 'Pennsylvania', 'PA', 'California', 'CA']

states ={'NY': 'New York', 'PA':'Pennsylvania', 'CA' : 'California'}

print(states['NY'])

# print (states['FL'])
people = ["MATTAN", 'CHRIS']
#print(people[2])

print(type(states))
print(type(people))

print(states.get('FL','Not Found'))
print(states.get('NY', 'Not Found'))

print(states.keys())
print(states.values())

states['FL'] = 'Florida' #appending in dictionary
print(states)

#user = ['Mattan', 134, 10.5, 'Brown', 'Brown']
user ={'name':'Mattan', 'height':134, 'shoe size': 10.5, 'hair':'Brown', 'eye':'Brown'}

blog_post = {'title':'Learning the concepts of Dictionary', 'body':' If you wanna learn do email there blah blah blah...'}

print(user['name'])
print(blog_post['title'])

#Dictionaries and Lists can be inside of each other
animal_sounds = {
    "cat" : ['meow','purr'],
    'dog' :['woof', 'bark'],
    "fox" :[]
}

mattan ={'name':'Mattan', 'height':134, 'shoe size': 10.5, 'hair':'Brown', 'eye':'Brown'}
chris ={'name':'Mattan', 'height':134, 'shoe size': 10.5, 'hair':'Brown', 'eye':'Brown'}
sarah ={'name':'Mattan', 'height':134, 'shoe size': 10.5, 'hair':'Brown', 'eye':'Brown'}

people = [mattan, chris, sarah]

print(people)

for person in people:
    print(person["height"]) # or print(person.get('height'))
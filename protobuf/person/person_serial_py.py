import person_pb2

person =  person_pb2.Person()
person.name = 'yuhan'
person.ID = 250
person.email = 'yuhan@163.com'

f = open("pb.img", "wb")
f.write(person.SerializeToString())
f.close()

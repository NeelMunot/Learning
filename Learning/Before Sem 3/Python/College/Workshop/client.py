import socket

host = "localhost"
port = 5555

client_socket = socket.socket()
client_socket.connect((host,port))

message = input("Enter input here")

while message.lower() != "bye":
	client_socket.send(message.encode())
	data = client_socket.recv(1024).decode()
	print ("Data received from server ",data)
	message = input("Enter input here")
client_socket.close()

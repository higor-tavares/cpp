CC = g++
SRC = src
OUT = out
CP2 = ${CC} ${SRC}/cap2
CP3 = ${CC} ${SRC}/cap3
hello: 
	${CP2}/hello.cpp -o ${OUT}/hello
add:
	${CP2}/add.cpp -o ${OUT}/add
comparation:
	${CP2}/comparation.cpp -o ${OUT}/comparation
grade_book:
	${CP3}/grade_book.cpp -o ${OUT}/gradebook
file:
	${CP3}/file.cpp -o ${OUT}/file

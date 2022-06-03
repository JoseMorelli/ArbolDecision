CFLAGS=-Wall 
LDLIBS=-lm
NOMBRE= arbolDecision
TARGETS= arbol 
CC =gcc

arbol: main.c arbolDecision.c entropia.c ganancia.c positivos.c contador.c nodo.c indice.c calculoOcurrencia.c subConjunto.c mostrarSubconjunto.c Anadir.c Leer.c verContenido.c guardarContenido.c LeerAbiertos.c AnadirAbiertos.c 
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

all: $(TARGETS)
clean:
	rm -fv $(TARGETS) *~ *.o
	rm -fv $(TARGETS) .*.swp
	rm -fv arbolDecision
	rm -r arbolAprendido


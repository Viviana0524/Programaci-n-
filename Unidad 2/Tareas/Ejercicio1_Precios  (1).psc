Algoritmo Precios 
	//ENTRADA
	Definir precioUnitario1, precioUnitario2, precioUnitario3, precioCantidad1, precioCantidad2, precioCantidad3, DESCUENTO, IVA, Can1, can2, can3  Como Real
	Definir precio1, precio2, precio3 Como Caracter 
	DESCUENTO<-0.10
	IVA<-0.12 
	Escribir "Ingrese el nombre del producto 1", precio1
	Leer precio1
	Escribir "Ingrese el precio unitario"
	leer preprecioUnitario1
	Escribir "Ingrese la cantidad a comprar"
	leer can1
	Escribir "Ingrese el nombre del producto 2", precio2
	Leer precio2
	Escribir "Ingrese el precio unitario"
	leer preprecioUnitario2
	Escribir "Ingrese la cantidad a comprar"
	leer can2
	Escribir "Ingrese el nombre del producto 3", precio3
	Leer precio3
	Escribir "Ingrese el precio unitario"
	leer preprecioUnitario3
	Escribir "Ingrese la cantidad a comprar"
	leer can3
	//Proceso 
	precioCantidad1<-(precioUnitario1*can1)
	precioCantidad2<-(precioUnitario2*can2)
	precioCantidad3<-(precioUnitario3*can3)
	subtotal<-(precioCantidad1+ precioCantidad2+ precioCantidad3)
	subtotal<-(subtotal*DESCUENTO)-subtotal
	subtotal<- (subtotal*IVA)+subtotal
	//Salida 
	Imprimir "El producto 1 es ", precio1
	imprimir "el valor unitario es ",  precioUnitario1
	Imprimir " el precio es ", precioCantidad1
	Imprimir "El producto 2 es ", precio2
	imprimir "el valor unitario es ",  precioUnitario2
	Imprimir " el precio es ", precioCantidad2
	Imprimir "El producto 3 es ", precio3
	imprimir "el valor unitario es ",  precioUnitario3
	Imprimir " el precio es ", precioCantidad3
	Imprimir " El subtotal es:", subtotal
	
	
FinAlgoritmo




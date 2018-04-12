primera: error1.pdf

error1.pdf: datos1.txt
	python grafica1.py
	rm datos1.txt grafica1.x

datos1.txt : grafica1.x
	./grafica1.x > datos1.txt

grafica1.x :
	c++ king_kunta.cpp -o grafica1.x

segunda:error2.pdf

error2.pdf: datos2.txt
	python grafica2.py
	rm datos2.txt grafica2.x

datos2.txt : grafica2.x
	./grafica2.x > datos2.txt

grafica2.x :
	c++ bad_boujee.cpp -o grafica2.x


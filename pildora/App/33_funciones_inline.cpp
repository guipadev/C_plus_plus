/*
- Funciones cuyo cuerpo se situa en el mismo punto del código que la llamada.
- Cuando se declara una función inline, el compilador intenta expandir el código de la función en el lugar
donde se la llama, en lugar de hacer una llamada de función tradicional.
- La principal utilidad de las funciones inline es reducir el consumo de recursos de la llamada a la función,
lo cual es especialmente útil para funciones pequeñas que se utilizan a menudo.
Al estar el cuerpo de la función en el mismo punto de la llamada, se elimina la sobrecarga asociada
con las llamadas a funciones (como el paso de argumentos y el valor del retorno de control)
*/
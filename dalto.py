def mostrar_menu():
    print("Menú:")
    print("1. Agregar un nuevo elemento")
    print("2. Mostrar el contenido de la cesta de la compra")
    print("3. Eliminar un elemento")
    print("4. Calcular el total")
    print("5. Renunciar")

def agregar_elemento(cesta):
    elemento = input("Ingrese el nombre del elemento: ")
    precio = float(input("Ingrese el precio del elemento: "))
    cesta.append((elemento, precio))
    print(f"{elemento} ha sido agregado a la cesta.")

def mostrar_cesta(cesta):
    if not cesta:
        print("La cesta de la compra está vacía.")
    else:
        print("Contenido de la cesta de la compra:")
        for i, (elemento, precio) in enumerate(cesta, start=1):
            print(f"{i}. {elemento} - ${precio:.2f}")

def eliminar_elemento(cesta):
    mostrar_cesta(cesta)
    if cesta:
        indice = int(input("Ingrese el número del elemento que desea eliminar: ")) - 1
        if 0 <= indice < len(cesta):
            elemento, precio = cesta.pop(indice)
            print(f"{elemento} ha sido eliminado de la cesta.")
        else:
            print("Número de elemento inválido.")

def calcular_total(cesta):
    total = sum(precio for _, precio in cesta)
    print(f"El total de la cesta de la compra es: ${total:.2f}")

def main():
    cesta = []
    while True:
        mostrar_menu()
        opcion = input("Elija una opción: ")
        if opcion == "1":
            agregar_elemento(cesta)
        elif opcion == "2":
            mostrar_cesta(cesta)
        elif opcion == "3":
            eliminar_elemento(cesta)
        elif opcion == "4":
            calcular_total(cesta)
        elif opcion == "5":
            print("¡Gracias por comprar en nubex! Hasta luego.")
            break
        else:
            print("Opción inválida. Inténtelo de nuevo.")
if __name__ == "__main__":  
            main()  
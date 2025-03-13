# Pedir el número de estudiantes
num_estudiantes = int(input("Ingrese el número de estudiantes: "))

# Inicializar variables
suma_calificacion = 0
calificaciones = []

# Recolectar calificaciones
for i in range(num_estudiantes):
    calificacion = int(input(f"Ingrese la calificación del estudiante {i+1}: "))
    suma_calificacion += calificacion
    calificaciones.append(calificacion)

# Calcular promedio, máxima y mínima
promedio_calificacion = suma_calificacion / num_estudiantes
calificacion_maxima = max(calificaciones)
calificacion_minima = min(calificaciones)
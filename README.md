# Вариант №30
В вашем распоряжении — массив из 10 млн. структур, содержащих числовой идентификатор записи (комментария) в социальной сети, а также поля с семантикой средней оценки (целое 0 или вещественное от 1,0 до 5,0), числа поданных голосов (неотрицательное целое), даты выставления последней оценки и ее значения (целое от 1 до 5). Составьте наивный алгоритм подсчета записей с оценкой не ниже 4,0, получивших хотя бы одну оценку за последний квартал, а затем реализуйте параллельный алгоритм с использованием нескольких процессов с учетом возможной декомпозиции (разбиения) структуры и выравнивания результатов по линиям кэш-памяти.
# Имя, группа
Кузнецова Анастасия, WEB-12
# Вывод
**Результаты замеров времени:**
|Реализация| Среднее время работы | Количество записей |
|---|---|---|
|Последовательная| 317.92ms | 500000 |
| Параллельная   | 317.85ms | 500000 |
|Последовательная|  2828.91ms | 5000000 |
| Параллельная   | 2823.29ms | 5000000 |
|Последовательная| ms | 10000000 |
| Параллельная   |  ms | 10000000 |

Для усреднения результатов каждый запуск повторялся 100 раз. При увеличении объёма входных данных, параллельная реализация даёт выигрыш во времени.


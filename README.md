# Matrix Library (s21_matrix)

![C](https://img.shields.io/badge/C-17A2B8?style=for-the-badge&logo=c&logoColor=white)
![Unit Testing](https://img.shields.io/badge/Unit_Testing-4CAF50?style=for-the-badge)
![LCOV](https://img.shields.io/badge/LCOV-808080?style=for-the-badge)

Библиотека для работы с матрицами на языке C, реализующая основные матричные операции с поддержкой обработки ошибок и тестовым покрытием.

## Особенности

- 🚀 Полностью на стандартном C (C11)
- ✅ Подробная обработка ошибок
- 📊 Поддержка матриц любого размера (До 20x20)
- 🧪 Полное тестовое покрытие (unit tests + coverage)
- 🛠 Вспомогательные функции для удобства улучшения проекта

## Установка

1. Клонируйте репозиторий:
```bash
git clone https://github.com/LeezyWannaFall/C-Matrix-Library
cd C-Matrix-Library
```

2. Соберите библиотеку:
```bash
make s21_matrix.a
```
или через make all:

```bash
make all
```

## Доступные операции

### Основные операции
- `s21_create_matrix` - создание матрицы
- `s21_remove_matrix` - освобождение памяти
- `s21_eq_matrix` - сравнение матриц
- `s21_sum_matrix` - сложение
- `s21_sub_matrix` - вычитание
- `s21_mult_number` - умножение на число
- `s21_mult_matrix` - умножение матриц
- `s21_transpose` - транспонирование
- `s21_determinant` - определитель
- `s21_calc_complements` - матрица алгебраических дополнений
- `s21_inverse_matrix` - обратная матрица

### Вспомогательные функции
- `s21_determinant_gauss` - нахождение детерминанта матрицы по методу Гаусса
- `s21_get_minor_matrix` - нахождение минора матрицы
- `s21_init_matrix` - инициализация или зануление матрицы

## Тестирование

Проект включает полный набор unit-тестов:

```bash
make test
```

Покрытие кода:

```bash
make gcov_report
```
(Отчёт будет доступен в `coverage_report/index.html`)

Проверка на утечки памяти:

```bash
make lint
```

## Требования

- GCC или Clang
- Make
- Check (для unit-тестов)
- lcov (для отчёта о покрытии)
- lsubunit (для lcov)

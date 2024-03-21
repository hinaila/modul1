# Definisikan fungsi untuk menggandakan nilai
def double(x):
    return x * 2

# Buat list awal
numbers = [1, 2, 3, 4, 5]

# Gunakan fungsi map untuk menggandakan setiap elemen dalam list
doubled_numbers = list(map(double, numbers))

# Cetak hasilnya
print(doubled_numbers)
import os

# Daftar event
events = [
    "picoCTF 2025",
    "picoCTF 2024",
    "picoCTF 2023",
    "picoCTF 2022",
    "Beginner picoMini 2022",
    "picoMini by redpwn",
    "picoCTF 2021",
    "picoCTF 2020 Mini-Competition",
    "picoCTF 2019",
    "picoGym Exclusive"
]

# Tingkat kesulitan
difficulties = ["easy", "medium", "hard"]

# Kategori challenge
categories = [
    "general skills",
    "binary exploitation",
    "web exploitation",
    "reverse engineering",
    "cryptography",
    "forensic"
]

# Fungsi untuk membuat folder
def create_structure(base_path="."):
    for event in events:
        for difficulty in difficulties:
            for category in categories:
                path = os.path.join(base_path, event, difficulty, category)
                os.makedirs(path, exist_ok=True)
    print("📁 Struktur direktori picoCTF berhasil dibuat!")

# Jalankan fungsi
if __name__ == "__main__":
    create_structure()

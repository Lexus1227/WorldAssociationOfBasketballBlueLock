import os
import sys

def count_lines(files):

	s = 0
	for file in files:
		s += len(open(file).readlines())

	return s


if len(sys.argv) < 2:
	print("Вторйо аргумент - путь к директории")
	exit()

dirname = sys.argv[1]

files = list()
for (dirpath, dirnames, filenames) in os.walk(dirname):
	files += [os.path.join(dirpath, file) for file in filenames]


file_filter = ["cpp", "h"]
filtered = []
for file in files:
	if file.split(".")[-1] in file_filter:
		filtered.append(file)


print(f"Суммарное количество строк в файлах: {count_lines(filtered)}")
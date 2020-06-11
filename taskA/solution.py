fileInput = open("input-201.txt")

result = 0
for line in fileInput:
    result = result ^ int(line.strip())
fileInput.close()

fileOutput = open("input-201.a.txt", "w")
fileOutput.write(str(result))
fileOutput.close()

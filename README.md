# CS121fileIO

## main()
```
import libraries sstream and iostream

create ifstream
create a stringstream called ss
create variables for data: intA, intB, text
create temporary strings for ints: sIntA, sIntB
create a string for the currentLine
open data.csv into the ifstream object
while you are able to read a line into currentLine:
  clear the stringstream
  put the currentLine in the stringStream

  read to the first comma, put result in sIntA
  read to the second comma, put result in sIntB
  read the rest of the line, put result in text

  clear the stringStream
  put sInta and sIntB in the stringstream, seperated by a space
  output the stringstream to intA and intB, converting the data automatically

  add intA and intB, put result in sum
  repeat sum times:
    print text
```

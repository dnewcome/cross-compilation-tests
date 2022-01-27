# g++ midi.cpp -lrtmidi

 clang -static -m32 -IC:\Users\dan\Desktop\rtmidi-5.0.0 -LC:\Users\dan\sandbox\cross-compilation-tests\rtmidi-c\lib -lrtmidid -lwinmm -lmsvcrtd .\midi.c
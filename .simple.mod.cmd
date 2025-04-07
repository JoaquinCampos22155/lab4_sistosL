savedcmd_/home/jj/Escritorio/lab4_sistosL/simple.mod := printf '%s\n'   simple.o | awk '!x[$$0]++ { print("/home/jj/Escritorio/lab4_sistosL/"$$0) }' > /home/jj/Escritorio/lab4_sistosL/simple.mod

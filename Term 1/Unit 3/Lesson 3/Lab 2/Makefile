#@author : Abdelrhman Ibrahim
CC     =arm-none-eabi-
CFLAGS =-mcpu=cortex-m3 -gdwarf-2
INCS   =-I .
LIBS   =
SRC    =$(wildcard *.c)
OBJ    =$(SRC:.c=.o)# same as OBJS = $(patsubst %.c,%.o,$SRC)
ASM    =$(wildcard *.s)
ASMOBJ =$(ASM:.s=.o)
Project_Name =main

All: $(Project_Name).bin
	@echo "================= Build Is Done ================"
	
%.o: %.s
	$(CC)as.exe  $(CFLAGS) $< -o $@ 

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

$(Project_Name).elf: $(OBJ) $(ASMOBJ)
	$(CC)ld.exe -T Linker_Script.ld $(INCS) $(OBJ) -Map=Map_File.map -o $@ 

$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	del *.o *.elf *.bin *.map
	@echo "================= Cleaning Is Done ================"

	
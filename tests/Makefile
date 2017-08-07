NAME = strt

$(NAME): $(NAME).ihx
	objcopy -Iihex -Obinary $(NAME).ihx $(NAME).bin
	python binpac8x.py $(NAME).bin
	#packihx $(NAME).ihx > $(NAME).hex

%.ihx:
	sdasz80 -p -g -o tios_crt0.rel tios_crt0.s
	sdcc -std=c99 -Ilibti --no-std-crt0 --code-loc 40347 --data-loc 0 --std-sdcc99 -mz80 --reserve-regs-iy -o $*.ihx tios_crt0.rel $*.c
	#sdcc -S --no-std-crt0 --code-loc 40347 --data-loc 0 --std-sdcc99 -mz80 --reserve-regs-iy -o $*.asm.tmp tios_crt0.rel $*.c
	#cat header.asm > $*.asm
	#cat $*.asm.tmp >> $*.asm
	#sdasz80	-plosgffw $*.rel $*.asm
	#sdldz80 -nf $*.lk

8xk:
	rabbitsign -t 8xk -g -o $(NAME).8xk $(NAME).hex

clean:
	rm $(NAME).ihx $(NAME).hex $(NAME).noi $(NAME).map $(NAME).rel $(NAME).sym tios_crt0.rel $(NAME).bin $(NAME).asm $(NAME).asm.tmp $(NAME).lst $(NAME).lk

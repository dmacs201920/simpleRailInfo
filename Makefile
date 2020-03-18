a.out: function.o smain.o date.o reservation.o sfunc.o tourism.o spnr.o frm_to.o seat_no.o
	gcc -o  a.out function.o smain.o date.o reservation.o sfunc.o  tourism.o spnr.o frm_to.o seat_no.o
function.o: function.c header.h
	gcc -c  function.c 
smain.o: smain.c header.h
	gcc -c  smain.c
date.o: date.c header.h
	gcc -c  date.c
reservation.o: reservation.c header.h
	gcc -c  reservation.c
sfunc.o: sfunc.c header.h
	gcc -c  sfunc.c
tourism.o: tourism.c header.h
	gcc -c  tourism.c
spnr.o: spnr.c header.h
	gcc -c  spnr.c
frm_to.o: frm_to.c header.h
	gcc -c  frm_to.c
seat_no.o: seat_no.c header.h
	gcc -c  seat_no.c
	

import sys
str="http://www.pythonchallenge.com/pc/def/map.html"
for x in str:
	if ord(x) >=97:
		if ord(x)==121:
			a=97
		elif ord(x)==122:
			a=98 	
		else:
			a=ord(x)+2
	else:
		a=ord(x)

	sys.stdout.write(chr(a))
# 	

# from string import maketrans 

# intab = "akoeg"
# outtab = "cmqgi"
# trantab = maketrans(intab, outtab)

# str="g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
# print str.translate(trantab)
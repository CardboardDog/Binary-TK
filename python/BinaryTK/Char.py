import BinaryTK.Bin as binPAR
key = "       	                           ! #$%&()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~ "
def GetChar(Dat):
    newdat = key[binPAR.Decode(str(Dat))]
    return newdat
def GetBin(Char):
    ii = 1
    num = 0
    for i in key:
        if(i == Char):
            num = ii
        ii+=1
    return binPAR.Encode(num)
/*
 * FUN_10005953 at 10005953
 * int __thiscall FUN_10005953(void * this, byte * param_1)
 * Address ranges: 10005953-100059cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10005953(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_10050532(param_1,&DAT_10051220,0x10);
  if (iVar1 == 0) {
    iVar2 = (int)this + 0x18;
  }
  else {
    iVar1 = FUN_10050532(param_1,&DAT_10051230,0x10);
    if (iVar1 == 0) {
      iVar2 = (int)this + 0x24;
    }
    else {
      iVar1 = FUN_10050532(param_1,&DAT_10051240,0x10);
      if (iVar1 == 0) {
        iVar2 = (int)this + 0x30;
      }
      else {
        iVar1 = FUN_10050532(param_1,&DAT_10051250,0x10);
        if (iVar1 == 0) {
          iVar2 = (int)this + 0x3c;
        }
      }
    }
  }
  return iVar2;
}


/*
 * FUN_1002f493 at 1002f493
 * int __thiscall FUN_1002f493(void * this, byte * param_1)
 * Address ranges: 1002f493-1002f50d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002f493(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_100561c2(param_1,&DAT_10057220,0x10);
  if (iVar1 == 0) {
    iVar2 = (int)this + 0x18;
  }
  else {
    iVar1 = FUN_100561c2(param_1,&DAT_10057230,0x10);
    if (iVar1 == 0) {
      iVar2 = (int)this + 0x24;
    }
    else {
      iVar1 = FUN_100561c2(param_1,&DAT_10057240,0x10);
      if (iVar1 == 0) {
        iVar2 = (int)this + 0x30;
      }
      else {
        iVar1 = FUN_100561c2(param_1,&DAT_10057250,0x10);
        if (iVar1 == 0) {
          iVar2 = (int)this + 0x3c;
        }
      }
    }
  }
  return iVar2;
}


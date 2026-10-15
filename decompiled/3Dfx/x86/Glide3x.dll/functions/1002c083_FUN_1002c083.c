/*
 * FUN_1002c083 at 1002c083
 * int __thiscall FUN_1002c083(void * this, byte * param_1)
 * Address ranges: 1002c083-1002c0fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002c083(void *this,byte *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_10052db2(param_1,&DAT_10054220,0x10);
  if (iVar1 == 0) {
    iVar2 = (int)this + 0x18;
  }
  else {
    iVar1 = FUN_10052db2(param_1,&DAT_10054230,0x10);
    if (iVar1 == 0) {
      iVar2 = (int)this + 0x24;
    }
    else {
      iVar1 = FUN_10052db2(param_1,&DAT_10054240,0x10);
      if (iVar1 == 0) {
        iVar2 = (int)this + 0x30;
      }
      else {
        iVar1 = FUN_10052db2(param_1,&DAT_10054250,0x10);
        if (iVar1 == 0) {
          iVar2 = (int)this + 0x3c;
        }
      }
    }
  }
  return iVar2;
}


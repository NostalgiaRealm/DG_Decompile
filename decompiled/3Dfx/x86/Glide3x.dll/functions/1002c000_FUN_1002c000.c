/*
 * FUN_1002c000 at 1002c000
 * undefined4 __thiscall FUN_1002c000(void * this, byte * param_1, int param_2)
 * Address ranges: 1002c000-1002c082
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002c000(void *this,byte *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10052db2(param_1,&DAT_10054220,0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x18);
  }
  else {
    iVar1 = FUN_10052db2(param_1,&DAT_10054230,0x10);
    if (iVar1 == 0) {
      iVar1 = *(int *)((int)this + 0x24);
    }
    else {
      iVar1 = FUN_10052db2(param_1,&DAT_10054240,0x10);
      if (iVar1 == 0) {
        iVar1 = *(int *)((int)this + 0x30);
      }
      else {
        iVar1 = FUN_10052db2(param_1,&DAT_10054250,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = *(int *)((int)this + 0x3c);
      }
    }
  }
  return *(undefined4 *)(iVar1 + param_2 * 4);
}


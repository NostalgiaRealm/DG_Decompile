/*
 * FUN_1002bf85 at 1002bf85
 * undefined4 __thiscall FUN_1002bf85(void * this, byte * param_1)
 * Address ranges: 1002bf85-1002bfff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002bf85(void *this,byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_10052db2(param_1,&DAT_10054220,0x10);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)((int)this + 0x1c);
  }
  else {
    iVar1 = FUN_10052db2(param_1,&DAT_10054230,0x10);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)((int)this + 0x28);
    }
    else {
      iVar1 = FUN_10052db2(param_1,&DAT_10054240,0x10);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)((int)this + 0x34);
      }
      else {
        iVar1 = FUN_10052db2(param_1,&DAT_10054250,0x10);
        if (iVar1 == 0) {
          uVar2 = *(undefined4 *)((int)this + 0x40);
        }
      }
    }
  }
  return uVar2;
}


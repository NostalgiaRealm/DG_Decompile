/*
 * FUN_1004901d at 1004901d
 * uint __thiscall FUN_1004901d(void * this, int param_1)
 * Address ranges: 1004901d-10049047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004901d(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)((int)this + 0x254) != 0) {
    do {
      if (*(int *)(*(int *)((int)this + 0x250) + uVar1 * 4) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 0x254));
  }
  return 0xffffffff;
}


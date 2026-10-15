/*
 * FUN_1004c721 at 1004c721
 * undefined4 __thiscall FUN_1004c721(void * this, int param_1)
 * Address ranges: 1004c721-1004c73b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c721(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_1 != 0) {
    *(int *)((int)this + 0x88) = param_1;
    uVar1 = 0;
  }
  return uVar1;
}


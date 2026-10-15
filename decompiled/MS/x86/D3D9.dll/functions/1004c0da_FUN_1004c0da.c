/*
 * FUN_1004c0da at 1004c0da
 * undefined4 __thiscall FUN_1004c0da(void * this, int param_1)
 * Address ranges: 1004c0da-1004c105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c0da(void *this,int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  *(int *)((int)this + 8) = param_1;
  iVar1 = 0;
  if ((((param_1 != 8) && (iVar1 = 0, param_1 != 9)) && (iVar1 = 0, param_1 != 10)) &&
     ((iVar1 = 0, param_1 != 0xb && (iVar1 = param_1 + -0xc, iVar1 != 0)))) {
    uVar2 = 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}


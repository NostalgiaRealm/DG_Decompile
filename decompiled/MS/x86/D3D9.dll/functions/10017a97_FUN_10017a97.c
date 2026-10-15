/*
 * FUN_10017a97 at 10017a97
 * undefined4 __thiscall FUN_10017a97(void * this, undefined4 param_1)
 * Address ranges: 10017a97-10017abd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10017a97(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0x933);
  uVar2 = 0;
  if (((iVar1 != 0) && (uVar2 = 1, iVar1 == 1)) &&
     (*(int *)(*(int *)((int)this + 0xc) + 0x92f) != 0)) {
    uVar2 = param_1;
  }
  return uVar2;
}


/*
 * FUN_10065ef5 at 10065ef5
 * undefined __thiscall FUN_10065ef5(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10065ef5-10065f10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10065ef5(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)(iVar1 + 0xc38) = param_1;
  *(undefined4 *)(iVar1 + 0xc3c) = param_2;
  return;
}


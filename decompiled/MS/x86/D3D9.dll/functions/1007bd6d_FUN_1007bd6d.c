/*
 * FUN_1007bd6d at 1007bd6d
 * undefined __thiscall FUN_1007bd6d(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1007bd6d-1007bd88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007bd6d(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)(iVar1 + 0xc38) = param_1;
  *(undefined4 *)(iVar1 + 0xc3c) = param_2;
  return;
}


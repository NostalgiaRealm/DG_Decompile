/*
 * FUN_1000f091 at 1000f091
 * undefined __thiscall FUN_1000f091(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1000f091-1000f0ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000f091(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)(iVar1 + 0xc38) = param_1;
  *(undefined4 *)(iVar1 + 0xc3c) = param_2;
  return;
}


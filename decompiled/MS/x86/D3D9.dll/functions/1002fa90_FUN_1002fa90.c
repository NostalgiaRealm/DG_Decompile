/*
 * FUN_1002fa90 at 1002fa90
 * undefined __thiscall FUN_1002fa90(void * this, undefined2 * param_1)
 * Address ranges: 1002fa90-1002faae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002fa90(void *this,undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xf748);
  *param_1 = 0x100;
  *(bool *)(param_1 + 1) = 0xa0ff < iVar1;
  return;
}


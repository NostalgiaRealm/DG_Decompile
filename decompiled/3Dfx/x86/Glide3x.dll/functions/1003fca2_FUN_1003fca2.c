/*
 * FUN_1003fca2 at 1003fca2
 * bool __thiscall FUN_1003fca2(void * this, int param_1)
 * Address ranges: 1003fca2-1003fcba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1003fca2(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}


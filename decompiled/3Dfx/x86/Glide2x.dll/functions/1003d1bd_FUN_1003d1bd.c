/*
 * FUN_1003d1bd at 1003d1bd
 * bool __thiscall FUN_1003d1bd(void * this, int param_1)
 * Address ranges: 1003d1bd-1003d1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1003d1bd(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}


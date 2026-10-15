/*
 * FUN_1003d54d at 1003d54d
 * bool __thiscall FUN_1003d54d(void * this, int param_1)
 * Address ranges: 1003d54d-1003d565
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1003d54d(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}


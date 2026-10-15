/*
 * FUN_100bb197 at 100bb197
 * bool __thiscall FUN_100bb197(void * this, int param_1)
 * Address ranges: 100bb197-100bb1af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100bb197(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}


/*
 * FUN_10098bbf at 10098bbf
 * bool __thiscall FUN_10098bbf(void * this, int param_1)
 * Address ranges: 10098bbf-10098bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10098bbf(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}


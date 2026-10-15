/*
 * FUN_100430ab at 100430ab
 * bool __thiscall FUN_100430ab(void * this, int param_1)
 * Address ranges: 100430ab-100430c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100430ab(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x944);
  *(int *)((int)this + 0x944) = param_1;
  return param_1 != iVar1;
}


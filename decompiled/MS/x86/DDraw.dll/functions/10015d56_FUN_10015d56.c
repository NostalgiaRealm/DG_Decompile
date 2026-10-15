/*
 * FUN_10015d56 at 10015d56
 * undefined __thiscall FUN_10015d56(void * this, int param_1, RECT * param_2)
 * Address ranges: 10015d56-10015d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015d56(void *this,int param_1,RECT *param_2)

{
  LPRECT ptVar1;
  
  ptVar1 = (LPRECT)((param_1 * 0x20 | 0x10U) + *(int *)((int)this + 0x5c));
  UnionRect(ptVar1,ptVar1,param_2);
  if (*(int *)((int)this + 0x104) != 0) {
    ptVar1 = (LPRECT)(*(int *)((int)this + 0x104) + 0x10 + param_1 * 0x20);
    UnionRect(ptVar1,ptVar1,param_2);
  }
  return;
}


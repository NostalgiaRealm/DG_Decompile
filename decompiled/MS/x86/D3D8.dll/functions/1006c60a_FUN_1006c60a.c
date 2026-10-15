/*
 * FUN_1006c60a at 1006c60a
 * undefined __thiscall FUN_1006c60a(void * this, int param_1, RECT * param_2)
 * Address ranges: 1006c60a-1006c649
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006c60a(void *this,int param_1,RECT *param_2)

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


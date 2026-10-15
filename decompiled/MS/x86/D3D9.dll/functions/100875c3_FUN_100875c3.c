/*
 * FUN_100875c3 at 100875c3
 * undefined __thiscall FUN_100875c3(void * this, int param_1, RECT * param_2)
 * Address ranges: 100875c3-100875e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100875c3(void *this,int param_1,RECT *param_2)

{
  LPRECT lprcDst;
  
  if (*(int *)((int)this + 0x150) != 0) {
    lprcDst = (LPRECT)(param_1 * 0x20 + *(int *)((int)this + 0x150) + 0x10);
    UnionRect(lprcDst,lprcDst,param_2);
  }
  return;
}


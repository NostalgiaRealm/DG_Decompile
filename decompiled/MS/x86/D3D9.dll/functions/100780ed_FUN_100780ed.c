/*
 * FUN_100780ed at 100780ed
 * undefined __thiscall FUN_100780ed(void * this, int param_1, RECT * param_2)
 * Address ranges: 100780ed-1007810d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100780ed(void *this,int param_1,RECT *param_2)

{
  LPRECT lprcDst;
  
  lprcDst = (LPRECT)(*(int *)((int)this + 0x80) + param_1 * 0x1c + 0xc);
  UnionRect(lprcDst,lprcDst,param_2);
  return;
}


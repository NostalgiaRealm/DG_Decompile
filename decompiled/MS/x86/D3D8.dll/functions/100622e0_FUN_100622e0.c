/*
 * FUN_100622e0 at 100622e0
 * undefined __thiscall FUN_100622e0(void * this, int param_1, RECT * param_2)
 * Address ranges: 100622e0-10062300
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100622e0(void *this,int param_1,RECT *param_2)

{
  LPRECT lprcDst;
  
  lprcDst = (LPRECT)(*(int *)((int)this + 0x80) + param_1 * 0x1c + 0xc);
  UnionRect(lprcDst,lprcDst,param_2);
  return;
}


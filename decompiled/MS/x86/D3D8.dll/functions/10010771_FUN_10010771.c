/*
 * FUN_10010771 at 10010771
 * undefined __thiscall FUN_10010771(void * this, int param_1, undefined4 param_2, LONG * param_3)
 * Address ranges: 10010771-100107ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10010771(void *this,int param_1,undefined4 param_2,LONG *param_3)

{
  LPRECT lprcDst;
  RECT local_18;
  
  if (param_3 == (LONG *)0x0) {
    local_18.right = *(LONG *)((int)this + 0x4c);
    local_18.bottom = *(LONG *)((int)this + 0x50);
    local_18.left = 0;
    local_18.top = 0;
  }
  else {
    local_18.left = *param_3;
    local_18.top = param_3[1];
    local_18.right = param_3[2];
    local_18.bottom = param_3[3];
  }
  lprcDst = (LPRECT)(*(int *)((int)this + 0x3c) + param_1 * 0x10);
  UnionRect(lprcDst,lprcDst,&local_18);
  return;
}


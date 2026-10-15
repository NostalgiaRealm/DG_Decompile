/*
 * FUN_100689be at 100689be
 * undefined __thiscall FUN_100689be(void * this, LONG * param_1, int param_2)
 * Address ranges: 100689be-100689f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100689be(void *this,LONG *param_1,int param_2)

{
  tagRECT local_34;
  LONG local_24;
  LONG LStack_20;
  LONG LStack_1c;
  LONG LStack_18;
  
  FUN_10097092(*(void **)((int)this + 0x1cf00),&local_34,param_2);
  *param_1 = local_34.left;
  param_1[1] = local_34.top;
  param_1[2] = local_34.right;
  param_1[3] = local_34.bottom;
  param_1[4] = local_24;
  param_1[5] = LStack_20;
  param_1[6] = LStack_1c;
  param_1[7] = LStack_18;
  return;
}


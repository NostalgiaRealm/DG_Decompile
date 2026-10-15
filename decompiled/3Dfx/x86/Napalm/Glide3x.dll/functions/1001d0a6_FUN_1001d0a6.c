/*
 * FUN_1001d0a6 at 1001d0a6
 * undefined __thiscall FUN_1001d0a6(void * this, undefined4 * param_1)
 * Address ranges: 1001d0a6-1001d12f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001d0a6(void *this,undefined4 *param_1)

{
  FUN_1001cd53((int)this);
  FUN_10041587(*(void **)((int)this + 0xa4),(int *)param_1[2]);
  FUN_10041587(*(void **)((int)this + 0xa4),(int *)*param_1);
  FUN_10041587(*(void **)((int)this + 0xa4),(int *)param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10042298(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),(int *)param_1[4],2,(int *)0x0,0,0);
  FUN_10042298(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),(int *)param_1[3],2,(int *)0x0,0,0);
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  return;
}


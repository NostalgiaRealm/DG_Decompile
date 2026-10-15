/*
 * FUN_100279ac at 100279ac
 * undefined __thiscall FUN_100279ac(void * this, undefined4 * param_1)
 * Address ranges: 100279ac-10027a35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100279ac(void *this,undefined4 *param_1)

{
  FUN_10027659((int)this);
  FUN_1003ba29(*(void **)((int)this + 0xa4),(int *)param_1[2]);
  FUN_1003ba29(*(void **)((int)this + 0xa4),(int *)*param_1);
  FUN_1003ba29(*(void **)((int)this + 0xa4),(int *)param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  FUN_1003c73a(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),(int *)param_1[4],2,(int *)0x0,0,0);
  FUN_1003c73a(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),(int *)param_1[3],2,(int *)0x0,0,0);
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  return;
}


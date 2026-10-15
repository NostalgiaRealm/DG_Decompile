/*
 * FUN_1001c45e at 1001c45e
 * longlong __thiscall FUN_1001c45e(void * this, int param_1)
 * Address ranges: 1001c45e-1001c488
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __thiscall FUN_1001c45e(void *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(int **)((int)this + 0x3020) + 0x2c))(*(int **)((int)this + 0x3020));
  return lVar1 + (ulonglong)(uint)(*(int *)((int)this + 0x301c) * param_1);
}


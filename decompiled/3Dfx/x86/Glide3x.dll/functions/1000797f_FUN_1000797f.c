/*
 * FUN_1000797f at 1000797f
 * undefined __thiscall FUN_1000797f(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 1000797f-100079b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000797f(void *this,undefined4 *param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1000790d(this,param_1,0);
    param_1 = (undefined4 *)((int)param_1 + param_2);
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 0x50;
  }
  return;
}


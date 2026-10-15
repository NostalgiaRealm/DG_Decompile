/*
 * FUN_10020fef at 10020fef
 * undefined __thiscall FUN_10020fef(void * this, int * param_1)
 * Address ranges: 10020fef-10021036
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020fef(void *this,int *param_1)

{
  FUN_1004954e(*(void **)((int)this + 0x10),(int *)*param_1,3 - (uint)(param_1[4] != 1),
               (HMONITOR)param_1[6]);
  FUN_100499bf(*(void **)((int)this + 0x10),*param_1,(int *)(param_1[5] * 0xc18 + 0xa8 + (int)this),
               (undefined4 *)((int)this + 0xc));
  return;
}


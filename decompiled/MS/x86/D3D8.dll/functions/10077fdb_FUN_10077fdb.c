/*
 * FUN_10077fdb at 10077fdb
 * undefined __thiscall FUN_10077fdb(void * this, int * param_1)
 * Address ranges: 10077fdb-10078022
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10077fdb(void *this,int *param_1)

{
  FUN_100967e0(*(void **)((int)this + 0x10),(int *)*param_1,3 - (uint)(param_1[4] != 1),
               (HMONITOR)param_1[6]);
  FUN_10096c51(*(void **)((int)this + 0x10),*param_1,
               (int *)(param_1[5] * 0xc18 + 0x100a8 + (int)this),(undefined4 *)((int)this + 0xc));
  return;
}


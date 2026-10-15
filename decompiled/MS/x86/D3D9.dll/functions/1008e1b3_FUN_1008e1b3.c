/*
 * FUN_1008e1b3 at 1008e1b3
 * undefined __thiscall FUN_1008e1b3(void * this, int * param_1)
 * Address ranges: 1008e1b3-1008e1fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008e1b3(void *this,int *param_1)

{
  FUN_100b8e33(*(void **)((int)this + 0x10),(int *)*param_1,3 - (uint)(param_1[4] != 1),
               (HMONITOR)param_1[6]);
  FUN_100b92a4(*(void **)((int)this + 0x10),*param_1,
               (int *)(param_1[5] * 0xc18 + 0x100a8 + (int)this),(undefined4 *)((int)this + 0xc));
  return;
}


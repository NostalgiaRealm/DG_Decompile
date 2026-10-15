/*
 * FUN_1004c5e1 at 1004c5e1
 * undefined __thiscall FUN_1004c5e1(void * this, uint * param_1)
 * Address ranges: 1004c5e1-1004c61b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004c5e1(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_1003c020(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_10052276((LPVOID)param_1[4]);
  thunk_FUN_10052276((LPVOID)param_1[5]);
  return;
}


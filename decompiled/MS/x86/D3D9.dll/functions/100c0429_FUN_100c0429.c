/*
 * FUN_100c0429 at 100c0429
 * undefined __thiscall FUN_100c0429(void * this, uint * param_1)
 * Address ranges: 100c0429-100c0463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c0429(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_100c10d6(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_100cfd6c((LPVOID)param_1[4]);
  thunk_FUN_100cfd6c((LPVOID)param_1[5]);
  return;
}


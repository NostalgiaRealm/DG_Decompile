/*
 * FUN_1004f9ea at 1004f9ea
 * undefined __thiscall FUN_1004f9ea(void * this, uint * param_1)
 * Address ranges: 1004f9ea-1004fa24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f9ea(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_1003f42e(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_10055686((LPVOID)param_1[4]);
  thunk_FUN_10055686((LPVOID)param_1[5]);
  return;
}


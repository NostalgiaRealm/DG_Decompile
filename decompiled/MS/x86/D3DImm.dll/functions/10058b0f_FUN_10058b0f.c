/*
 * FUN_10058b0f at 10058b0f
 * undefined __thiscall FUN_10058b0f(void * this, uint * param_1)
 * Address ranges: 10058b0f-10058b49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10058b0f(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_10055836(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_1005c76c((LPVOID)param_1[4]);
  thunk_FUN_1005c76c((LPVOID)param_1[5]);
  return;
}


/*
 * FUN_1005a21e at 1005a21e
 * undefined __thiscall FUN_1005a21e(void * this, uint * param_1)
 * Address ranges: 1005a21e-1005a258
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005a21e(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_1004ff52(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_10060be1((LPVOID)param_1[4]);
  thunk_FUN_10060be1((LPVOID)param_1[5]);
  return;
}


/*
 * FUN_1009de61 at 1009de61
 * undefined __thiscall FUN_1009de61(void * this, uint * param_1)
 * Address ranges: 1009de61-1009de9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009de61(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_1009eb0e(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_100ad48c((LPVOID)param_1[4]);
  thunk_FUN_100ad48c((LPVOID)param_1[5]);
  return;
}


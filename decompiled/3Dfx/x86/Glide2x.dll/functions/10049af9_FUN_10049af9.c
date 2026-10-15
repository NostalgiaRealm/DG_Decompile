/*
 * FUN_10049af9 at 10049af9
 * undefined __thiscall FUN_10049af9(void * this, uint * param_1)
 * Address ranges: 10049af9-10049b33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049af9(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_1003953b(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_1004f626((LPVOID)param_1[4]);
  thunk_FUN_1004f626((LPVOID)param_1[5]);
  return;
}


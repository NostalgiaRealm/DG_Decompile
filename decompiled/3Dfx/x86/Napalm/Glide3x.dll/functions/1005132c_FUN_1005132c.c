/*
 * FUN_1005132c at 1005132c
 * undefined __thiscall FUN_1005132c(void * this, int * param_1)
 * Address ranges: 1005132c-10051348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005132c(void *this,int *param_1)

{
  FUN_1003f42e(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


/*
 * FUN_100a588c at 100a588c
 * undefined __thiscall FUN_100a588c(void * this, int * param_1)
 * Address ranges: 100a588c-100a58a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a588c(void *this,int *param_1)

{
  FUN_1009eb0e(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


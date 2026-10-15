/*
 * FUN_10056127 at 10056127
 * undefined __thiscall FUN_10056127(void * this, int * param_1)
 * Address ranges: 10056127-10056143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10056127(void *this,int *param_1)

{
  FUN_1004ff52(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


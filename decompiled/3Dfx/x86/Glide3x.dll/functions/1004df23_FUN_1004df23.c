/*
 * FUN_1004df23 at 1004df23
 * undefined __thiscall FUN_1004df23(void * this, int * param_1)
 * Address ranges: 1004df23-1004df3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004df23(void *this,int *param_1)

{
  FUN_1003c020(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


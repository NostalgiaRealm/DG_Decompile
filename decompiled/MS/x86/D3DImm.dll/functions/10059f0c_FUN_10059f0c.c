/*
 * FUN_10059f0c at 10059f0c
 * undefined __thiscall FUN_10059f0c(void * this, int * param_1)
 * Address ranges: 10059f0c-10059f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10059f0c(void *this,int *param_1)

{
  FUN_10055836(*(void **)((int)this + 0x30),(uint)param_1,'\x01');
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


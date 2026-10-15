/*
 * FUN_100bdcba at 100bdcba
 * undefined __thiscall FUN_100bdcba(void * this, int * param_1)
 * Address ranges: 100bdcba-100bdcdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100bdcba(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_100c10d6(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


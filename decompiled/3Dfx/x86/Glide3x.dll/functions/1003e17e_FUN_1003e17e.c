/*
 * FUN_1003e17e at 1003e17e
 * undefined __thiscall FUN_1003e17e(void * this, int * param_1)
 * Address ranges: 1003e17e-1003e1a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e17e(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_1003c020(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


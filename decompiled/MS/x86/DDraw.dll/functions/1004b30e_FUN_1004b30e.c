/*
 * FUN_1004b30e at 1004b30e
 * undefined __thiscall FUN_1004b30e(void * this, int * param_1)
 * Address ranges: 1004b30e-1004b331
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b30e(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_1004ff52(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


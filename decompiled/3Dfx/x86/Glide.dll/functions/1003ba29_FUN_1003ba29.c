/*
 * FUN_1003ba29 at 1003ba29
 * undefined __thiscall FUN_1003ba29(void * this, int * param_1)
 * Address ranges: 1003ba29-1003ba4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ba29(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_100398cb(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


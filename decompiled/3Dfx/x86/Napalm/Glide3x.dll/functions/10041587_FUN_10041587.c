/*
 * FUN_10041587 at 10041587
 * undefined __thiscall FUN_10041587(void * this, int * param_1)
 * Address ranges: 10041587-100415aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041587(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_1003f42e(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


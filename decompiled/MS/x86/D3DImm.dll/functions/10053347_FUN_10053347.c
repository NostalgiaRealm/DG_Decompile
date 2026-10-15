/*
 * FUN_10053347 at 10053347
 * undefined __thiscall FUN_10053347(void * this, int * param_1)
 * Address ranges: 10053347-1005336a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053347(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_10055836(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


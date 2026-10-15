/*
 * FUN_1009b6e2 at 1009b6e2
 * undefined __thiscall FUN_1009b6e2(void * this, int * param_1)
 * Address ranges: 1009b6e2-1009b705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009b6e2(void *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_1009eb0e(*(void **)((int)this + 0x172c0),(uint)param_1,'\x01');
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


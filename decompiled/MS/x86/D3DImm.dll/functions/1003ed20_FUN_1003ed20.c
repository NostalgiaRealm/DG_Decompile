/*
 * FUN_1003ed20 at 1003ed20
 * undefined __thiscall FUN_1003ed20(void * this, int param_1, int * param_2)
 * Address ranges: 1003ed20-1003ed47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ed20(void *this,int param_1,int *param_2)

{
  if (*(int **)((int)this + 0xa74) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xa74) + 0x34))(param_1,param_2,0);
    return;
  }
  FUN_1003eaee(this,param_1,param_2);
  return;
}


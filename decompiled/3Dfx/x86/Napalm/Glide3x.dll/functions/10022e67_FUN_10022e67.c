/*
 * FUN_10022e67 at 10022e67
 * undefined __thiscall FUN_10022e67(void * this, int param_1, byte param_2)
 * Address ranges: 10022e67-10022e9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022e67(void *this,int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
  (**(code **)(*piVar1 + 0x3c))
            (piVar1,*(undefined4 *)((int)this + (uint)param_2 * 4 + param_1 * 0x104 + 0x238),0);
  return;
}


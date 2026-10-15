/*
 * FUN_1001e5ee at 1001e5ee
 * undefined __thiscall FUN_1001e5ee(void * this, int param_1, byte param_2)
 * Address ranges: 1001e5ee-1001e621
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e5ee(void *this,int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3308) + 4);
  (**(code **)(*piVar1 + 0x3c))
            (piVar1,*(undefined4 *)((int)this + (uint)param_2 * 4 + param_1 * 0x104 + 0x238),0);
  return;
}


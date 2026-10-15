/*
 * FUN_1002ae45 at 1002ae45
 * undefined __thiscall FUN_1002ae45(void * this, int param_1, byte param_2)
 * Address ranges: 1002ae45-1002ae78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002ae45(void *this,int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3188) + 4);
  (**(code **)(*piVar1 + 0x3c))
            (piVar1,*(undefined4 *)((int)this + (uint)param_2 * 4 + param_1 * 0x104 + 0x238),0);
  return;
}


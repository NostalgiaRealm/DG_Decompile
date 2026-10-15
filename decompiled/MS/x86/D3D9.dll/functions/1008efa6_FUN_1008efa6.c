/*
 * FUN_1008efa6 at 1008efa6
 * bool __thiscall FUN_1008efa6(void * this, undefined4 param_1)
 * Address ranges: 1008efa6-1008efcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1008efa6(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 0x10) + 0x24))
                            (*(undefined4 *)((int)this + 0x14));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_1);
  }
  return piVar1 != (int *)0x0;
}


/*
 * FUN_1008efcd at 1008efcd
 * bool __thiscall FUN_1008efcd(void * this, undefined4 param_1)
 * Address ranges: 1008efcd-1008eff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1008efcd(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 0x10) + 0x24))
                            (*(undefined4 *)((int)this + 0x14));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_1);
  }
  return piVar1 != (int *)0x0;
}


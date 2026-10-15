/*
 * FUN_100813e5 at 100813e5
 * undefined __thiscall FUN_100813e5(void * this, int * param_1)
 * Address ranges: 100813e5-10081410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100813e5(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 == 1) {
    FUN_100ca5fd((void *)(*(int *)((int)this + 8) + 0x1580),param_1);
  }
  return;
}


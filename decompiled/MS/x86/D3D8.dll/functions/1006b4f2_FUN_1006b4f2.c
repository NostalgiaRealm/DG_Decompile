/*
 * FUN_1006b4f2 at 1006b4f2
 * undefined __thiscall FUN_1006b4f2(void * this, int * param_1)
 * Address ranges: 1006b4f2-1006b51d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006b4f2(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 == 1) {
    FUN_100a7d2e((void *)(*(int *)((int)this + 8) + 0x1580),param_1);
  }
  return;
}


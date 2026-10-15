/*
 * FUN_10045e36 at 10045e36
 * undefined __thiscall FUN_10045e36(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10045e36-10045e75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045e36(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x9cc);
  if (*(int *)(iVar1 + 0x944) == param_1) {
    uVar2 = 10;
  }
  else if (*(int *)(iVar1 + 0x948) == param_1) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(iVar1 + 0x94c) != param_1) {
      return;
    }
    uVar2 = 1;
  }
  FUN_10007a92(this,uVar2,param_2);
  return;
}


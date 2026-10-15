/*
 * FUN_10036d29 at 10036d29
 * undefined __thiscall FUN_10036d29(void * this, undefined4 * param_1)
 * Address ranges: 10036d29-10036d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10036d29(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  puVar3 = &DAT_10053fc4;
  uVar2 = 3;
  uVar4 = 0;
  if (iVar1 == 3) {
    uVar4 = 5;
  }
  if (iVar1 == 1) {
    puVar3 = &DAT_10053fd4;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar3 = &DAT_10053fd0;
  }
  else {
    if (iVar1 != 4) goto LAB_10036d6e;
    puVar3 = &DAT_10053fd8;
  }
  uVar2 = 1;
LAB_10036d6e:
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  *(bool *)(param_1 + 3) = iVar1 == 0;
  return;
}


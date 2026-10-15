/*
 * FUN_10043b98 at 10043b98
 * undefined __thiscall FUN_10043b98(void * this, undefined4 * param_1)
 * Address ranges: 10043b98-10043bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10043b98(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  puVar3 = &DAT_10065c9c;
  uVar2 = 3;
  uVar4 = 0;
  if (iVar1 == 3) {
    uVar4 = 5;
  }
  if (iVar1 == 1) {
    puVar3 = &DAT_10065cac;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar3 = &DAT_10065ca8;
  }
  else {
    if (iVar1 != 4) goto LAB_10043bdd;
    puVar3 = &DAT_10065cb0;
  }
  uVar2 = 1;
LAB_10043bdd:
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  *(bool *)(param_1 + 3) = iVar1 == 0;
  return;
}


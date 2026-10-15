/*
 * FUN_1003cc18 at 1003cc18
 * undefined __thiscall FUN_1003cc18(void * this, undefined4 * param_1)
 * Address ranges: 1003cc18-1003cc73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003cc18(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  puVar3 = &DAT_1005a6c8;
  uVar2 = 3;
  uVar4 = 0;
  if (iVar1 == 3) {
    uVar4 = 5;
  }
  if (iVar1 == 1) {
    puVar3 = &DAT_1005a6d8;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar3 = &DAT_1005a6d4;
  }
  else {
    if (iVar1 != 4) goto LAB_1003cc5d;
    puVar3 = &DAT_1005a6dc;
  }
  uVar2 = 1;
LAB_1003cc5d:
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  *(bool *)(param_1 + 3) = iVar1 == 0;
  return;
}


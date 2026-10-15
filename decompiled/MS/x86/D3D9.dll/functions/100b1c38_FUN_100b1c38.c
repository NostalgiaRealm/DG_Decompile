/*
 * FUN_100b1c38 at 100b1c38
 * undefined __thiscall FUN_100b1c38(void * this, undefined4 * param_1)
 * Address ranges: 100b1c38-100b1c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b1c38(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  puVar3 = &DAT_100d829c;
  uVar2 = 3;
  uVar4 = 0;
  if (iVar1 == 3) {
    uVar4 = 5;
  }
  if (iVar1 == 1) {
    puVar3 = &DAT_100d82ac;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar3 = &DAT_100d82a8;
  }
  else {
    if (iVar1 != 4) goto LAB_100b1c7d;
    puVar3 = &DAT_100d82b0;
  }
  uVar2 = 1;
LAB_100b1c7d:
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  *(bool *)(param_1 + 3) = iVar1 == 0;
  return;
}


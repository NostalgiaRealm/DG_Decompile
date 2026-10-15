/*
 * FUN_1003980a at 1003980a
 * undefined __thiscall FUN_1003980a(void * this, undefined4 * param_1)
 * Address ranges: 1003980a-10039865
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003980a(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)this;
  puVar3 = &DAT_1005721c;
  uVar2 = 3;
  uVar4 = 0;
  if (iVar1 == 3) {
    uVar4 = 5;
  }
  if (iVar1 == 1) {
    puVar3 = &DAT_1005722c;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    puVar3 = &DAT_10057228;
  }
  else {
    if (iVar1 != 4) goto LAB_1003984f;
    puVar3 = &DAT_10057230;
  }
  uVar2 = 1;
LAB_1003984f:
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = puVar3;
  *(bool *)(param_1 + 3) = iVar1 == 0;
  return;
}


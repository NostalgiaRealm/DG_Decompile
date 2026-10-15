/*
 * FUN_100b8920 at 100b8920
 * undefined FUN_100b8920(void)
 * Address ranges: 100b8920-100b8a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b8920(ulonglong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint extraout_w15;
  uint uVar7;
  uint extraout_w15_00;
  
  uVar4 = param_1 & 0xffffffff;
  piVar1 = (int *)((int)param_1 + 0xb4c);
  uVar6 = ZEXT48(piVar1);
  uVar7 = 0;
  if (*piVar1 != 0) {
    uVar5 = (ulonglong)((int)param_1 + 0xb48);
    do {
      iVar3 = *(int *)(*(int *)uVar5 + uVar7 * 4);
      if (*(int *)(iVar3 + 0x60) == 1) {
        FUN_1001be58(iVar3,iVar3 + 0x88);
        uVar7 = extraout_w15;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)uVar6);
  }
  iVar3 = (int)uVar4;
  uVar6 = ZEXT48((int *)(iVar3 + 0xb40U));
  uVar7 = 0;
  if (*(int *)(iVar3 + 0xb40U) != 0) {
    uVar5 = (ulonglong)(iVar3 + 0xb3c);
    do {
      iVar3 = *(int *)(*(int *)uVar5 + uVar7 * 4);
      if (*(int *)(iVar3 + 0x60) == 1) {
        FUN_1001be58(iVar3,iVar3 + 0x88);
        uVar7 = extraout_w15_00;
      }
      iVar3 = (int)uVar4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)uVar6);
  }
  uVar7 = 0;
  if (*(uint *)(iVar3 + 0xb64) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(iVar3 + 0xb60) + uVar7 * 4);
      if (*(int *)(iVar2 + 0x34) == 1) {
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xb0) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar3 + 0xb64));
  }
  return;
}


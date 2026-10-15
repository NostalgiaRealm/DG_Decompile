/*
 * FUN_100dfb20 at 100dfb20
 * undefined FUN_100dfb20(void)
 * Address ranges: 100dfb20-100dfc1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dfb20(ulonglong param_1)

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
  piVar1 = (int *)((int)param_1 + 0xe10);
  uVar6 = ZEXT48(piVar1);
  uVar7 = 0;
  if (*piVar1 != 0) {
    uVar5 = (ulonglong)((int)param_1 + 0xe0c);
    do {
      iVar3 = *(int *)(*(int *)uVar5 + uVar7 * 4);
      if (*(int *)(iVar3 + 0x60) == 1) {
        FUN_10021428(iVar3,iVar3 + 0x88);
        uVar7 = extraout_w15;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)uVar6);
  }
  iVar3 = (int)uVar4;
  uVar6 = ZEXT48((int *)(iVar3 + 0xe04U));
  uVar7 = 0;
  if (*(int *)(iVar3 + 0xe04U) != 0) {
    uVar5 = (ulonglong)(iVar3 + 0xe00);
    do {
      iVar3 = *(int *)(*(int *)uVar5 + uVar7 * 4);
      if (*(int *)(iVar3 + 0x60) == 1) {
        FUN_10021428(iVar3,iVar3 + 0x88);
        uVar7 = extraout_w15_00;
      }
      iVar3 = (int)uVar4;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)uVar6);
  }
  uVar7 = 0;
  if (*(uint *)(iVar3 + 0xe28) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(iVar3 + 0xe24) + uVar7 * 4);
      if (*(int *)(iVar2 + 0x34) == 1) {
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xb0) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(iVar3 + 0xe28));
  }
  return;
}


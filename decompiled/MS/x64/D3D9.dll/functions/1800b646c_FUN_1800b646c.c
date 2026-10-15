/*
 * FUN_1800b646c at 1800b646c
 * undefined __fastcall FUN_1800b646c(longlong param_1, longlong param_2, uint param_3, undefined4 * param_4, int param_5)
 * Address ranges: 1800b646c-1800b6639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b646c(longlong param_1,longlong param_2,uint param_3,undefined4 *param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  
  uVar4 = MXCSR;
  puVar9 = param_4;
  puVar11 = (undefined4 *)(param_1 + 0x13e0 + (ulonglong)(param_3 * 4) * 4);
  for (uVar5 = (ulonglong)(uint)(param_5 * 4); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar13 = param_3 + param_5;
  MXCSR = 0x3fc0;
  iVar12 = 0;
  puVar9 = (undefined4 *)(param_1 + 0x71e0 + (ulonglong)(param_3 * 4) * 4);
  for (uVar5 = (ulonglong)(uint)(param_5 * 4); uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar9 = *param_4;
    param_4 = param_4 + 1;
    puVar9 = puVar9 + 1;
  }
  if (param_2 != 0) {
    uVar5 = 0;
    sVar1 = *(short *)(param_2 + 0x18);
    while (sVar1 != -1) {
      uVar2 = *(ushort *)(param_2 + 0x18 + uVar5 * 2);
      uVar3 = *(ushort *)(param_2 + 0x18 + (ulonglong)((int)uVar5 + 1) * 2);
      if (uVar13 < uVar2) break;
      if (param_3 <= uVar3) {
        uVar10 = (uint)uVar2;
        if (uVar2 < param_3) {
          uVar10 = param_3;
        }
        uVar7 = uVar13;
        if (uVar3 < uVar13) {
          uVar7 = (uint)uVar3;
        }
        puVar9 = (undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x850 + (ulonglong)(uVar10 * 4) * 4)
        ;
        puVar11 = (undefined4 *)(param_1 + 0x71e0 + (ulonglong)(uVar10 * 4) * 4);
        for (uVar6 = (ulonglong)((uVar7 - uVar10) * 4); uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      uVar5 = (ulonglong)((int)uVar5 + 2);
      sVar1 = *(short *)(param_2 + 0x18 + uVar5 * 2);
    }
  }
  if ((*(char *)(param_1 + 0x21) == '\0') ||
     ((param_2 != 0 && (*(char *)(*(longlong *)(param_2 + 0x10) + 0x44e) != '\0')))) {
    iVar12 = 1;
  }
  uVar10 = *(uint *)(param_1 + 0x680c);
  if (iVar12 == *(int *)(param_1 + 0x6814)) {
    if (uVar10 < *(uint *)(param_1 + 0x6810)) {
      if ((param_3 <= *(uint *)(param_1 + 0x6810)) && (uVar10 <= uVar13)) {
        if (uVar10 < param_3) {
          param_3 = uVar10;
        }
        *(uint *)(param_1 + 0x680c) = param_3;
        if (uVar13 < *(uint *)(param_1 + 0x6810)) {
          uVar13 = *(uint *)(param_1 + 0x6810);
        }
        goto LAB_1800b6617;
      }
      iVar12 = *(int *)(param_1 + 0x6814);
      iVar8 = iVar12;
      if (uVar10 < *(uint *)(param_1 + 0x6810)) goto LAB_1800b65f8;
      goto LAB_1800b660a;
    }
  }
  else {
    if (uVar10 < *(uint *)(param_1 + 0x6810)) {
      iVar8 = *(int *)(param_1 + 0x6814);
LAB_1800b65f8:
      FUN_1800b10d4(param_1,iVar8,uVar10,*(undefined4 *)(param_1 + 0x6810));
    }
LAB_1800b660a:
    *(int *)(param_1 + 0x6814) = iVar12;
  }
  *(uint *)(param_1 + 0x680c) = param_3;
LAB_1800b6617:
  *(uint *)(param_1 + 0x6810) = uVar13;
  MXCSR = uVar4;
  return;
}


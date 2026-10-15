/*
 * FUN_1800b36a0 at 1800b36a0
 * undefined FUN_1800b36a0(void)
 * Address ranges: 1800b36a0-1800b3883
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b36a0(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,uint param_5)

{
  longlong lVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  
  lVar1 = param_1 + (ulonglong)(param_3 << 2) * 4;
  uVar4 = param_5 & 0x3fffffff;
  uVar8 = uVar4 << 1;
  puVar9 = (undefined8 *)(lVar1 + 0x13e0);
  uVar14 = uVar8;
  puVar10 = param_4;
  uVar11 = uVar4;
  while (uVar11 != 0) {
    *puVar9 = *puVar10;
    uVar14 = uVar14 - 1;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
    uVar11 = uVar14;
  }
  param_5 = param_3 + param_5;
  puVar9 = (undefined8 *)(lVar1 + 0x71e0);
  while (uVar4 != 0) {
    *puVar9 = *param_4;
    uVar8 = uVar8 - 1;
    puVar9 = puVar9 + 1;
    param_4 = param_4 + 1;
    uVar4 = uVar8;
  }
  if (param_2 != 0) {
    psVar2 = (short *)(param_2 + 0x18);
    sVar5 = *psVar2;
    uVar13 = 0;
    while ((sVar5 != -1 && (uVar6 = psVar2[uVar13], uVar6 <= param_5))) {
      uVar7 = psVar2[(int)uVar13 + 1];
      if (param_3 <= uVar7) {
        uVar14 = param_3;
        if (param_3 <= uVar6) {
          uVar14 = (uint)uVar6;
        }
        uVar8 = (uint)uVar7;
        if (param_5 <= uVar7) {
          uVar8 = param_5;
        }
        uVar4 = uVar8 - uVar14 & 0x3fffffff;
        uVar8 = uVar4 << 1;
        puVar9 = (undefined8 *)
                 (*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 << 2) * 4 + 0x850);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)(uVar14 << 2) * 4 + 0x71e0);
        while (uVar4 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar4 = uVar8;
        }
      }
      uVar13 = (ulonglong)((int)uVar13 + 2);
      sVar5 = psVar2[uVar13];
    }
  }
  if ((*(char *)(param_1 + 0x21) == '\0') ||
     ((param_2 != 0 && (*(char *)(*(longlong *)(param_2 + 0x10) + 0x44e) != '\0')))) {
    iVar15 = 1;
  }
  else {
    iVar15 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x6814);
  uVar8 = *(uint *)(param_1 + 0x680c);
  uVar4 = *(uint *)(param_1 + 0x6810);
  uVar14 = param_3;
  if (iVar15 == iVar3) {
    if (uVar8 < uVar4) {
      if (uVar4 < param_3 || param_5 < uVar8) {
        lVar1 = param_1 + (ulonglong)(uVar8 << 2) * 4;
        lVar12 = lVar1 + 0x71e0;
        if (iVar3 != 1) {
          lVar12 = lVar1 + 0x13e0;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x128))
                  (*(longlong **)(param_1 + 0x28),uVar8,uVar4,lVar12);
        *(int *)(param_1 + 0x6814) = iVar3;
      }
      else {
        uVar14 = uVar8;
        if (param_3 <= uVar8) {
          uVar14 = param_3;
        }
        if (param_5 < uVar4) {
          param_5 = uVar4;
        }
      }
    }
  }
  else {
    if (uVar8 < uVar4) {
      lVar1 = param_1 + (ulonglong)(uVar8 << 2) * 4;
      lVar12 = lVar1 + 0x71e0;
      if (iVar3 != 1) {
        lVar12 = lVar1 + 0x13e0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x128))
                (*(longlong **)(param_1 + 0x28),uVar8,uVar4,lVar12);
    }
    *(int *)(param_1 + 0x6814) = iVar15;
  }
  *(uint *)(param_1 + 0x680c) = uVar14;
  *(uint *)(param_1 + 0x6810) = param_5;
  return;
}


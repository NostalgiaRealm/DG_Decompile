/*
 * FUN_180043ba0 at 180043ba0
 * undefined __fastcall FUN_180043ba0(longlong param_1, ulonglong param_2)
 * Address ranges: 180043ba0-180043d96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043ba0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  byte *pbVar19;
  char *pcVar20;
  
  if (param_2 == 0) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 0xfa10);
  if (uVar8 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xfa08);
    uVar16 = 0;
    uVar18 = uVar8;
    do {
      uVar6 = uVar18 + uVar16 >> 1;
      uVar9 = *(ulonglong *)(lVar4 + (ulonglong)uVar6 * 0x18);
      uVar7 = uVar6;
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar16 = uVar6 + 1;
        uVar7 = uVar18;
        uVar6 = uVar16;
      }
      uVar18 = uVar7;
    } while (uVar18 != uVar16);
    if ((uVar6 != uVar8) &&
       (uVar9 = (ulonglong)uVar6, *(ulonglong *)(lVar4 + uVar9 * 0x18) == param_2)) {
      pcVar12 = (char *)(lVar4 + 0x12 + uVar9 * 0x18);
      pcVar20 = (char *)(lVar4 + 0x10 + uVar9 * 0x18);
      pcVar17 = (char *)(lVar4 + 0x11 + uVar9 * 0x18);
      pbVar19 = (byte *)(lVar4 + 0x17 + uVar9 * 0x18);
      pcVar15 = (char *)(lVar4 + 0x16 + uVar9 * 0x18);
      pcVar11 = (char *)(lVar4 + 0x13 + uVar9 * 0x18);
      pcVar13 = (char *)(lVar4 + 0x14 + uVar9 * 0x18);
      pcVar14 = (char *)(lVar4 + 0x15 + uVar9 * 0x18);
      goto LAB_180043c93;
    }
  }
  pcVar20 = (char *)0x0;
  pcVar15 = &DAT_00000006;
  pcVar12 = (char *)0x2;
  pcVar11 = (char *)0x3;
  pcVar17 = (char *)0x1;
  pbVar19 = &DAT_00000007;
  pcVar13 = &DAT_00000004;
  pcVar14 = (char *)0x5;
LAB_180043c93:
  cVar10 = *pcVar17 + -1;
  *pbVar19 = *pbVar19 | *pcVar17 == '\x01';
  cVar3 = *pcVar20;
  *pcVar17 = cVar10;
  if ((cVar3 == '\0') && (*pcVar12 == '\0')) {
    if (*pcVar15 == '\0') {
      if (*pcVar11 != '\0') {
        return;
      }
      if (*pcVar13 != '\0') {
        return;
      }
      cVar3 = *pcVar14;
    }
    else {
      cVar3 = *pcVar11;
    }
    if ((cVar10 == '\0' && cVar3 == '\0') && (uVar8 = *(uint *)(param_1 + 0xfa10), uVar8 != 0)) {
      uVar16 = 0;
      uVar18 = uVar8;
      do {
        uVar7 = uVar18 + uVar16 >> 1;
        uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar7 * 0x18);
        uVar6 = uVar7;
        if (uVar9 <= param_2) {
          if (param_2 <= uVar9) break;
          uVar16 = uVar7 + 1;
          uVar6 = uVar18;
          uVar7 = uVar16;
        }
        uVar18 = uVar6;
      } while (uVar18 != uVar16);
      if ((uVar7 != uVar8) &&
         (*(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar7 * 0x18) == param_2)) {
        uVar7 = uVar7 + 1;
        if (uVar7 < uVar8) {
          do {
            uVar9 = (ulonglong)uVar7;
            lVar4 = *(longlong *)(param_1 + 0xfa08);
            uVar8 = uVar7 - 1;
            uVar7 = uVar7 + 1;
            puVar1 = (undefined8 *)(lVar4 + uVar9 * 0x18);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(lVar4 + (ulonglong)uVar8 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar8 * 0x18) =
                 *(undefined8 *)(lVar4 + 0x10 + uVar9 * 0x18);
          } while (uVar7 < *(uint *)(param_1 + 0xfa10));
        }
        *(int *)(param_1 + 0xfa10) = *(int *)(param_1 + 0xfa10) + -1;
      }
    }
  }
  return;
}


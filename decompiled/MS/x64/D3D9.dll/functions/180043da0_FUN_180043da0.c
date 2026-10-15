/*
 * FUN_180043da0 at 180043da0
 * undefined __fastcall FUN_180043da0(longlong param_1, ulonglong param_2, char param_3)
 * Address ranges: 180043da0-180043fb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043da0(longlong param_1,ulonglong param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char cVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  undefined1 *puVar20;
  
  uVar8 = *(uint *)(param_1 + 0xfa10);
  if (uVar8 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xfa08);
    uVar16 = 0;
    uVar18 = uVar8;
    do {
      uVar6 = uVar18 + uVar16 >> 1;
      uVar9 = *(ulonglong *)(lVar3 + (ulonglong)uVar6 * 0x18);
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
       (uVar9 = (ulonglong)uVar6, *(ulonglong *)(lVar3 + uVar9 * 0x18) == param_2)) {
      pcVar12 = (char *)(lVar3 + 0x10 + uVar9 * 0x18);
      pcVar19 = (char *)(lVar3 + 0x12 + uVar9 * 0x18);
      pcVar11 = (char *)(lVar3 + 0x13 + uVar9 * 0x18);
      pcVar14 = (char *)(lVar3 + 0x16 + uVar9 * 0x18);
      pcVar17 = (char *)(lVar3 + 0x14 + uVar9 * 0x18);
      pcVar15 = (char *)(lVar3 + 0x15 + uVar9 * 0x18);
      puVar20 = (undefined1 *)(lVar3 + 0x17 + uVar9 * 0x18);
      pcVar10 = (char *)(uVar9 * 0x18 + 0x11 + lVar3);
      goto LAB_180043e88;
    }
  }
  pcVar12 = (char *)0x0;
  pcVar11 = (char *)0x3;
  pcVar14 = &DAT_00000006;
  pcVar10 = (char *)0x1;
  pcVar19 = (char *)0x2;
  pcVar17 = &DAT_00000004;
  pcVar15 = (char *)0x5;
  puVar20 = &DAT_00000007;
LAB_180043e88:
  cVar5 = *pcVar19;
  cVar13 = param_3 + '\x01';
  if (cVar5 == cVar13) {
    *pcVar19 = '\0';
    cVar5 = '\0';
  }
  else if (*pcVar11 == cVar13) {
    *pcVar11 = '\0';
  }
  else if (*pcVar17 == cVar13) {
    *pcVar17 = '\0';
  }
  else if (*pcVar15 == cVar13) {
    *pcVar15 = '\0';
  }
  cVar13 = *pcVar12;
  *puVar20 = 1;
  if (cVar5 == '\0' && cVar13 == '\0') {
    if (*pcVar14 == '\0') {
      if (*pcVar11 != '\0') {
        return;
      }
      if (*pcVar17 != '\0') {
        return;
      }
      cVar5 = *pcVar15;
    }
    else {
      cVar5 = *pcVar11;
    }
    if (((cVar5 == '\0') && (*pcVar10 == '\0')) && (uVar8 = *(uint *)(param_1 + 0xfa10), uVar8 != 0)
       ) {
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
            lVar3 = *(longlong *)(param_1 + 0xfa08);
            uVar8 = uVar7 - 1;
            uVar7 = uVar7 + 1;
            puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x18);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar3 + (ulonglong)uVar8 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar8 * 0x18) =
                 *(undefined8 *)(lVar3 + 0x10 + uVar9 * 0x18);
          } while (uVar7 < *(uint *)(param_1 + 0xfa10));
        }
        *(int *)(param_1 + 0xfa10) = *(int *)(param_1 + 0xfa10) + -1;
      }
    }
  }
  return;
}


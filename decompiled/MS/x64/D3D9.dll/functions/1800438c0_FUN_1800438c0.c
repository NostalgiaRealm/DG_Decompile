/*
 * FUN_1800438c0 at 1800438c0
 * undefined __fastcall FUN_1800438c0(longlong param_1, ulonglong param_2)
 * Address ranges: 1800438c0-180043aba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800438c0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  
  if (param_2 == 0) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0xfa10);
  if (uVar7 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xfa08);
    uVar10 = 0;
    uVar17 = uVar7;
    do {
      uVar5 = uVar17 + uVar10 >> 1;
      uVar8 = *(ulonglong *)(lVar3 + (ulonglong)uVar5 * 0x18);
      uVar6 = uVar5;
      if (uVar8 <= param_2) {
        if (param_2 <= uVar8) break;
        uVar10 = uVar5 + 1;
        uVar6 = uVar17;
        uVar5 = uVar10;
      }
      uVar17 = uVar6;
    } while (uVar17 != uVar10);
    if ((uVar5 != uVar7) &&
       (uVar8 = (ulonglong)uVar5, *(ulonglong *)(lVar3 + uVar8 * 0x18) == param_2)) {
      pbVar12 = (byte *)(lVar3 + 0x17 + uVar8 * 0x18);
      pcVar18 = (char *)(lVar3 + 0x10 + uVar8 * 0x18);
      pcVar14 = (char *)(lVar3 + 0x16 + uVar8 * 0x18);
      pcVar15 = (char *)(lVar3 + 0x12 + uVar8 * 0x18);
      pcVar16 = (char *)(lVar3 + 0x13 + uVar8 * 0x18);
      pcVar11 = (char *)(lVar3 + 0x11 + uVar8 * 0x18);
      pcVar19 = (char *)(lVar3 + 0x14 + uVar8 * 0x18);
      pcVar13 = (char *)(lVar3 + 0x15 + uVar8 * 0x18);
      goto LAB_1800439b3;
    }
  }
  pcVar18 = (char *)0x0;
  pbVar12 = &DAT_00000007;
  pcVar14 = &DAT_00000006;
  pcVar15 = (char *)0x2;
  pcVar11 = (char *)0x1;
  pcVar13 = (char *)0x5;
  pcVar16 = (char *)0x3;
  pcVar19 = &DAT_00000004;
LAB_1800439b3:
  cVar9 = *pcVar18 + -1;
  *pbVar12 = *pbVar12 | *pcVar18 == '\x01';
  *pcVar18 = cVar9;
  if ((cVar9 == '\0') && (*pcVar15 == '\0')) {
    if (*pcVar14 == '\0') {
      if (*pcVar16 != '\0') {
        return;
      }
      if (*pcVar19 != '\0') {
        return;
      }
      cVar9 = *pcVar13;
    }
    else {
      cVar9 = *pcVar16;
    }
    if (((cVar9 == '\0') && (*pcVar11 == '\0')) && (uVar7 = *(uint *)(param_1 + 0xfa10), uVar7 != 0)
       ) {
      uVar10 = 0;
      uVar17 = uVar7;
      do {
        uVar6 = uVar17 + uVar10 >> 1;
        uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar6 * 0x18);
        uVar5 = uVar6;
        if (uVar8 <= param_2) {
          if (param_2 <= uVar8) break;
          uVar10 = uVar6 + 1;
          uVar5 = uVar17;
          uVar6 = uVar10;
        }
        uVar17 = uVar5;
      } while (uVar17 != uVar10);
      if ((uVar6 != uVar7) &&
         (*(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar6 * 0x18) == param_2)) {
        uVar6 = uVar6 + 1;
        if (uVar6 < uVar7) {
          do {
            uVar8 = (ulonglong)uVar6;
            lVar3 = *(longlong *)(param_1 + 0xfa08);
            uVar7 = uVar6 - 1;
            uVar6 = uVar6 + 1;
            puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x18);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar7 * 0x18) =
                 *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
          } while (uVar6 < *(uint *)(param_1 + 0xfa10));
        }
        *(int *)(param_1 + 0xfa10) = *(int *)(param_1 + 0xfa10) + -1;
      }
    }
  }
  return;
}


/*
 * FUN_1800440b0 at 1800440b0
 * undefined __fastcall FUN_1800440b0(longlong param_1, ulonglong param_2, char param_3)
 * Address ranges: 1800440b0-1800442a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800440b0(longlong param_1,ulonglong param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  undefined1 *puVar20;
  
  uVar9 = *(uint *)(param_1 + 0xfa10);
  if (uVar9 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xfa08);
    uVar16 = 0;
    uVar18 = uVar9;
    do {
      uVar7 = uVar18 + uVar16 >> 1;
      uVar10 = *(ulonglong *)(lVar4 + (ulonglong)uVar7 * 0x18);
      uVar8 = uVar7;
      if (uVar10 <= param_2) {
        if (param_2 <= uVar10) break;
        uVar16 = uVar7 + 1;
        uVar8 = uVar18;
        uVar7 = uVar16;
      }
      uVar18 = uVar8;
    } while (uVar18 != uVar16);
    if ((uVar7 != uVar9) &&
       (uVar10 = (ulonglong)uVar7, *(ulonglong *)(lVar4 + uVar10 * 0x18) == param_2)) {
      pcVar13 = (char *)(lVar4 + 0x10 + uVar10 * 0x18);
      pcVar17 = (char *)(lVar4 + 0x12 + uVar10 * 0x18);
      pcVar12 = (char *)(lVar4 + 0x13 + uVar10 * 0x18);
      pcVar14 = (char *)(lVar4 + 0x14 + uVar10 * 0x18);
      puVar20 = (undefined1 *)(lVar4 + 0x17 + uVar10 * 0x18);
      pcVar19 = (char *)(lVar4 + 0x16 + uVar10 * 0x18);
      pcVar15 = (char *)(lVar4 + 0x11 + uVar10 * 0x18);
      pcVar11 = (char *)(uVar10 * 0x18 + 0x15 + lVar4);
      goto LAB_180044196;
    }
  }
  pcVar13 = (char *)0x0;
  pcVar12 = (char *)0x3;
  pcVar14 = &DAT_00000004;
  pcVar11 = (char *)0x5;
  pcVar17 = (char *)0x2;
  puVar20 = &DAT_00000007;
  pcVar19 = &DAT_00000006;
  pcVar15 = (char *)0x1;
LAB_180044196:
  cVar6 = *pcVar17;
  if (cVar6 == (char)(param_3 + '\x01')) {
    *pcVar17 = '\0';
    cVar6 = '\0';
  }
  else if (*pcVar12 == (char)(param_3 + '\x01')) {
    *pcVar12 = '\0';
  }
  cVar3 = *pcVar13;
  *puVar20 = 1;
  if (cVar6 == '\0' && cVar3 == '\0') {
    if (*pcVar19 == '\0') {
      if (*pcVar12 != '\0') {
        return;
      }
      if (*pcVar14 != '\0') {
        return;
      }
      cVar6 = *pcVar11;
    }
    else {
      cVar6 = *pcVar12;
    }
    if (((cVar6 == '\0') && (*pcVar15 == '\0')) && (uVar9 = *(uint *)(param_1 + 0xfa10), uVar9 != 0)
       ) {
      uVar16 = 0;
      uVar18 = uVar9;
      do {
        uVar8 = uVar18 + uVar16 >> 1;
        uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar8 * 0x18);
        uVar7 = uVar8;
        if (uVar10 <= param_2) {
          if (param_2 <= uVar10) break;
          uVar16 = uVar8 + 1;
          uVar7 = uVar18;
          uVar8 = uVar16;
        }
        uVar18 = uVar7;
      } while (uVar18 != uVar16);
      if ((uVar8 != uVar9) &&
         (*(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar8 * 0x18) == param_2)) {
        uVar8 = uVar8 + 1;
        if (uVar8 < uVar9) {
          do {
            uVar10 = (ulonglong)uVar8;
            lVar4 = *(longlong *)(param_1 + 0xfa08);
            uVar9 = uVar8 - 1;
            uVar8 = uVar8 + 1;
            puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x18);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(lVar4 + (ulonglong)uVar9 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            *(undefined8 *)(lVar4 + 0x10 + (ulonglong)uVar9 * 0x18) =
                 *(undefined8 *)(lVar4 + 0x10 + uVar10 * 0x18);
          } while (uVar8 < *(uint *)(param_1 + 0xfa10));
        }
        *(int *)(param_1 + 0xfa10) = *(int *)(param_1 + 0xfa10) + -1;
      }
    }
  }
  return;
}


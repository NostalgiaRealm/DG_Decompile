/*
 * FUN_1801476a0 at 1801476a0
 * undefined FUN_1801476a0(void)
 * Address ranges: 1801476a0-180147813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801476a0(longlong param_1,ulonglong param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong *puVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  char cVar8;
  ulonglong *puVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  ulonglong local_10 [2];
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 == 0) {
LAB_180147740:
    puVar4 = (ulonglong *)0x0;
    pcVar5 = (char *)0x2;
    pcVar17 = (char *)0x3;
    pcVar16 = &DAT_00000004;
    pcVar15 = (char *)0x5;
    puVar7 = &DAT_00000007;
    pcVar13 = &DAT_00000006;
    pcVar11 = (char *)0x1;
  }
  else {
    uVar12 = 0;
    uVar10 = uVar1;
    do {
      uVar14 = uVar10 + uVar12 >> 1;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar14 * 0x18);
      uVar3 = uVar14;
      if (uVar6 <= param_2) {
        if (param_2 <= uVar6) break;
        uVar12 = uVar14 + 1;
        uVar14 = uVar14 + 1;
        uVar3 = uVar10;
      }
      uVar10 = uVar3;
    } while (uVar10 != uVar12);
    if ((uVar14 == uVar1) ||
       (puVar9 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar14 * 0x18),
       *puVar9 != param_2)) goto LAB_180147740;
    puVar4 = puVar9 + 2;
    pcVar5 = (char *)((longlong)puVar9 + 0x12);
    pcVar17 = (char *)((longlong)puVar9 + 0x13);
    pcVar16 = (char *)((longlong)puVar9 + 0x14);
    pcVar15 = (char *)((longlong)puVar9 + 0x15);
    puVar7 = (undefined1 *)((longlong)puVar9 + 0x17);
    pcVar13 = (char *)((longlong)puVar9 + 0x16);
    pcVar11 = (char *)((longlong)puVar9 + 0x11);
  }
  cVar8 = *pcVar5;
  param_3 = param_3 + '\x01';
  if (cVar8 == param_3) {
    *pcVar5 = '\0';
    cVar8 = '\0';
  }
  else if (*pcVar17 == param_3) {
    *pcVar17 = '\0';
  }
  else if (*pcVar16 == param_3) {
    *pcVar16 = '\0';
  }
  else if (*pcVar15 == param_3) {
    *pcVar15 = '\0';
  }
  *puVar7 = 1;
  if ((char)*puVar4 == '\0' && cVar8 == '\0') {
    cVar8 = *pcVar17;
    if (*pcVar13 == '\0') {
      if ((cVar8 != '\0') || (*pcVar16 != '\0')) goto LAB_1801477f4;
      cVar8 = *pcVar15;
    }
    if ((cVar8 == '\0') && (*pcVar11 == '\0')) {
      bVar2 = true;
      goto LAB_1801477f8;
    }
  }
LAB_1801477f4:
  bVar2 = false;
LAB_1801477f8:
  if (bVar2) {
    local_10[0] = param_2;
    FUN_180150960(param_1 + 64000,local_10);
  }
  return;
}


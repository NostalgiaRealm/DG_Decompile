/*
 * FUN_180039220 at 180039220
 * undefined FUN_180039220(void)
 * Address ranges: 180039220-180039393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039220(longlong param_1,ulonglong param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 *puVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong local_10 [2];
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 == 0) {
LAB_1800392c0:
    puVar17 = (ulonglong *)0x0;
    pcVar4 = (char *)0x2;
    pcVar5 = (char *)0x3;
    pcVar15 = &DAT_00000004;
    pcVar14 = (char *)0x5;
    puVar13 = &DAT_00000007;
    pcVar12 = &DAT_00000006;
    pcVar10 = (char *)0x1;
  }
  else {
    uVar8 = 0;
    uVar7 = uVar1;
    do {
      uVar11 = uVar7 + uVar8 >> 1;
      uVar16 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar11 * 0x18);
      uVar3 = uVar11;
      if (uVar16 <= param_2) {
        if (param_2 <= uVar16) break;
        uVar8 = uVar11 + 1;
        uVar11 = uVar11 + 1;
        uVar3 = uVar7;
      }
      uVar7 = uVar3;
    } while (uVar7 != uVar8);
    if ((uVar11 == uVar1) ||
       (puVar9 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar11 * 0x18),
       *puVar9 != param_2)) goto LAB_1800392c0;
    puVar17 = puVar9 + 2;
    pcVar4 = (char *)((longlong)puVar9 + 0x12);
    pcVar5 = (char *)((longlong)puVar9 + 0x13);
    pcVar15 = (char *)((longlong)puVar9 + 0x14);
    pcVar14 = (char *)((longlong)puVar9 + 0x15);
    puVar13 = (undefined1 *)((longlong)puVar9 + 0x17);
    pcVar12 = (char *)((longlong)puVar9 + 0x16);
    pcVar10 = (char *)((longlong)puVar9 + 0x11);
  }
  cVar6 = *pcVar4;
  param_3 = param_3 + '\x01';
  if (cVar6 == param_3) {
    *pcVar4 = '\0';
    cVar6 = '\0';
  }
  else if (*pcVar5 == param_3) {
    *pcVar5 = '\0';
  }
  else if (*pcVar15 == param_3) {
    *pcVar15 = '\0';
  }
  else if (*pcVar14 == param_3) {
    *pcVar14 = '\0';
  }
  *puVar13 = 1;
  if ((char)*puVar17 == '\0' && cVar6 == '\0') {
    cVar6 = *pcVar5;
    if (*pcVar12 == '\0') {
      if ((cVar6 != '\0') || (*pcVar15 != '\0')) goto LAB_180039374;
      cVar6 = *pcVar14;
    }
    if ((cVar6 == '\0') && (*pcVar10 == '\0')) {
      bVar2 = true;
      goto LAB_180039378;
    }
  }
LAB_180039374:
  bVar2 = false;
LAB_180039378:
  if (bVar2) {
    local_10[0] = param_2;
    FUN_180041ad0(param_1 + 64000,local_10);
  }
  return;
}


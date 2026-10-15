/*
 * FUN_1800390d0 at 1800390d0
 * undefined FUN_1800390d0(void)
 * Address ranges: 1800390d0-18003921f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800390d0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char cVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  ulonglong *puVar19;
  ulonglong local_10 [2];
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xfa10);
  if (uVar2 == 0) {
LAB_180039170:
    puVar19 = (ulonglong *)0x0;
    pcVar9 = (char *)0x1;
    pbVar7 = &DAT_00000007;
    pcVar6 = &DAT_00000006;
    pcVar18 = (char *)0x2;
    pcVar17 = (char *)0x3;
    pcVar15 = &DAT_00000004;
    pcVar13 = (char *)0x5;
  }
  else {
    uVar16 = 0;
    uVar14 = uVar2;
    do {
      uVar12 = uVar14 + uVar16 >> 1;
      uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar12 * 0x18);
      uVar5 = uVar12;
      if (uVar10 <= param_2) {
        if (param_2 <= uVar10) break;
        uVar16 = uVar12 + 1;
        uVar12 = uVar12 + 1;
        uVar5 = uVar14;
      }
      uVar14 = uVar5;
    } while (uVar14 != uVar16);
    if ((uVar12 == uVar2) ||
       (puVar11 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar12 * 0x18),
       *puVar11 != param_2)) goto LAB_180039170;
    puVar19 = puVar11 + 2;
    pcVar9 = (char *)((longlong)puVar11 + 0x11);
    pbVar7 = (byte *)((longlong)puVar11 + 0x17);
    pcVar6 = (char *)((longlong)puVar11 + 0x16);
    pcVar18 = (char *)((longlong)puVar11 + 0x12);
    pcVar17 = (char *)((longlong)puVar11 + 0x13);
    pcVar15 = (char *)((longlong)puVar11 + 0x14);
    pcVar13 = (char *)((longlong)puVar11 + 0x15);
  }
  cVar1 = *pcVar9 + -1;
  bVar3 = *pbVar7;
  *pcVar9 = cVar1;
  uVar10 = *puVar19;
  *pbVar7 = cVar1 == '\0' | bVar3;
  if ((char)uVar10 == '\0') {
    if (*pcVar6 == '\0') {
      if (((*pcVar18 == '\0') && (*pcVar17 == '\0')) && (*pcVar15 == '\0')) {
        cVar8 = *pcVar13;
        goto LAB_1800391ec;
      }
    }
    else if (*pcVar18 == '\0') {
      cVar8 = *pcVar17;
LAB_1800391ec:
      if (cVar8 == '\0' && cVar1 == '\0') {
        bVar4 = true;
        goto LAB_180039204;
      }
    }
  }
  bVar4 = false;
LAB_180039204:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_180041ad0(param_1 + 64000,local_10);
  }
  return;
}


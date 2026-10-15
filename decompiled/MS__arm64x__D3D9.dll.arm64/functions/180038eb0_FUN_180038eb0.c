/*
 * FUN_180038eb0 at 180038eb0
 * undefined FUN_180038eb0(void)
 * Address ranges: 180038eb0-180038fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038eb0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  ulonglong local_10 [2];
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 == 0) {
LAB_180038f50:
    puVar8 = (ulonglong *)0x0;
    pbVar18 = &DAT_00000007;
    pcVar7 = &DAT_00000006;
    pcVar6 = (char *)0x2;
    pcVar17 = (char *)0x3;
    pcVar16 = (char *)0x1;
    pcVar14 = &DAT_00000004;
    pcVar12 = (char *)0x5;
  }
  else {
    uVar15 = 0;
    uVar13 = uVar1;
    do {
      uVar11 = uVar13 + uVar15 >> 1;
      uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar11 * 0x18);
      uVar5 = uVar11;
      if (uVar9 <= param_2) {
        if (param_2 <= uVar9) break;
        uVar15 = uVar11 + 1;
        uVar11 = uVar11 + 1;
        uVar5 = uVar13;
      }
      uVar13 = uVar5;
    } while (uVar13 != uVar15);
    if ((uVar11 == uVar1) ||
       (puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar11 * 0x18),
       *puVar10 != param_2)) goto LAB_180038f50;
    puVar8 = puVar10 + 2;
    pbVar18 = (byte *)((longlong)puVar10 + 0x17);
    pcVar7 = (char *)((longlong)puVar10 + 0x16);
    pcVar6 = (char *)((longlong)puVar10 + 0x12);
    pcVar17 = (char *)((longlong)puVar10 + 0x13);
    pcVar16 = (char *)((longlong)puVar10 + 0x11);
    pcVar14 = (char *)((longlong)puVar10 + 0x14);
    pcVar12 = (char *)((longlong)puVar10 + 0x15);
  }
  cVar3 = (char)*puVar8 + -1;
  bVar2 = *pbVar18;
  *(char *)puVar8 = cVar3;
  *pbVar18 = cVar3 == '\0' | bVar2;
  if (cVar3 == '\0') {
    if (*pcVar7 == '\0') {
      if (((*pcVar6 == '\0') && (*pcVar17 == '\0')) && (*pcVar14 == '\0')) {
        cVar3 = *pcVar12;
        goto LAB_180038fcc;
      }
    }
    else if (*pcVar6 == '\0') {
      cVar3 = *pcVar17;
LAB_180038fcc:
      if ((cVar3 == '\0') && (*pcVar16 == '\0')) {
        bVar4 = true;
        goto LAB_180038fe4;
      }
    }
  }
  bVar4 = false;
LAB_180038fe4:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_180041ad0(param_1 + 64000,local_10);
  }
  return;
}


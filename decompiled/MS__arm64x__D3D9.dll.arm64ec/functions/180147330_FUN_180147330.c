/*
 * FUN_180147330 at 180147330
 * undefined FUN_180147330(void)
 * Address ranges: 180147330-18014747f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180147330(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  ulonglong local_10 [2];
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 == 0) {
LAB_1801473d0:
    puVar14 = (ulonglong *)0x0;
    pbVar9 = &DAT_00000007;
    pcVar7 = &DAT_00000006;
    pcVar6 = (char *)0x2;
    pcVar10 = (char *)0x3;
    pcVar11 = (char *)0x1;
    pcVar18 = &DAT_00000004;
    pcVar17 = (char *)0x5;
  }
  else {
    uVar16 = 0;
    uVar15 = uVar1;
    do {
      uVar8 = uVar15 + uVar16 >> 1;
      uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar8 * 0x18);
      uVar5 = uVar8;
      if (uVar13 <= param_2) {
        if (param_2 <= uVar13) break;
        uVar16 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
    } while (uVar15 != uVar16);
    if ((uVar8 == uVar1) ||
       (puVar12 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar8 * 0x18),
       *puVar12 != param_2)) goto LAB_1801473d0;
    puVar14 = puVar12 + 2;
    pbVar9 = (byte *)((longlong)puVar12 + 0x17);
    pcVar7 = (char *)((longlong)puVar12 + 0x16);
    pcVar6 = (char *)((longlong)puVar12 + 0x12);
    pcVar10 = (char *)((longlong)puVar12 + 0x13);
    pcVar11 = (char *)((longlong)puVar12 + 0x11);
    pcVar18 = (char *)((longlong)puVar12 + 0x14);
    pcVar17 = (char *)((longlong)puVar12 + 0x15);
  }
  cVar3 = (char)*puVar14 + -1;
  bVar2 = *pbVar9;
  *(char *)puVar14 = cVar3;
  *pbVar9 = cVar3 == '\0' | bVar2;
  if (cVar3 == '\0') {
    if (*pcVar7 == '\0') {
      if (((*pcVar6 == '\0') && (*pcVar10 == '\0')) && (*pcVar18 == '\0')) {
        cVar3 = *pcVar17;
        goto LAB_18014744c;
      }
    }
    else if (*pcVar6 == '\0') {
      cVar3 = *pcVar10;
LAB_18014744c:
      if ((cVar3 == '\0') && (*pcVar11 == '\0')) {
        bVar4 = true;
        goto LAB_180147464;
      }
    }
  }
  bVar4 = false;
LAB_180147464:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_180150960(param_1 + 64000,local_10);
  }
  return;
}


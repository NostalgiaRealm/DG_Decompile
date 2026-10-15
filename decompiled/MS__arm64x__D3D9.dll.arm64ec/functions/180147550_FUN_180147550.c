/*
 * FUN_180147550 at 180147550
 * undefined FUN_180147550(void)
 * Address ranges: 180147550-18014769f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180147550(longlong param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong *puVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  ulonglong local_10 [2];
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xfa10);
  if (uVar2 == 0) {
LAB_1801475f0:
    puVar9 = (ulonglong *)0x0;
    pcVar12 = (char *)0x1;
    pbVar7 = &DAT_00000007;
    pcVar6 = &DAT_00000006;
    pcVar10 = (char *)0x2;
    pcVar19 = (char *)0x3;
    pcVar18 = &DAT_00000004;
    pcVar16 = (char *)0x5;
  }
  else {
    uVar17 = 0;
    uVar15 = uVar2;
    do {
      uVar8 = uVar15 + uVar17 >> 1;
      uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar8 * 0x18);
      uVar5 = uVar8;
      if (uVar13 <= param_2) {
        if (param_2 <= uVar13) break;
        uVar17 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
    } while (uVar15 != uVar17);
    if ((uVar8 == uVar2) ||
       (puVar14 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar8 * 0x18),
       *puVar14 != param_2)) goto LAB_1801475f0;
    puVar9 = puVar14 + 2;
    pcVar12 = (char *)((longlong)puVar14 + 0x11);
    pbVar7 = (byte *)((longlong)puVar14 + 0x17);
    pcVar6 = (char *)((longlong)puVar14 + 0x16);
    pcVar10 = (char *)((longlong)puVar14 + 0x12);
    pcVar19 = (char *)((longlong)puVar14 + 0x13);
    pcVar18 = (char *)((longlong)puVar14 + 0x14);
    pcVar16 = (char *)((longlong)puVar14 + 0x15);
  }
  cVar1 = *pcVar12 + -1;
  bVar3 = *pbVar7;
  *pcVar12 = cVar1;
  uVar13 = *puVar9;
  *pbVar7 = cVar1 == '\0' | bVar3;
  if ((char)uVar13 == '\0') {
    if (*pcVar6 == '\0') {
      if (((*pcVar10 == '\0') && (*pcVar19 == '\0')) && (*pcVar18 == '\0')) {
        cVar11 = *pcVar16;
        goto LAB_18014766c;
      }
    }
    else if (*pcVar10 == '\0') {
      cVar11 = *pcVar19;
LAB_18014766c:
      if (cVar11 == '\0' && cVar1 == '\0') {
        bVar4 = true;
        goto LAB_180147684;
      }
    }
  }
  bVar4 = false;
LAB_180147684:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_180150960(param_1 + 64000,local_10);
  }
  return;
}


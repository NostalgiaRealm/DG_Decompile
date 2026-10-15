/*
 * FUN_180039490 at 180039490
 * undefined FUN_180039490(void)
 * Address ranges: 180039490-1800395db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039490(longlong param_1,ulonglong param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  char *pcVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong local_10 [2];
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 == 0) {
LAB_180039530:
    puVar4 = (ulonglong *)0x0;
    pcVar6 = (char *)0x2;
    pcVar16 = (char *)0x3;
    puVar5 = &DAT_00000007;
    pcVar15 = &DAT_00000006;
    pcVar14 = (char *)0x1;
    pcVar13 = &DAT_00000004;
    pcVar11 = (char *)0x5;
  }
  else {
    uVar9 = 0;
    uVar8 = uVar1;
    do {
      uVar12 = uVar8 + uVar9 >> 1;
      uVar17 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar12 * 0x18);
      uVar3 = uVar12;
      if (uVar17 <= param_2) {
        if (param_2 <= uVar17) break;
        uVar9 = uVar12 + 1;
        uVar12 = uVar12 + 1;
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar9);
    if ((uVar12 == uVar1) ||
       (puVar10 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar12 * 0x18),
       *puVar10 != param_2)) goto LAB_180039530;
    puVar4 = puVar10 + 2;
    pcVar6 = (char *)((longlong)puVar10 + 0x12);
    pcVar16 = (char *)((longlong)puVar10 + 0x13);
    puVar5 = (undefined1 *)((longlong)puVar10 + 0x17);
    pcVar15 = (char *)((longlong)puVar10 + 0x16);
    pcVar14 = (char *)((longlong)puVar10 + 0x11);
    pcVar13 = (char *)((longlong)puVar10 + 0x14);
    pcVar11 = (char *)((longlong)puVar10 + 0x15);
  }
  cVar7 = *pcVar6;
  if (cVar7 == (char)(param_3 + '\x01')) {
    *pcVar6 = '\0';
    cVar7 = '\0';
  }
  else if (*pcVar16 == (char)(param_3 + '\x01')) {
    *pcVar16 = '\0';
  }
  *puVar5 = 1;
  if ((char)*puVar4 == '\0' && cVar7 == '\0') {
    cVar7 = *pcVar16;
    if (*pcVar15 == '\0') {
      if ((cVar7 != '\0') || (*pcVar13 != '\0')) goto LAB_1800395bc;
      cVar7 = *pcVar11;
    }
    if ((cVar7 == '\0') && (*pcVar14 == '\0')) {
      bVar2 = true;
      goto LAB_1800395c0;
    }
  }
LAB_1800395bc:
  bVar2 = false;
LAB_1800395c0:
  if (bVar2) {
    local_10[0] = param_2;
    FUN_180041ad0(param_1 + 64000,local_10);
  }
  return;
}


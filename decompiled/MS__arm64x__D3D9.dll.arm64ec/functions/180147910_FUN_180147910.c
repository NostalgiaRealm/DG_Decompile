/*
 * FUN_180147910 at 180147910
 * undefined FUN_180147910(void)
 * Address ranges: 180147910-180147a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180147910(longlong param_1,ulonglong param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  ulonglong local_10 [2];
  
  uVar1 = *(uint *)(param_1 + 0xfa10);
  if (uVar1 == 0) {
LAB_1801479b0:
    puVar7 = (ulonglong *)0x0;
    pcVar4 = (char *)0x2;
    pcVar5 = (char *)0x3;
    puVar8 = &DAT_00000007;
    pcVar17 = &DAT_00000006;
    pcVar16 = (char *)0x1;
    pcVar15 = &DAT_00000004;
    pcVar13 = (char *)0x5;
  }
  else {
    uVar11 = 0;
    uVar10 = uVar1;
    do {
      uVar14 = uVar10 + uVar11 >> 1;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar14 * 0x18);
      uVar3 = uVar14;
      if (uVar6 <= param_2) {
        if (param_2 <= uVar6) break;
        uVar11 = uVar14 + 1;
        uVar14 = uVar14 + 1;
        uVar3 = uVar10;
      }
      uVar10 = uVar3;
    } while (uVar10 != uVar11);
    if ((uVar14 == uVar1) ||
       (puVar12 = (ulonglong *)(*(longlong *)(param_1 + 0xfa08) + (ulonglong)uVar14 * 0x18),
       *puVar12 != param_2)) goto LAB_1801479b0;
    puVar7 = puVar12 + 2;
    pcVar4 = (char *)((longlong)puVar12 + 0x12);
    pcVar5 = (char *)((longlong)puVar12 + 0x13);
    puVar8 = (undefined1 *)((longlong)puVar12 + 0x17);
    pcVar17 = (char *)((longlong)puVar12 + 0x16);
    pcVar16 = (char *)((longlong)puVar12 + 0x11);
    pcVar15 = (char *)((longlong)puVar12 + 0x14);
    pcVar13 = (char *)((longlong)puVar12 + 0x15);
  }
  cVar9 = *pcVar4;
  if (cVar9 == (char)(param_3 + '\x01')) {
    *pcVar4 = '\0';
    cVar9 = '\0';
  }
  else if (*pcVar5 == (char)(param_3 + '\x01')) {
    *pcVar5 = '\0';
  }
  *puVar8 = 1;
  if ((char)*puVar7 == '\0' && cVar9 == '\0') {
    cVar9 = *pcVar5;
    if (*pcVar17 == '\0') {
      if ((cVar9 != '\0') || (*pcVar15 != '\0')) goto LAB_180147a3c;
      cVar9 = *pcVar13;
    }
    if ((cVar9 == '\0') && (*pcVar16 == '\0')) {
      bVar2 = true;
      goto LAB_180147a40;
    }
  }
LAB_180147a3c:
  bVar2 = false;
LAB_180147a40:
  if (bVar2) {
    local_10[0] = param_2;
    FUN_180150960(param_1 + 64000,local_10);
  }
  return;
}


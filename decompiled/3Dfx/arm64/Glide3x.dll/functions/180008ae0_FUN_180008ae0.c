/*
 * FUN_180008ae0 at 180008ae0
 * undefined __cdecl FUN_180008ae0(longlong param_1, int param_2, byte param_3)
 * Address ranges: 180008ae0-180008cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180008ae0(longlong param_1,int param_2,byte param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint local_d0 [36];
  
  lVar1 = (longlong)param_2 * 0x55 + *(longlong *)(param_1 + 0x18);
  uVar11 = *(uint *)(lVar1 + 0x1e6);
  if (((((int)uVar11 < 9) && (iVar3 = *(int *)(lVar1 + 0x1e2), iVar3 < 9)) &&
      (uVar4 = *(uint *)(lVar1 + 0x1ee), uVar4 < 0x10)) &&
     (iVar5 = *(int *)(lVar1 + 0x1ea), iVar5 + 3U < 7)) {
    uVar10 = 8 - uVar11;
    local_d0[2] = 0;
    local_d0[3] = 0;
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_d0[6] = 0;
    local_d0[7] = 0;
    local_d0[4] = 0;
    local_d0[5] = 0;
    local_d0[10] = 0;
    local_d0[0xb] = 0;
    local_d0[8] = 0;
    local_d0[9] = 0;
    local_d0[0xe] = 0;
    local_d0[0xf] = 0;
    local_d0[0xc] = 0;
    local_d0[0xd] = 0;
    local_d0[0x12] = 0;
    local_d0[0x13] = 0;
    local_d0[0x10] = 0;
    local_d0[0x11] = 0;
    local_d0[0x16] = 0;
    local_d0[0x17] = 0;
    local_d0[0x14] = 0;
    local_d0[0x15] = 0;
    local_d0[0x1a] = 0;
    local_d0[0x1b] = 0;
    local_d0[0x18] = 0;
    local_d0[0x19] = 0;
    local_d0[0x1e] = 0;
    local_d0[0x1f] = 0;
    local_d0[0x1c] = 0;
    local_d0[0x1d] = 0;
    local_d0[0x22] = 0;
    local_d0[0x23] = 0;
    local_d0[0x20] = 0;
    local_d0[0x21] = 0;
    if (iVar3 <= (int)uVar11) {
      cVar7 = *(char *)(lVar1 + 499);
      bVar9 = (&DAT_1800668d3)[iVar5];
      cVar8 = *(char *)(lVar1 + 0x1f2);
      iVar12 = 0;
      iVar14 = -1;
      do {
        uVar13 = (ulonglong)uVar10;
        if (cVar7 == '\0') {
          uVar17 = 0;
        }
        else if (uVar11 < 6) {
          uVar17 = 3;
        }
        else if (uVar11 == 6) {
          uVar17 = 2;
        }
        else {
          uVar17 = (ulonglong)(uVar11 == 7);
        }
        iVar16 = *(int *)(lVar1 + 0x1d2 + uVar17 * 4);
        uVar15 = *(int *)((longlong)param_2 * 0x4e8 + 0x330 + *(longlong *)(param_1 + 0x18)) +
                 iVar16;
        if (iVar16 == iVar14) {
          uVar15 = uVar15 + iVar12;
        }
        else {
          iVar12 = 0;
          iVar14 = iVar16;
        }
        local_d0[uVar13 * 4] = uVar15;
        uVar6 = *(uint *)(&DAT_1800668d8 + (longlong)(int)uVar11 * 4);
        uVar15 = uVar6 >> (ulonglong)(bVar9 & 0x1f);
        if (uVar15 == 0) {
          uVar15 = 1;
        }
        uVar2 = uVar6;
        if (iVar5 < 0) {
          uVar2 = uVar15;
          uVar15 = uVar6;
        }
        uVar6 = (uVar15 | uVar2 << 0x10) >> 0x10;
        local_d0[uVar13 * 4 + 1] = uVar6;
        uVar6 = uVar6 * (byte)(&DAT_180066908)[(int)uVar4];
        local_d0[uVar13 * 4 + 3] = uVar6;
        local_d0[uVar13 * 4 + 2] = uVar15 & 0xffff;
        if ((cVar8 == '\x03') || ((uVar11 & 1) == (uint)(cVar8 != '\x01'))) {
          iVar16 = uVar6 * (uVar15 & 0xffff);
        }
        else {
          iVar16 = 0;
        }
        uVar11 = uVar11 - 1;
        iVar12 = iVar16 + iVar12;
        uVar10 = uVar10 + 1;
      } while (iVar3 <= (int)uVar11);
    }
    if ((param_3 & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x298))();
    }
  }
  return;
}


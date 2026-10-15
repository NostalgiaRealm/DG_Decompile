/*
 * FUN_10008f68 at 10008f68
 * undefined FUN_10008f68(void)
 * Address ranges: 10008f68-100091e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008f68(int param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  code *extraout_w11;
  undefined1 auVar19 [16];
  uint local_d0 [36];
  
  iVar1 = param_2 * 0x55 + *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(iVar1 + 0x1d6);
  if (((int)uVar3 < 9) && (iVar4 = *(int *)(iVar1 + 0x1d2), iVar4 < 9)) {
    uVar5 = *(uint *)(iVar1 + 0x1de);
    uVar11 = (ulonglong)uVar5;
    if ((uVar5 < 0x10) && (iVar6 = *(int *)(iVar1 + 0x1da), iVar6 + 3U < 7)) {
      uVar12 = (ulonglong)(8 - uVar3);
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
      if (iVar4 <= (int)uVar3) {
        cVar8 = *(char *)(iVar1 + 0x1e3);
        bVar9 = *(byte *)(iVar6 + 0x100997a3);
        cVar10 = *(char *)(iVar1 + 0x1e2);
        iVar15 = 0;
        iVar16 = -1;
        uVar14 = uVar12;
        do {
          if (cVar8 == '\0') {
            iVar17 = 0;
          }
          else {
            switch(uVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
              iVar17 = 3;
              break;
            case 6:
              iVar17 = 2;
              break;
            case 7:
              iVar17 = 1;
              break;
            default:
              iVar17 = 0;
            }
          }
          iVar17 = *(int *)(iVar1 + 0x1c2 + iVar17 * 4);
          iVar13 = (int)uVar14;
          uVar18 = *(int *)(*(int *)(param_1 + 0xc) + param_2 * 0x4e8 + 0x31c) + iVar17;
          if (iVar17 == iVar16) {
            uVar18 = uVar18 + iVar15;
          }
          else {
            iVar15 = 0;
            iVar16 = iVar17;
          }
          local_d0[iVar13 * 4] = uVar18;
          uVar7 = *(uint *)(&DAT_100997a8 + uVar3 * 4);
          uVar18 = uVar7 >> (ulonglong)(bVar9 & 0x1f);
          if (uVar18 == 0) {
            uVar18 = 1;
          }
          uVar2 = uVar18;
          if (iVar6 < 0) {
            uVar2 = uVar7;
            uVar7 = uVar18;
          }
          uVar18 = (uVar2 | uVar7 << 0x10) >> 0x10;
          local_d0[iVar13 * 4 + 1] = uVar18;
          uVar18 = *(byte *)(uVar5 + 0x100997d8) * uVar18;
          local_d0[iVar13 * 4 + 3] = uVar18;
          local_d0[iVar13 * 4 + 2] = uVar2 & 0xffff;
          if ((cVar10 == '\x03') || ((uVar3 & 1) == (uint)(cVar10 != '\x01'))) {
            iVar17 = uVar18 * (uVar2 & 0xffff);
          }
          else {
            iVar17 = 0;
          }
          uVar3 = uVar3 - 1;
          iVar15 = iVar17 + iVar15;
          uVar14 = (ulonglong)(iVar13 + 1);
        } while (iVar4 <= (int)uVar3);
      }
      if (param_3 != '\0') {
        auVar19 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(auVar19._0_8_ & 0xffffffff,auVar19._8_8_ & 0xffffffff,uVar11 & 0xffffffff,
                        uVar12 & 0xffffffff);
      }
    }
  }
  return;
}


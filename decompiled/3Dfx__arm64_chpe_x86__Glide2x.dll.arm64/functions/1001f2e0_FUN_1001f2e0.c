/*
 * FUN_1001f2e0 at 1001f2e0
 * undefined FUN_1001f2e0(void)
 * Address ranges: 1001f2e0-1001f5c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f2e0(uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ulonglong uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  ulonglong extraout_x1_00;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong extraout_x10;
  uint extraout_w11;
  code *extraout_w11_00;
  ulonglong extraout_x11;
  ulonglong extraout_x12;
  uint extraout_w13;
  uint uVar20;
  uint extraout_w14;
  ulonglong uVar21;
  ulonglong extraout_x14;
  ulonglong uVar22;
  ulonglong extraout_x15;
  undefined1 auVar23 [16];
  uint local_d0 [36];
  
  uVar15 = (ulonglong)param_1;
  iVar12 = param_2 * 0x41 + *(int *)(param_1 + 0xc);
  uVar8 = FUN_1001eee0(*(undefined4 *)(iVar12 + 0x184));
  uVar13 = uVar8 & 0xffffffff;
  if ((uint)uVar8 < 9) {
    auVar23 = FUN_1001eee0(*(undefined4 *)(iVar12 + 0x180));
    uVar9 = auVar23._8_8_;
    iVar17 = (int)uVar15;
    uVar8 = auVar23._0_8_ & 0xffffffff;
    if (auVar23._0_4_ < 9) {
      uVar18 = *(uint *)(iVar12 + 0x18c);
      uVar10 = (ulonglong)uVar18;
      if ((uVar18 < 0x10) && (uVar3 = *(uint *)(iVar12 + 0x188), uVar3 < 7)) {
        uVar14 = uVar13 & 0xffffffff;
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
        uVar21 = extraout_x11;
        uVar20 = extraout_w14;
        if ((int)auVar23._0_4_ <= (int)uVar13) {
          iVar11 = 8 - (int)uVar13;
          cVar4 = *(char *)(iVar12 + 400);
          cVar5 = *(char *)(iVar12 + 0x191);
          bVar6 = *(byte *)(uVar3 + 0x1009695c);
          uVar22 = (ulonglong)(uVar18 + 0x10096910);
          iVar16 = 0;
          uVar13 = 0xffffffff;
          piVar1 = (int *)(iVar17 + 0xc);
          uVar21 = (ulonglong)(iVar12 + 0x170);
          do {
            iVar12 = (int)uVar14;
            if (cVar5 == '\0') {
              iVar17 = 0;
            }
            else {
              switch((&DAT_10095778)[iVar12]) {
              case 1:
                iVar17 = 1;
                break;
              case 2:
                iVar17 = 2;
                break;
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
                iVar17 = 3;
                break;
              default:
                iVar17 = 0;
              }
            }
            uVar20 = *(uint *)((int)uVar21 + iVar17 * 4);
            uVar18 = *(int *)(*piVar1 + (int)uVar9 * 0x4e8 + 0x2a0) + uVar20;
            if (uVar20 == (uint)uVar13) {
              uVar18 = uVar18 + iVar16;
            }
            else {
              uVar13 = (ulonglong)uVar20;
              iVar16 = 0;
            }
            local_d0[iVar11 * 4] = uVar18;
            iVar17 = (&DAT_10095778)[iVar12];
            uVar20 = *(uint *)(&DAT_10096968 + iVar17 * 4);
            uVar18 = uVar20 >> (ulonglong)(bVar6 & 0x1f);
            if (uVar18 == 0) {
              uVar18 = 1;
            }
            uVar2 = uVar20;
            if (uVar3 - 4 < 3) {
              uVar2 = uVar18;
              uVar18 = uVar20;
            }
            uVar20 = (uVar18 | uVar2 << 0x10) >> 0x10;
            uVar18 = uVar18 & 0xffff;
            local_d0[iVar11 * 4 + 1] = uVar20;
            uVar20 = *(byte *)uVar22 * uVar20;
            local_d0[iVar11 * 4 + 3] = uVar20;
            local_d0[iVar11 * 4 + 2] = uVar18;
            if (cVar4 == '\x03') {
LAB_1001f528:
              iVar19 = uVar20 * uVar18;
            }
            else {
              bVar7 = FUN_1001eee0(iVar17);
              iVar19 = 0;
              uVar9 = extraout_x1;
              uVar13 = extraout_x12;
              uVar21 = extraout_x14;
              uVar22 = extraout_x15;
              uVar18 = extraout_w11;
              uVar20 = extraout_w13;
              if ((bool)(bVar7 & 1) == (cVar4 != '\x01')) goto LAB_1001f528;
            }
            iVar17 = (int)uVar15;
            uVar14 = (ulonglong)(iVar12 - 1U);
            iVar16 = iVar19 + iVar16;
            iVar11 = iVar11 + 1;
          } while ((int)uVar8 <= (int)(iVar12 - 1U));
          uVar20 = extraout_w14 & 0xff;
          uVar21 = extraout_x11 & 0xffffffff;
        }
        if (uVar20 != 0) {
          uVar8 = (ulonglong)*(uint *)(iVar17 + 0xc);
          FUN_1001eee0(uVar21 & 0xffffffff);
          FUN_1001eee0(extraout_x10 & 0xffffffff);
          (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11_00)(uVar8 & 0xffffffff,extraout_x1_00 & 0xffffffff,uVar10 & 0xffffffff);
        }
      }
    }
  }
  return;
}


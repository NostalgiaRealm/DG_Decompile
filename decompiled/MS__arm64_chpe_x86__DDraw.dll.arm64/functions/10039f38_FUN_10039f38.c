/*
 * FUN_10039f38 at 10039f38
 * undefined FUN_10039f38(void)
 * Address ranges: 10039f38-1003a39b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10039f38(int param_1,undefined4 param_2,uint param_3,ulonglong *param_4,undefined4 param_5,
            int param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  uVar6 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if ((int)uVar6 == 0) {
    uVar6 = FUN_10001c10(uVar6 & 0xffffffff);
  }
  uVar10 = 0x80070057;
  if (param_6 == 0) goto LAB_1003a360;
  uVar8 = param_3 & 7;
  if ((param_3 & 0x18) == 0x10) {
    if ((uVar8 != 1) && (((uVar8 - 2 & 0xfffffffd) != 0 || (param_4 == (ulonglong *)0x0))))
    goto LAB_1003a360;
    iVar3 = *(int *)(param_1 + 300);
    if (iVar3 != 0) {
      do {
        if (uVar8 == 2) {
          uVar6 = FUN_10038e88(uVar6,param_4,
                               *(int *)(*(int *)(param_1 + 0x128) + iVar3 * 4 + -4) + 0x150);
          if ((uVar6 & 1) != 0) {
LAB_1003a034:
            iVar4 = *(int *)(*(int *)(param_1 + 0x128) + iVar3 * 4 + -4);
            uVar6 = FUN_10051710(uVar6,param_2,iVar4,iVar4 + 0x150,param_6,param_5);
            if ((int)uVar6 == 0) break;
          }
        }
        else if ((uVar8 != 4) ||
                (uVar6 = FUN_10038e88(uVar6,param_4,
                                      *(int *)(*(int *)(param_1 + 0x128) + iVar3 * 4 + -4) + 0x150),
                (uVar6 & 1) == 0)) goto LAB_1003a034;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    if (((param_3 & 0x18) != 8 || uVar8 != 2) || (param_4 == (ulonglong *)0x0)) goto LAB_1003a360;
    uStack_118 = param_4[1];
    uVar6 = *param_4;
    uStack_108 = param_4[3];
    uStack_110 = param_4[2];
    local_b0 = param_4[0xe];
    uStack_f8 = param_4[5];
    local_100 = param_4[4];
    uStack_e8 = param_4[7];
    uStack_f0 = param_4[6];
    local_a8 = (undefined4)param_4[0xf];
    local_120._4_4_ = (uint)(uVar6 >> 0x20);
    uStack_d8 = param_4[9];
    local_e0 = param_4[8];
    uStack_c8 = param_4[0xb];
    uStack_d0 = param_4[10];
    uVar11 = param_4[0xd];
    local_c0 = param_4[0xc];
    bVar1 = false;
    uStack_b8 = uVar11;
    if (((uVar6 & 0x100000000) == 0) ||
       (uStack_b8._0_4_ = (uint)uVar11, ((uint)uStack_b8 >> 9 & 1) == 0)) {
      iVar3 = *(int *)(param_1 + 0x11c) * 0xa4;
      uVar8 = local_120._4_4_;
      if ((local_120._4_4_ >> 2 & 1) == 0) {
        uVar8 = local_120._4_4_ | 4;
        local_120 = uVar6 | 0x400000000;
        uStack_118 = CONCAT44(*(undefined4 *)(&DAT_100bbc6c + iVar3),(undefined4)uStack_118);
        uVar6 = local_120;
      }
      local_120 = uVar6;
      uVar9 = uVar8;
      if ((uVar8 >> 1 & 1) == 0) {
        uVar9 = uVar8 | 2;
        local_120 = CONCAT44(uVar8,(undefined4)local_120) | 0x200000000;
        uStack_118 = CONCAT44(uStack_118._4_4_,*(undefined4 *)(&DAT_100bbc68 + iVar3));
      }
      if ((uVar9 & 1) == 0) {
        uVar8 = 0x800;
        if (*(char *)(param_1 + 0x14c) == '\0') {
          uVar8 = 0x4000;
        }
        uVar9 = uVar8 | uVar9;
        local_120 = CONCAT44(uVar9,(undefined4)local_120) | 0x100000000;
      }
      uVar6 = local_120;
      if ((uVar9 >> 0xc & 1) == 0) {
        uStack_d0 = *(ulonglong *)(&DAT_100bbcb0 + iVar3);
        uStack_d8 = *(ulonglong *)(&DAT_100bbca8 + iVar3);
        iVar3 = *(int *)(param_1 + 0x11c) * 0xa4;
        bVar1 = true;
        local_c0 = *(ulonglong *)(&DAT_100bbcc0 + iVar3);
        uStack_c8 = *(ulonglong *)(&DAT_100bbcb8 + iVar3);
      }
    }
    else if ((((uVar11 & 0x18) != 0) && (uStack_b8 = uVar11 | 0x18, (uVar11 & 0x20) == 0)) &&
            ((local_120._4_4_ >> 5 & 1) == 0)) {
      uStack_110 = CONCAT44(1,(undefined4)uStack_110);
      local_120 = uVar6 | 0x2000000000;
      uVar6 = local_120;
    }
    local_120 = uVar6;
    iVar3 = FUN_10091750(param_2,&DAT_100b1820,0x10);
    bVar2 = iVar3 == 0;
    uVar7 = FUN_1003f268(param_1,0,0,param_2,&local_120,0,0,bVar2,1);
    if (-1 < (int)uVar7) {
      FUN_10051710(uVar7,param_2,0,&local_120,param_6,param_5);
    }
    if (!bVar1) goto LAB_1003a35c;
    iVar3 = uStack_d0._4_4_;
    if (uStack_d0._4_4_ == 8) {
LAB_1003a264:
      iVar4 = FUN_1004cc90(param_1,0x10);
      if (iVar4 != -1) {
        puVar5 = (ulonglong *)FUN_10038b50(param_1,auStack_80,iVar4);
        uStack_d0 = puVar5[1];
        uStack_d8 = *puVar5;
        local_c0 = puVar5[3];
        uStack_c8 = puVar5[2];
        uVar7 = FUN_1003f268(param_1,0,0,param_2,&local_120,0,0,bVar2,1);
        if (-1 < (int)uVar7) {
          FUN_10051710(uVar7,param_2,0,&local_120,param_6,param_5);
        }
      }
      if (iVar3 == 0x20) goto LAB_1003a35c;
    }
    else {
      iVar4 = FUN_1004cc90(param_1,8);
      if (iVar4 != -1) {
        puVar5 = (ulonglong *)FUN_10038b50(param_1,auStack_a0,iVar4);
        uStack_d0 = puVar5[1];
        uStack_d8 = *puVar5;
        local_c0 = puVar5[3];
        uStack_c8 = puVar5[2];
        uVar7 = FUN_1003f268(param_1,0,0,param_2,&local_120,0,0,bVar2,1);
        if (-1 < (int)uVar7) {
          FUN_10051710(uVar7,param_2,0,&local_120,param_6,param_5);
        }
      }
      if (iVar3 != 0x10) goto LAB_1003a264;
    }
    iVar3 = FUN_1004cc90(param_1,0x20);
    if (iVar3 != -1) {
      puVar5 = (ulonglong *)FUN_10038b50(param_1,auStack_60,iVar3);
      uStack_d0 = puVar5[1];
      uStack_d8 = *puVar5;
      local_c0 = puVar5[3];
      uStack_c8 = puVar5[2];
      uVar7 = FUN_1003f268(param_1,0,0,param_2,&local_120,0,0,bVar2,1);
      if (-1 < (int)uVar7) {
        FUN_10051710(uVar7,param_2,0,&local_120,param_6,param_5);
      }
    }
  }
LAB_1003a35c:
  uVar10 = 0;
LAB_1003a360:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar10;
}


/*
 * FUN_10016e00 at 10016e00
 * undefined FUN_10016e00(void)
 * Address ranges: 10016e00-10018f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016e00(uint *param_1,int *param_2,byte *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar16;
  byte bVar17;
  int extraout_w9;
  ushort *extraout_w12;
  undefined8 uVar18;
  uint uVar19;
  char cVar20;
  undefined1 auVar21 [16];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar11 = *param_3 & 0x7f;
  if (0x5e < uVar11 - 1) {
    return;
  }
  pbVar1 = param_3 + 1;
  switch(uVar11) {
  case 1:
    if (*(short *)(param_3 + 0x11) != 0x429) goto switchD_10016e54_caseD_23;
  case 0x2e:
    uVar11 = FUN_10015a00(param_1,param_2,param_3);
    break;
  case 2:
    uVar16 = 0x580201300700;
    uVar18 = 0x580200100700;
    goto LAB_10016ff4;
  default:
    goto switchD_10016e54_caseD_3;
  case 4:
    uVar11 = FUN_10014e40(param_1,param_2,param_3,0x590200100700,0x590201300700,0,1);
    FUN_10014c78(param_1,uVar11);
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 5),param_3[9],param_3[0xc],
                          param_3[0xf],0,0);
    FUN_10014c48(param_1,uVar11);
    uVar18 = 0x580201300700;
    if (param_3[0x10] != 1) {
      uVar18 = 0x580200100700;
    }
    uVar15 = uVar14 >> 0x20;
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_100170a8;
  case 5:
    uVar16 = 0x590201300700;
    uVar18 = 0x590200100700;
    goto LAB_10016ff4;
  case 6:
    uVar18 = 0x530200100700;
    goto LAB_100170cc;
  case 7:
    uVar18 = 0x520200100700;
LAB_100170cc:
    uVar11 = FUN_10015038(param_1,param_2,param_3,uVar18);
    break;
  case 8:
    uVar18 = 0;
    goto LAB_100170ec;
  case 9:
    uVar18 = 1;
LAB_100170ec:
    uVar11 = FUN_100153e8(param_1,param_2,param_3,uVar18);
    break;
  case 10:
    uVar16 = 0x5d0201300700;
    uVar18 = 0x5d0200100700;
    goto LAB_10016ff4;
  case 0xb:
    uVar16 = 0x5f0201300700;
    uVar18 = 0x5f0200100700;
LAB_10016ff4:
    uVar11 = FUN_10014e40(param_1,param_2,param_3,uVar18,uVar16,0,0);
    break;
  case 0xc:
    uVar18 = 1;
    goto LAB_10017124;
  case 0xd:
    uVar18 = 5;
LAB_10017124:
    uVar11 = FUN_10014e40(param_1,param_2,param_3,0xc20200130700,0xc20201330700,uVar18,0);
    uVar15 = 0x120;
    uVar18 = 0x540200100700;
    uVar14 = (ulonglong)(param_1[1] | 0x80000000);
LAB_100170a8:
    FUN_10002470(param_2,uVar18,uVar11,uVar14,uVar15,0);
    break;
  case 0xe:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          1,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10015b70(param_1,param_2,uVar14 & 0xffffffff);
    goto LAB_10016fe0;
  case 0xf:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],2,param_3[0xd],1,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10015f30(param_1,param_2,uVar14 & 0xffffffff);
    goto LAB_10016fe0;
  case 0x10:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          1,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar11);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar10);
    FUN_10019908(param_1,param_2,0);
    uVar15 = FUN_10014cc0(param_1,extraout_x1,0xffffffff,1);
    local_60 = uVar15;
    FUN_10002470(param_2,0x570200100700,uVar10,uVar10,0,0);
    puVar2 = param_1 + 1;
    FUN_10002470(param_2,0x290200100100,uVar11,*puVar2 | 0x80000000,0x170,0);
    FUN_10002470(param_2,0xc20201330700,uVar10,uVar14 & 0xffffffff,0,1);
    FUN_10002470(param_2,0x500200100700,uVar15 & 0xffffffff,uVar10,0,0);
    FUN_10002470(param_2,0x290200100100,uVar10,uVar14 & 0xffffffff,0,0);
    FUN_10002470(param_2,0xf70200010010,uVar15 & 0xffffffff,0xffffffff,0,1);
    FUN_10002470(param_2,0xc60200130700,uVar10,uVar10,0,0xff);
    FUN_10002470(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
    piVar3 = param_2 + 1;
    iVar5 = *param_2;
    iVar6 = *piVar3;
    FUN_10002470(param_2,0x110201300100,uVar11,uVar14 & 0xffffffff,0,0);
    FUN_10002470(param_2,0xf70200010010,uVar15 & 0xffffffff,0xffffffff,0,2);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,0xe3);
    FUN_10002470(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
    iVar7 = *param_2;
    iVar8 = *piVar3;
    FUN_10002470(param_2,0x5f0200100700,uVar10,*puVar2 | 0x80000000,400,0);
    FUN_10002470(param_2,0x5d0200100700,uVar10,*puVar2 | 0x80000000,0x180,0);
    FUN_10002470(param_2,0xc60200130700,uVar14 & 0xffffffff,uVar14 & 0xffffffff,0,0x55);
    FUN_10014dd8(param_1,param_2,&local_60);
    uVar12 = FUN_10015f30(param_1,param_2,uVar14 & 0xffffffff);
    FUN_10014c78(param_1,uVar12);
    FUN_10002470(param_2,0x590200100700,uVar12,uVar10,0,0);
    FUN_10014c48(param_1,uVar10);
    FUN_10015b70(param_1,param_2,uVar12);
    FUN_10014c48(param_1,uVar12);
    FUN_10002470(param_2,0x110201300100,uVar11);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,199);
    *(int *)((iVar6 - iVar5) + *param_2 + -4) = (*piVar3 - (iVar6 - iVar5)) - *param_2;
    *(int *)(*param_2 + (iVar8 - iVar7) + -4) = (*piVar3 - *param_2) - (iVar8 - iVar7);
    goto LAB_100174dc;
  case 0x11:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          0,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar15 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10014c78(param_1,uVar15 & 0xffffffff);
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar11);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10002470(param_2,0x290200100100,uVar11,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
    FUN_10002470(param_2,0xc60200130700,uVar11,param_1[1] | 0x80000000,0x170,0x19);
    FUN_10002470(param_2,0x290200100100,uVar10,uVar11,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,0xe2);
    FUN_10002470(param_2,0xc60200130700,uVar10,uVar10,0,0x9b);
    FUN_10002470(param_2,0x590200100700,uVar11,uVar15 & 0xffffffff,uVar15 >> 0x20,0);
    FUN_10002470(param_2,0x580200100700,uVar11,uVar10,0,0);
    FUN_10014c48(param_1,uVar11);
    uVar15 = uVar15 & 0xffffffff;
    goto LAB_10017694;
  case 0x12:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],1,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar15 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 5),param_3[9],param_3[0xc],
                          param_3[0xf],0,0);
    FUN_10014c78(param_1,uVar15 & 0xffffffff);
    FUN_10002470(param_2,0x5c0200100700,uVar14 & 0xffffffff,uVar15 & 0xffffffff,uVar15 >> 0x20,0);
    uVar13 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          0,0);
    FUN_10002470(param_2,0x590200100700,uVar14 & 0xffffffff,uVar13 & 0xffffffff,uVar13 >> 0x20,0);
    FUN_10002470(param_2,0x580200100700,uVar14 & 0xffffffff,uVar15 & 0xffffffff,uVar15 >> 0x20,0);
    FUN_10014c48(param_1,uVar15 & 0xffffffff);
    goto LAB_100181fc;
  case 0x13:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          0,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10002470(param_2,0x5b0201400700,uVar11,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
    FUN_10002470(param_2,0x5b0200100700,uVar11,uVar11,0,0);
    FUN_10002470(param_2,0x5c0200100700,uVar11,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
    FUN_10002470(param_2,0x570200100700,uVar11,param_1[1] | 0x80000000,0x110,0);
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_100174ec;
  case 0x14:
    uVar18 = 0;
    goto LAB_10017780;
  case 0x15:
    uVar18 = 0;
    goto LAB_1001779c;
  case 0x16:
    uVar18 = 1;
LAB_10017780:
    uVar16 = 1;
LAB_10017784:
    uVar11 = FUN_100154e8(param_1,param_2,param_3,uVar16,uVar18);
    break;
  case 0x17:
    uVar18 = 1;
LAB_1001779c:
    uVar16 = 0;
    goto LAB_10017784;
  case 0x18:
    uVar15 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          1,0);
    FUN_10002470(param_2,0x540200100700,uVar15 & 0xffffffff,param_1[1] | 0x80000000,0x70,0);
    FUN_10014c78(param_1,uVar15 & 0xffffffff);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar10);
    uVar14 = FUN_10014618(param_1,param_2,0xffff);
    uVar14 = uVar14 & 0xffffffff;
    FUN_10014c78(param_1,uVar14);
    uVar13 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10002470(param_2,0x290200100100,uVar10,uVar13 & 0xffffffff,uVar13 >> 0x20,0);
    FUN_10002470(param_2,0x590200100700,uVar10,uVar15 & 0xffffffff,uVar15 >> 0x20,0);
    uVar13 = FUN_10014800(param_1,param_2,*(short *)(param_3 + 3) + 1,param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10002470(param_2,0x290200100100,uVar14,uVar13 & 0xffffffff,uVar13 >> 0x20,0);
    FUN_10002470(param_2,0x590200100700,uVar14,uVar15 & 0xffffffff,uVar15 >> 0x20,0);
    FUN_10014c48(param_1,uVar15 & 0xffffffff);
    uVar13 = FUN_10014618(param_1,param_2,0xffff);
    uVar15 = uVar13 & 0xffffffff;
    uVar11 = (uint)uVar13;
    FUN_10014c78(param_1,uVar15);
    FUN_10002470(param_2,0x290200100100,uVar15,uVar10,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar15,uVar14,0,0x44);
    FUN_10002470(param_2,0xc60200130700,uVar10,uVar14,0,0xee);
    FUN_10002470(param_2,0x580200100700,uVar15,uVar10,0,0);
    FUN_10002470(param_2,0x290200100100,uVar10,uVar15,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar15,uVar15,0,0x31);
    FUN_10002470(param_2,0x580200100700,uVar15,uVar10,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar15,uVar15,0,8);
    FUN_10014c48(param_1,uVar10);
    goto LAB_10017694;
  case 0x20:
    uVar10 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],2,param_3[0xd],1,0);
    FUN_10014c78(param_1,uVar10);
    uVar12 = FUN_10015f30(param_1,param_2,uVar10);
    FUN_10014c48(param_1,uVar10);
    FUN_10014c78(param_1,uVar12);
    uVar10 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10002470(param_2,0x590200100700,uVar12,uVar10,0,0);
    uVar11 = FUN_10015b70(param_1,param_2,uVar12);
    FUN_10014c78(param_1,uVar12);
    break;
  case 0x21:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          0,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar15 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10014c78(param_1,uVar15 & 0xffffffff);
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar11);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar10);
    local_50[0] = uVar14 >> 0x20;
    FUN_10002470(param_2,0x290200100100,uVar11,uVar14 & 0xffffffff,local_50[0],0);
    local_58 = uVar15 >> 0x20;
    FUN_10002470(param_2,0x290200100100,uVar10,uVar15 & 0xffffffff,local_58,0);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,0xd8);
    FUN_10002470(param_2,0xc60200130700,uVar10,uVar10,0,0xe3);
    FUN_10002470(param_2,0x590200100700,uVar11,uVar10,0,0);
    uVar12 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10002470(param_2,0x290200100100,uVar10,uVar14 & 0xffffffff,local_50[0] & 0xffffffff,0);
    FUN_10002470(param_2,0x290200100100,uVar12,uVar15 & 0xffffffff,local_58 & 0xffffffff,0);
    FUN_10002470(param_2,0xc60200130700,uVar10,uVar10,0,0xe3);
    FUN_10002470(param_2,0xc60200130700,uVar12,uVar12,0,0xd8);
    FUN_10002470(param_2,0x590200100700,uVar10,uVar12,0,0);
    uVar18 = 0x5c0200100700;
    goto LAB_100186c8;
  case 0x22:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          0,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar15 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10014c78(param_1,uVar15 & 0xffffffff);
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar11);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar10);
    FUN_10002470(param_2,0x570200100700,uVar11,uVar11,0,0);
    FUN_10002470(param_2,0x570200100700,uVar10,uVar10,0,0);
    FUN_10002470(param_2,0xc20200130700,uVar11,uVar14 & 0xffffffff,uVar14 >> 0x20,6);
    FUN_10002470(param_2,0xc20200130700,uVar10,uVar14 & 0xffffffff,uVar14 >> 0x20,1);
    FUN_10002470(param_2,0x540200100700,uVar11,param_1[1] | 0x80000000,0x130,0);
    FUN_10002470(param_2,0x540200100700,uVar10,param_1[1] | 0x80000000,0x120,0);
    uVar18 = 0x560200100700;
LAB_100186c8:
    FUN_10002470(param_2,uVar18,uVar11,uVar10,0,0);
    FUN_10014c48(param_1,uVar10);
    FUN_10014c48(param_1,uVar11);
    uVar15 = uVar15 & 0xffffffff;
LAB_10017694:
    FUN_10014c48(param_1,uVar15);
LAB_1001769c:
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_100174ec;
  case 0x23:
switchD_10016e54_caseD_23:
    if (uVar11 == 1) {
      bVar17 = param_3[10];
    }
    else {
      bVar17 = 2;
    }
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],bVar17,param_3[0xd],0,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar19 = (uint)uVar14;
    if ((int)uVar19 < 0) {
LAB_10016f8c:
      uVar11 = FUN_100147a8(param_1,param_2,*(undefined2 *)(param_3 + 0x11),param_3[0x10],
                            param_3[0x13]);
      if (uVar11 != uVar19) {
        FUN_10002470(param_2,0x290200100100,uVar11,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
      }
    }
    else if (((ushort)(*(ushort *)(param_3 + 0x11) - 0x44d) < 0xd) &&
            (uVar15 = FUN_100145a0(param_3), (uVar15 & 1) != 0)) {
      uVar11 = 0xffffffff;
      FUN_10002470(param_2,0x290200100100,*param_1 | 0x80000000,uVar14 & 0xffffffff,extraout_w9 << 4
                   ,0);
      uVar19 = 0;
      do {
        if (param_1[uVar19 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
          param_1[uVar19 + 6] = 0xffffffff;
          break;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < 0x10);
    }
    else {
      uVar15 = FUN_100145a0(param_3);
      if (((uVar15 & 1) == 0) || (uVar11 = uVar19, param_1[(uVar19 & 0xff) + 6] != 0xffffffff))
      goto LAB_10016f8c;
    }
LAB_10016fe0:
    FUN_10014c48(param_1,uVar14 & 0xffffffff);
    break;
  case 0x24:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          0,0);
    local_60 = uVar14;
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10015238(param_1,param_2,&local_60,&local_60,0);
    FUN_10014c78(param_1,uVar11);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar10);
    uVar12 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10002470(param_2,0x570200100700,uVar10,uVar10,0,0);
    FUN_10002470(param_2,0x290200100100,uVar12,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
    FUN_10002470(param_2,0xc20200130700,uVar10,uVar11,0,1);
    FUN_10002470(param_2,0x5e0200100700,uVar12,uVar11,0,0);
    FUN_10002470(param_2,0x290200100100,uVar11,uVar10,0,0);
    FUN_10002470(param_2,0x550200100700,uVar11,param_1[1] | 0x80000000,0x160,0);
    FUN_10002470(param_2,0x540200100700,uVar10,uVar12,0,0);
    FUN_10002470(param_2,0x560200100700,uVar11,uVar10,0,0);
    FUN_10014c48(param_1,uVar10);
LAB_100174dc:
    FUN_10014c48(param_1,uVar11);
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_100174ec;
  case 0x25:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          1,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10002470(param_2,0x110201300100,0x80000004,uVar14 & 0xffffffff,0xfffffffc,0);
    pbVar1 = param_3 + 0x10;
    if ((*pbVar1 & 1) != 0) {
      FUN_10002470(param_2,0xd90200000000,0x80000004,0xffffffff,0xfffffffc,0);
    }
    if ((*pbVar1 >> 1 & 1) != 0) {
      FUN_10002470(param_2,0xd90200000000,0x80000004,0xffffffff,0xfffffffc,0);
      FUN_10002470(param_2,0xfed90200000000,0xffffffff,0xffffffff,0,0);
      FUN_10002470(param_2,0x18d90200000000,0x80000004,0xffffffff,0xfffffffc,0);
      FUN_10002470(param_2,0x110201300100,uVar14 & 0xffffffff,0x80000004,0xfffffffc,0);
      FUN_10002470(param_2,0xc60200130700,uVar14 & 0xffffffff,uVar14 & 0xffffffff,0,0xe0);
    }
    if ((*pbVar1 & 1) != 0) {
      FUN_10002470(param_2,0xffd90200000000,0xffffffff,0xffffffff,0,0);
      FUN_10002470(param_2,0x18d90200000000,0x80000004,0xffffffff,0xfffffffc,0);
      FUN_10002470(param_2,0x110201300100,uVar10,0x80000004,0xfffffffc,0);
      FUN_10002470(param_2,0x110201300100,uVar14 & 0xffffffff,uVar10,0,0);
    }
    goto LAB_100181fc;
  case 0x4e:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          1,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar11);
    uVar10 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10014c78(param_1,uVar10);
    uVar12 = FUN_10014618(param_1,param_2,0xffff);
    auVar21 = FUN_10014cc0(param_1,extraout_x1_00,0xffffffff,1);
    uVar15 = auVar21._0_8_;
    local_58 = uVar15;
    local_60 = FUN_10014cc0(param_1,auVar21._8_8_,0xffffffff,1);
    local_50[0] = local_60;
    FUN_10002470(param_2,0x290200100100,uVar11,uVar14 & 0xffffffff,0,0);
    FUN_10002470(param_2,0x890200000210,local_60 & 0xffffffff,param_1[2] | 0x80000000,8,0);
    FUN_10002470(param_2,0x2d0201300700,uVar15 & 0xffffffff,uVar14 & 0xffffffff,0,0);
    puVar2 = param_1 + 1;
    FUN_10002470(param_2,0xc60200130700,uVar11,*puVar2 | 0x80000000,0x170,0);
    FUN_10002470(param_2,0x2a0201300700,uVar10,uVar15 & 0xffffffff,0,0);
    FUN_10002470(param_2,0x5c0201300700,uVar11,uVar10,0,0);
    FUN_10002470(param_2,0x570200100700,uVar10,uVar10,0,0);
    FUN_10002470(param_2,0xc20201330700,uVar10,uVar14 & 0xffffffff,0,6);
    FUN_10002470(param_2,0x540200100700,uVar14 & 0xffffffff,*puVar2 | 0x80000000,0x100,0);
    FUN_10002470(param_2,0x2d0201300700,uVar15 & 0xffffffff,uVar14 & 0xffffffff,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,0xe1);
    FUN_10002470(param_2,0xf8810200012010,uVar15 & 0xffffffff,0xffffffff,0,0x400);
    FUN_10002470(param_2,0x2a0201300700,uVar11,uVar15 & 0xffffffff,0,0);
    FUN_10002470(param_2,0x470200100000,uVar15 & 0xffffffff,*puVar2 | 0x80000000,0x1d0,0);
    FUN_10002470(param_2,0x5c0201300700,uVar14 & 0xffffffff,uVar11,0,0);
    uVar19 = (uint)local_60 & 0xff | (auVar21._0_4_ & 0xff | 0xffc00200) << 8;
    FUN_10002470(param_2,0x110201300100,uVar12,uVar19,0,0);
    FUN_10002470(param_2,0x110201300100,uVar11,uVar12,0,0);
    FUN_10002470(param_2,0x590201300700,uVar14 & 0xffffffff,*puVar2 | 0x80000000,0x1a0,0);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,0xc4);
    FUN_10002470(param_2,0x2d0201300700,uVar15 & 0xffffffff,uVar14 & 0xffffffff,0,0);
    FUN_10002470(param_2,0x890200000210,local_60 & 0xffffffff,param_1[2] | 0x80000000,4,0);
    FUN_10002470(param_2,0x590201300700,uVar11,uVar19,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar11,uVar11,0,0xc6);
    FUN_10002470(param_2,0x530200100700,uVar14 & 0xffffffff,uVar11,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar10,uVar10,0,0x44);
    FUN_10002470(param_2,0x540200100700,uVar14 & 0xffffffff,uVar10,0,0);
    FUN_10002470(param_2,0x550200100700,uVar10,uVar11,0,0);
    FUN_10002470(param_2,0x560200100700,uVar11,uVar10,0,0);
    FUN_10014dd8(param_1,param_2,&local_58);
    FUN_10014dd8(param_1,param_2,local_50);
    FUN_10014c48(param_1,uVar11);
    FUN_10014c48(param_1,uVar10);
    uVar14 = uVar14 & 0xffffffff;
    goto LAB_100174ec;
  case 0x4f:
    uVar10 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],2,param_3[0xd],1,0);
    FUN_10014c78(param_1,uVar10);
    uVar14 = FUN_10014618(param_1,param_2,0xffff);
    uVar14 = uVar14 & 0xffffffff;
    FUN_10014c78(param_1,uVar14);
    uVar15 = FUN_10014cc0(param_1,extraout_x1_01,0xffffffff,1);
    local_58 = uVar15;
    FUN_10002470(param_2,0x570200100700,uVar14,uVar14,0,0);
    FUN_10002470(param_2,0x7e0201400500,uVar15 & 0xffffffff,uVar10,0,0);
    FUN_10002470(param_2,0xc20200130700,uVar14,uVar10,0,1);
    uVar12 = FUN_10015f30(param_1,param_2,uVar10);
    FUN_10014c48(param_1,uVar10);
    uVar13 = FUN_10014cc0(param_1,extraout_x1_02,0xffffffff,1);
    local_50[0] = uVar13;
    FUN_10002470(param_2,0xc60200130700,uVar12,param_1[1] | 0x80000000,0x170,0x10);
    FUN_10002470(param_2,0x890200000210,uVar13 & 0xffffffff,uVar15 & 0xffffffff,0,0);
    FUN_10002470(param_2,0x28c10200030010,uVar15 & 0xffffffff,0xffffffff,0,0x17);
    FUN_10002470(param_2,0x20810200012010,uVar13 & 0xffffffff,0xffffffff,0,0x7fffff);
    FUN_10002470(param_2,0x28810200012010,uVar15 & 0xffffffff,0xffffffff,0,0x7f);
    FUN_10002470(param_2,0x8810200012010,uVar13 & 0xffffffff,0xffffffff,0,0x3f800000);
    FUN_10002470(param_2,0xc60200130700,uVar12,uVar12,0,0xda);
    FUN_10002470(param_2,0x6e0201400700,uVar12,uVar13 & 0xffffffff,0,0);
    FUN_10002470(param_2,0xc60200130700,uVar12,uVar12,0,0xe1);
    FUN_10002470(param_2,0x2a0201300700,uVar12,uVar15 & 0xffffffff,0,0);
    FUN_10002470(param_2,0x540200100700,uVar12,uVar14,0,0);
    FUN_10002470(param_2,0x550200100700,uVar14,param_1[1] | 0x80000000,0x140,0);
    FUN_10002470(param_2,0x560200100700,uVar14,uVar12,0,0);
    FUN_10014dd8(param_1,param_2,local_50);
    FUN_10014dd8(param_1,param_2,&local_58);
LAB_100181fc:
    uVar11 = (uint)uVar14;
    uVar14 = uVar14 & 0xffffffff;
LAB_100174ec:
    FUN_10014c48(param_1,uVar14);
    break;
  case 0x5e:
    uVar14 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],0,0);
    FUN_10014c78(param_1,uVar14 & 0xffffffff);
    uVar11 = FUN_10014800(param_1,param_2,*(undefined2 *)pbVar1,param_3[7],param_3[10],param_3[0xd],
                          1,0);
    FUN_10002470(param_2,0xc20200130700,uVar11,uVar14 & 0xffffffff,uVar14 >> 0x20,
                 (&DAT_10160a9f)[param_3[9]]);
    goto LAB_1001769c;
  case 0x5f:
    uVar11 = FUN_10014618(param_1,param_2,0xffff);
    FUN_10002470(param_2,0x570200100700,uVar11,uVar11,0,0);
  }
  if (uVar11 != 0xffffffff) {
    uVar14 = FUN_100145a0(param_3);
    if ((uVar14 & 1) == 0) {
      FUN_10014c78(param_1,uVar11);
      bVar17 = param_3[0x13];
      if (bVar17 == 0xc3) {
        puVar4 = (ushort *)(param_3 + 0x11);
        if (param_3[0x10] == 1) {
          uVar14 = FUN_10014750(param_1,extraout_x1_03,*puVar4);
          FUN_10002470(param_2,0x110201300100,uVar14 & 0xffffffff,uVar11,uVar14 >> 0x20,0);
        }
        else {
          auVar21 = FUN_10014618(param_1,param_2,0xffff);
          uVar15 = auVar21._0_8_ & 0xffffffff;
          uVar14 = FUN_10014750(param_1,auVar21._8_8_,*puVar4);
          FUN_10002470(param_2,0x290200100100,uVar15,param_1[1] | 0x80000000,
                       (ulonglong)param_3[0x10] << 4,0);
          FUN_10002470(param_2,0x540200100700,uVar11,uVar15,0,0);
          FUN_10002470(param_2,0x550200100700,uVar15,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
          FUN_10002470(param_2,0x560200100700,uVar11,uVar15,0,0);
          FUN_100145d8(param_1,*puVar4);
          param_1[(uVar11 & 0xff) + 6] = (uint)*puVar4;
        }
      }
      else {
        if (((bVar17 == 0x57 || bVar17 == 2) || bVar17 == 0xac) || bVar17 == 0xe6) {
          cVar20 = bVar17 - 2;
          uVar18 = 0x550200100700;
        }
        else {
          uVar18 = 0x540200100700;
          cVar20 = -0x1c;
        }
        uVar14 = FUN_10014750(param_1,extraout_x1_03,0x42a);
        uVar19 = (uint)uVar14;
        local_60 = uVar14;
        if (cVar20 == -0x1c) {
          uVar15 = uVar14 & 0xffffffff;
          local_60._4_4_ = (undefined4)(uVar14 >> 0x20);
          uVar10 = local_60._4_4_;
        }
        else {
          cVar9 = FUN_10014c78(param_1,uVar14 & 0xffffffff);
          uVar15 = FUN_10014618(param_1,param_2,0xffff);
          uVar15 = uVar15 & 0xffffffff;
          if (-1 < (int)uVar19) {
            iVar5 = (int)uVar19 >> 3;
            if (cVar9 == '\0') {
              bVar17 = *(byte *)((int)param_1 + iVar5 + 0x14) &
                       ((byte)(1 << (ulonglong)(uVar19 & 7)) ^ 0xff);
            }
            else {
              bVar17 = *(byte *)((int)param_1 + iVar5 + 0x14) | (byte)(1 << (ulonglong)(uVar19 & 7))
              ;
            }
            *(byte *)((int)param_1 + iVar5 + 0x14) = bVar17;
          }
          FUN_10002470(param_2,0x290200100100,uVar15,uVar14 & 0xffffffff,local_60._4_4_,0);
          FUN_10002470(param_2,0xc60200130700,uVar15,uVar15,0,cVar20);
          uVar10 = 0;
        }
        FUN_10014c78(param_1,uVar15);
        uVar12 = FUN_10014618(param_1,param_2,0xffff);
        FUN_10002470(param_2,0x290200100100,uVar12,uVar15,uVar10,0);
        FUN_10002470(param_2,uVar18,uVar12,param_1[1] | 0x80000000,(ulonglong)param_3[0x10] << 4,0);
        FUN_10002470(param_2,0x540200100700,uVar11,uVar12,0,0);
        puVar4 = (ushort *)(param_3 + 0x11);
        uVar14 = FUN_10014750(param_1,extraout_x1_04,*puVar4);
        FUN_10002470(param_2,0x550200100700,uVar12,uVar14 & 0xffffffff,uVar14 >> 0x20,0);
        FUN_10002470(param_2,0x560200100700,uVar11,uVar12,0,0);
        FUN_100145d8(param_1,*puVar4);
        param_1[(uVar11 & 0xff) + 6] = (uint)*puVar4;
        FUN_10014c48(param_1,uVar15);
      }
      FUN_10014c48(param_1,uVar11);
    }
    else {
      FUN_100145d8(param_1,*(undefined2 *)(param_3 + 0x11));
      param_1[(uVar11 & 0xff) + 6] = (uint)*extraout_w12;
    }
  }
switchD_10016e54_caseD_3:
  return;
}


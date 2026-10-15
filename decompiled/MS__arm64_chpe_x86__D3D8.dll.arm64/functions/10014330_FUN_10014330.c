/*
 * FUN_10014330 at 10014330
 * undefined FUN_10014330(void)
 * Address ranges: 10014330-10015c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10014330(int param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar20;
  undefined2 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar28 [16];
  undefined8 *local_150;
  undefined8 *puStack_14c;
  undefined4 local_148;
  byte *local_140;
  byte *local_13c;
  byte *local_138;
  uint local_134;
  undefined8 *local_130;
  undefined8 *local_12c;
  uint local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  uint auStack_f8 [16];
  int aiStack_b8 [16];
  uint local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  int local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_128 = 0x100;
  local_130 = (undefined8 *)FUN_100fece0(0x100);
  local_110 = 0x200000001;
  local_108 = 0xff1700000000;
  local_100 = 0xff0000000000;
  local_70 = 0;
  uStack_68 = 0xffffffffffffffff;
  uVar12 = 0;
  local_60 = 0xffff;
  do {
    aiStack_b8[uVar12] = -1;
    puVar3 = auStack_f8 + uVar12;
    uVar12 = uVar12 + 1;
    *puVar3 = 0xffffffff;
  } while (uVar12 < 0x10);
  local_78 = 7;
  uStack_74 = 0;
  local_148 = 0x80;
  local_12c = local_130;
  local_150 = (undefined8 *)FUN_100fece0(0x80);
  puStack_14c = local_150;
  local_134 = FUN_100fece0(0x80);
  iVar27 = 0;
  local_58 = 0;
  do {
    iVar26 = local_58;
    uVar12 = local_134;
    pbVar4 = (byte *)(param_1 + iVar27 * 0x14);
    bVar8 = *pbVar4;
    if (bVar8 == 0xff) {
      FUN_100141e8(&local_110,&local_150,1);
      iVar27 = 0;
      uVar14 = 0;
      uVar16 = local_78 | (uint)local_70;
      do {
        local_134 = uVar16;
        if (((*(byte *)((int)&local_134 + ((int)uVar14 >> 3)) >> (ulonglong)(uVar14 & 7) & 1) != 0)
           && ((&DAT_1012b130)[uVar14] != '\0')) {
          FUN_10002350(&local_130,0x30ff0200000000,uVar14,0xffffffff,0,0);
          iVar27 = iVar27 + 1;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < 0x10);
      iVar27 = iVar27 * 4;
      FUN_10002350(&local_130,0x890200000210,local_110 & 0xffffffff,0x80000004,iVar27 + 4,0);
      FUN_10002350(&local_130,0x890200000210,local_110._4_4_,0x80000004,iVar27 + 8,0);
      FUN_10002350(&local_130,0x890200000210,local_108 & 0xffffffff,0x80000004,iVar27 + 0xc,0);
      puVar11 = local_150;
      uVar14 = (int)puStack_14c - (int)local_150;
      if (local_128 < (int)local_12c + (uVar14 - (int)local_130)) {
        FUN_100022c8(&local_130,uVar14);
      }
      uVar24 = 0;
      puVar23 = puVar11;
      puVar22 = local_12c;
      if (uVar14 >> 3 != 0) {
        do {
          uVar25 = *puVar23;
          uVar24 = uVar24 + 1;
          puVar23 = puVar23 + 1;
          *puVar22 = uVar25;
          puVar22 = puVar22 + 1;
        } while (uVar24 < uVar14 >> 3);
      }
      if ((uVar14 >> 2 & 1) != 0) {
        *(undefined4 *)puVar22 = *(undefined4 *)puVar23;
      }
      puVar6 = (undefined1 *)((uVar14 & 0xfffffffc) + (int)puVar11);
      puVar7 = (undefined1 *)((int)local_12c + (uVar14 & 0xfffffffc));
      uVar24 = 0;
      if ((uVar14 & 3) != 0) {
        do {
          uVar9 = *puVar6;
          uVar24 = uVar24 + 1;
          puVar6 = puVar6 + 1;
          *puVar7 = uVar9;
          puVar7 = puVar7 + 1;
        } while (uVar24 < (uVar14 & 3));
      }
      local_12c = (undefined8 *)((int)local_12c + uVar14);
      iVar27 = 0x10;
      do {
        local_134 = uVar16;
        if (((*(byte *)((int)&local_134 + ((int)(iVar27 - 1U) >> 3)) >> (ulonglong)(iVar27 - 1U & 7)
             & 1) != 0) && (*(char *)(iVar27 + 0x1012b12f) != '\0')) {
          FUN_10002350(&local_130,0x8f0200000000,iVar27 + -1,0xffffffff,0,0);
        }
        iVar27 = iVar27 + -1;
      } while (iVar27 != 0);
      FUN_10002350(&local_130,0xc30100000000,0xffffffff,0xffffffff,0,0);
      FUN_100fed00(uVar12);
      FUN_100fed00(puVar11);
      puVar11 = local_130;
      iVar27 = (int)local_12c - (int)local_130;
      iVar17 = (*(code *)PTR_FUN_10134128)(0,iVar27,0x1000,0x40);
      if (iVar17 != 0) {
        FUN_100ff660(iVar17,puVar11,iVar27);
        iVar26 = iVar17;
      }
      FUN_100fed00(puVar11);
      return iVar26;
    }
    if ((char)bVar8 < '\0') goto switchD_1001444c_caseD_3;
    pbVar1 = pbVar4 + 1;
    bVar8 = bVar8 & 0x7f;
    if (0x18 < bVar8) {
      if (bVar8 == 0x4e) {
        uVar16 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                              pbVar4[0xd],1);
        FUN_10012d90(&local_110,uVar16);
        uVar14 = FUN_100127d8(&local_110,&local_150,0xffff);
        FUN_10012d90(&local_110,uVar14);
        uVar13 = FUN_100127d8(&local_110,&local_150,0xffff);
        FUN_10012d90(&local_110,uVar13);
        local_13c = (byte *)FUN_100127d8(&local_110,&local_150,0xffff);
        auVar28 = FUN_10012dd8(&local_110,extraout_x1_02,0xffffffff,1);
        uVar18 = auVar28._0_8_;
        local_50 = uVar18;
        local_118 = FUN_10012dd8(&local_110,auVar28._8_8_,0xffffffff,1);
        local_48 = local_118;
        FUN_10002350(&local_150,0x290200100100,uVar14,uVar16,0,0);
        local_138 = (byte *)((uint)local_108 | 0x80000000);
        FUN_10002350(&local_150,0x890200000210,local_118 & 0xffffffff,local_138,8,0);
        FUN_10002350(&local_150,0x2d0201300700,uVar18 & 0xffffffff,uVar16,0,0);
        local_140 = (byte *)(local_110._4_4_ | 0x80000000);
        FUN_10002350(&local_150,0xc60200130700,uVar14,local_140,0x170,0);
        FUN_10002350(&local_150,0x2a0201300700,uVar13,uVar18 & 0xffffffff,0,0);
        FUN_10002350(&local_150,0x5c0201300700,uVar14,uVar13,0,0);
        FUN_10002350(&local_150,0x570200100700,uVar13,uVar13,0,0);
        FUN_10002350(&local_150,0xc20201330700,uVar13,uVar16,0,6);
        FUN_10002350(&local_150,0x540200100700,uVar16,local_140,0x100,0);
        FUN_10002350(&local_150,0x2d0201300700,uVar18 & 0xffffffff,uVar16,0,0);
        FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,0xe1);
        FUN_10002350(&local_150,0xf8810200012010,uVar18 & 0xffffffff,0xffffffff,0,0x400);
        FUN_10002350(&local_150,0x2a0201300700,uVar14,uVar18 & 0xffffffff,0,0);
        FUN_10002350(&local_150,0x470200100000,uVar18 & 0xffffffff,local_140,0x1d0,0);
        FUN_10002350(&local_150,0x5c0201300700,uVar16,uVar14,0,0);
        uVar12 = (uint)local_118 & 0xff | (auVar28._0_4_ & 0xff | 0xffc00200) << 8;
        local_120 = CONCAT44(local_120._4_4_,uVar12);
        FUN_10002350(&local_150,0x110201300100,local_13c,uVar12,0,0);
        FUN_10002350(&local_150,0x110201300100,uVar14,local_13c,0,0);
        FUN_10002350(&local_150,0x590201300700,uVar16,local_140,0x1a0,0);
        FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,0xc4);
        FUN_10002350(&local_150,0x2d0201300700,uVar18 & 0xffffffff,uVar16,0,0);
        FUN_10002350(&local_150,0x890200000210,local_118 & 0xffffffff,local_138,4,0);
        FUN_10002350(&local_150,0x590201300700,uVar14,local_120 & 0xffffffff,0,0);
        FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,0xc6);
        FUN_10002350(&local_150,0x530200100700,uVar16,uVar14,0,0);
        FUN_10002350(&local_150,0xc60200130700,uVar13,uVar13,0,0x44);
        FUN_10002350(&local_150,0x540200100700,uVar16,uVar13,0,0);
        FUN_10002350(&local_150,0x550200100700,uVar13,uVar14,0,0);
        FUN_10002350(&local_150,0x560200100700,uVar14,uVar13,0,0);
        FUN_10012ef0(&local_110,&local_150,&local_50);
        FUN_10012ef0(&local_110,&local_150,&local_48);
        FUN_10012d60(&local_110,uVar14);
        FUN_10012d60(&local_110,uVar13);
      }
      else {
        if (bVar8 != 0x4f) goto switchD_1001444c_caseD_3;
        uVar13 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],2,pbVar4[0xd],1)
        ;
        FUN_10012d90(&local_110,uVar13);
        uVar14 = FUN_100127d8(&local_110,&local_150,0xffff);
        FUN_10012d90(&local_110,uVar14);
        uVar18 = FUN_10012dd8(&local_110,extraout_x1_00,0xffffffff,1);
        local_120 = uVar18;
        FUN_10002350(&local_150,0x570200100700,uVar14,uVar14,0,0);
        FUN_10002350(&local_150,0x7e0201400500,uVar18 & 0xffffffff,uVar13,0,0);
        FUN_10002350(&local_150,0xc20200130700,uVar14,uVar13,0,1);
        uVar15 = FUN_10013eb0(&local_110,&local_150,uVar13);
        FUN_10012d60(&local_110,uVar13);
        uVar19 = FUN_10012dd8(&local_110,extraout_x1_01,0xffffffff,1);
        local_138 = (byte *)(local_110._4_4_ | 0x80000000);
        local_118 = uVar19;
        FUN_10002350(&local_150,0xc60200130700,uVar15,local_138,0x170,0x10);
        FUN_10002350(&local_150,0x890200000210,uVar19 & 0xffffffff,uVar18 & 0xffffffff,0,0);
        FUN_10002350(&local_150,0x28c10200030010,uVar18 & 0xffffffff,0xffffffff,0,0x17);
        FUN_10002350(&local_150,0x20810200012010,uVar19 & 0xffffffff,0xffffffff,0,0x7fffff);
        FUN_10002350(&local_150,0x28810200012010,uVar18 & 0xffffffff,0xffffffff,0,0x7f);
        FUN_10002350(&local_150,0x8810200012010,uVar19 & 0xffffffff,0xffffffff,0,0x3f800000);
        FUN_10002350(&local_150,0xc60200130700,uVar15,uVar15,0,0xda);
        FUN_10002350(&local_150,0x6e0201400700,uVar15,uVar19 & 0xffffffff,0,0);
        FUN_10002350(&local_150,0xc60200130700,uVar15,uVar15,0,0xe1);
        FUN_10002350(&local_150,0x2a0201300700,uVar15,uVar18 & 0xffffffff,0,0);
        FUN_10002350(&local_150,0x540200100700,uVar15,uVar14,0,0);
        FUN_10002350(&local_150,0x550200100700,uVar14,local_138,0x140,0);
        FUN_10002350(&local_150,0x560200100700,uVar14,uVar15,0,0);
        FUN_10012ef0(&local_110,&local_150,&local_118);
        FUN_10012ef0(&local_110,&local_150,&local_120);
        uVar16 = uVar14;
      }
      goto LAB_10015850;
    }
    switch(bVar8) {
    case 1:
      if (*(short *)(pbVar4 + 0x11) != 0x429) {
        uVar12 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                              pbVar4[0xd],0);
        FUN_10012d90(&local_110,uVar12);
        if ((int)uVar12 < 0) {
LAB_10014640:
          uVar21 = *(undefined2 *)(pbVar4 + 0x11);
          if (pbVar4[0x10] != 0 && pbVar4[0x10] != 0xf) {
            uVar21 = 0xffff;
          }
          uVar14 = FUN_100127d8(&local_110,&local_150,uVar21);
          if (uVar14 != uVar12) {
            FUN_10002350(&local_150,0x290200100100,uVar14,uVar12,0,0);
          }
        }
        else {
          uVar10 = *(ushort *)(pbVar4 + 0x11);
          if (((ushort)(uVar10 - 0x42a) < 0xd) && (pbVar4[0x10] == 0 || pbVar4[0x10] == 0xf)) {
            uVar14 = 0xffffffff;
            FUN_10002350(&local_150,0x290200100100,(uint)local_110 | 0x80000000,uVar12,
                         (ulonglong)uVar10 << 4,0);
            uVar16 = 0;
            do {
              if (auStack_f8[uVar16] == (uint)*(ushort *)(pbVar4 + 0x11)) {
                auStack_f8[uVar16] = 0xffffffff;
                break;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < 0x10);
          }
          else if ((pbVar4[0x10] != 0 && pbVar4[0x10] != 0xf) ||
                  (uVar14 = uVar12, auStack_f8[uVar12 & 0xff] != 0xffffffff)) goto LAB_10014640;
        }
        goto LAB_10014698;
      }
      uVar14 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                            pbVar4[0xd],0);
      FUN_10012d90(&local_110,uVar14);
      uVar13 = FUN_100127d8(&local_110,&local_150,0xffff);
      uVar12 = local_110._4_4_ | 0x80000000;
      FUN_10002350(&local_150,0x10ae0200100000,uVar12,0xffffffff,0x1c0,0);
      FUN_10002350(&local_150,0x5b0201400700,uVar13,uVar14,0,0);
      FUN_10002350(&local_150,0x10ae0200100000,uVar12,0xffffffff,0x1b0,0);
      FUN_10002350(&local_150,0x290200100100,(uint)local_110 | 0x80000000,uVar13,0x4290,0);
      uVar12 = 0;
      do {
        piVar5 = aiStack_b8 + uVar12;
        uVar12 = uVar12 + 1;
        iVar26 = *piVar5;
        if (iVar26 - 0x429U < 4) {
          iVar26 = -1;
        }
        *piVar5 = iVar26;
      } while (uVar12 < 0x10);
      goto LAB_10014560;
    case 2:
      uVar20 = 0x580201300700;
      uVar25 = 0x580200100700;
      break;
    default:
      goto switchD_1001444c_caseD_3;
    case 4:
      uVar14 = FUN_10012f58(&local_110,&local_150,pbVar4,0x590200100700,0x590201300700,0,1);
      FUN_10012d90(&local_110,uVar14);
      uVar18 = FUN_10012968(&local_110,&local_150,*(undefined2 *)(pbVar4 + 5),pbVar4[9],pbVar4[0xc],
                            pbVar4[0xf],0);
      FUN_10012d60(&local_110,uVar14);
      uVar19 = uVar18 >> 0x20;
      uVar18 = uVar18 & 0xffffffff;
      uVar25 = 0x580201300700;
      if (pbVar4[0x10] != 1) {
        uVar25 = 0x580200100700;
      }
      goto LAB_10014764;
    case 5:
      uVar20 = 0x590201300700;
      uVar25 = 0x590200100700;
      break;
    case 6:
      uVar25 = 0x530200100700;
      goto LAB_10014788;
    case 7:
      uVar25 = 0x520200100700;
LAB_10014788:
      uVar14 = FUN_10013150(&local_110,&local_150,pbVar4,uVar25);
      goto LAB_1001585c;
    case 8:
      uVar25 = 0;
      goto LAB_100147a8;
    case 9:
      uVar25 = 1;
LAB_100147a8:
      uVar14 = FUN_10013500(&local_110,&local_150,pbVar4,uVar25);
      goto LAB_1001585c;
    case 10:
      uVar20 = 0x5d0201300700;
      uVar25 = 0x5d0200100700;
      break;
    case 0xb:
      uVar20 = 0x5f0201300700;
      uVar25 = 0x5f0200100700;
      break;
    case 0xc:
      uVar25 = 1;
      goto LAB_100147e0;
    case 0xd:
      uVar25 = 5;
LAB_100147e0:
      uVar14 = FUN_10012f58(&local_110,&local_150,pbVar4,0xc20200130700,0xc20201330700,uVar25,0);
      uVar19 = 0x120;
      uVar18 = (ulonglong)(local_110._4_4_ | 0x80000000);
      uVar25 = 0x540200100700;
LAB_10014764:
      FUN_10002350(&local_150,uVar25,uVar14,uVar18,uVar19,0);
      goto LAB_1001585c;
    case 0xe:
      uVar12 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                            pbVar4[0xd],1);
      FUN_10012d90(&local_110,uVar12);
      uVar14 = FUN_10013af0(&local_110,&local_150,uVar12);
      goto LAB_10014698;
    case 0xf:
      uVar12 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],2,pbVar4[0xd],1);
      FUN_10012d90(&local_110,uVar12);
      uVar14 = FUN_10013eb0(&local_110,&local_150,uVar12);
LAB_10014698:
      FUN_10012d60(&local_110,uVar12);
      goto LAB_1001585c;
    case 0x10:
      uVar16 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                            pbVar4[0xd],1);
      FUN_10012d90(&local_110,uVar16);
      uVar14 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10012d90(&local_110,uVar14);
      uVar13 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10012d90(&local_110,uVar13);
      FUN_100141e8(&local_110,&local_150,0);
      uVar18 = FUN_10012dd8(&local_110,extraout_x1,0xffffffff,1);
      local_118 = uVar18;
      FUN_10002350(&local_150,0x570200100700,uVar13,uVar13,0,0);
      local_140 = (byte *)(local_110._4_4_ | 0x80000000);
      FUN_10002350(&local_150,0x290200100100,uVar14,local_140,0x170,0);
      FUN_10002350(&local_150,0xc20201330700,uVar13,uVar16,0,1);
      FUN_10002350(&local_150,0x500200100700,uVar18 & 0xffffffff,uVar13,0,0);
      FUN_10002350(&local_150,0x290200100100,uVar13,uVar16,0,0);
      FUN_10002350(&local_150,0xf70200010010,uVar18 & 0xffffffff,0xffffffff,0,1);
      FUN_10002350(&local_150,0xc60200130700,uVar13,uVar13,0,0xff);
      FUN_10002350(&local_150,0x840100110000,0xffffffff,0xffffffff,0,0);
      local_13c = (byte *)((int)puStack_14c - (int)local_150);
      FUN_10002350(&local_150,0x110201300100,uVar14,uVar16,0,0);
      FUN_10002350(&local_150,0xf70200010010,uVar18 & 0xffffffff,0xffffffff,0,2);
      FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,0xe3);
      FUN_10002350(&local_150,0x840100110000,0xffffffff,0xffffffff,0,0);
      local_120 = CONCAT44(local_120._4_4_,(int)puStack_14c - (int)local_150);
      FUN_10002350(&local_150,0x5f0200100700,uVar13,local_140,400,0);
      FUN_10002350(&local_150,0x5d0200100700,uVar13,local_140,0x180,0);
      FUN_10002350(&local_150,0xc60200130700,uVar16,uVar16,0,0x55);
      FUN_10012ef0(&local_110,&local_150,&local_118);
      uVar15 = FUN_10013eb0(&local_110,&local_150,uVar16);
      FUN_10012d90(&local_110,uVar15);
      FUN_10002350(&local_150,0x590200100700,uVar15,uVar13,0,0);
      FUN_10012d60(&local_110,uVar13);
      FUN_10013af0(&local_110,&local_150,uVar15);
      FUN_10012d60(&local_110,uVar15);
      FUN_10002350(&local_150,0x110201300100,uVar14);
      FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,199);
      *(int *)(local_13c + (int)local_150 + -4) =
           (int)puStack_14c + (-(int)local_150 - (int)local_13c);
      *(int *)((int)local_150 + (int)(short *)local_120 + -4) =
           (int)puStack_14c + (-(int)local_150 - (int)(short *)local_120);
      FUN_10012d60(&local_110,uVar14);
      goto LAB_10015850;
    case 0x11:
      uVar16 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                            pbVar4[0xd],0);
      FUN_10012d90(&local_110,uVar16);
      uVar12 = FUN_10012968(&local_110,&local_150,*(undefined2 *)(pbVar4 + 3),pbVar4[8],pbVar4[0xb],
                            pbVar4[0xe],0);
      FUN_10012d90(&local_110,uVar12);
      uVar14 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10012d90(&local_110,uVar14);
      uVar13 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10002350(&local_150,0x290200100100,uVar14,uVar16,0,0);
      FUN_10002350(&local_150,0xc60200130700,uVar14,local_110._4_4_ | 0x80000000,0x170,0x19);
      FUN_10002350(&local_150,0x290200100100,uVar13,uVar14,0,0);
      FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,0xe2);
      FUN_10002350(&local_150,0xc60200130700,uVar13,uVar13,0,0x9b);
      FUN_10002350(&local_150,0x590200100700,uVar14,uVar12,0,0);
      FUN_10002350(&local_150,0x580200100700,uVar14,uVar13,0,0);
      FUN_10012d60(&local_110,uVar14);
      goto LAB_10014d0c;
    case 0x13:
      uVar16 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                            pbVar4[0xd],0);
      FUN_10012d90(&local_110,uVar16);
      uVar14 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10002350(&local_150,0x5b0201400700,uVar14,uVar16,0,0);
      FUN_10002350(&local_150,0x5b0200100700,uVar14,uVar14,0,0);
      FUN_10002350(&local_150,0x5c0200100700,uVar14,uVar16,0,0);
      FUN_10002350(&local_150,0x570200100700,uVar14,local_110._4_4_ | 0x80000000,0x110,0);
      goto LAB_10015850;
    case 0x14:
      uVar25 = 0;
      goto LAB_10014dec;
    case 0x15:
      uVar25 = 0;
      goto LAB_10014e08;
    case 0x16:
      uVar25 = 1;
LAB_10014dec:
      uVar20 = 1;
LAB_10014df0:
      uVar14 = FUN_100135e8(&local_110,&local_150,pbVar4,uVar20,uVar25);
      goto LAB_1001585c;
    case 0x17:
      uVar25 = 1;
LAB_10014e08:
      uVar20 = 0;
      goto LAB_10014df0;
    case 0x18:
      uVar18 = FUN_10012968(&local_110,&local_150,*(undefined2 *)pbVar1,pbVar4[7],pbVar4[10],
                            pbVar4[0xd],1);
      FUN_10002350(&local_150,0x540200100700,uVar18 & 0xffffffff,local_110._4_4_ | 0x80000000,0x70,0
                  );
      FUN_10012d90(&local_110,uVar18 & 0xffffffff);
      uVar13 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10012d90(&local_110,uVar13);
      uVar16 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10012d90(&local_110,uVar16);
      local_13c = pbVar4 + 0xe;
      local_140 = pbVar4 + 0xb;
      local_138 = pbVar4 + 8;
      local_120 = CONCAT44(local_120._4_4_,pbVar4 + 3);
      uVar19 = FUN_10012968(&local_110,&local_150,*(undefined2 *)(pbVar4 + 3),*local_138,*local_140,
                            *local_13c,0);
      FUN_10002350(&local_150,0x290200100100,uVar13,uVar19 & 0xffffffff,uVar19 >> 0x20,0);
      FUN_10002350(&local_150,0x590200100700,uVar13,uVar18 & 0xffffffff,uVar18 >> 0x20,0);
      uVar19 = FUN_10012968(&local_110,&local_150,*(short *)local_120 + 1,*local_138,*local_140,
                            *local_13c,0);
      FUN_10002350(&local_150,0x290200100100,uVar16,uVar19 & 0xffffffff,uVar19 >> 0x20,0);
      FUN_10002350(&local_150,0x590200100700,uVar16,uVar18 & 0xffffffff,uVar18 >> 0x20,0);
      FUN_10012d60(&local_110,uVar18 & 0xffffffff);
      uVar14 = FUN_100127d8(&local_110,&local_150,0xffff);
      FUN_10012d90(&local_110,uVar14);
      FUN_10002350(&local_150,0x290200100100,uVar14,uVar13,0,0);
      FUN_10002350(&local_150,0xc60200130700,uVar14,uVar16,0,0x44);
      FUN_10002350(&local_150,0xc60200130700,uVar13,uVar16,0,0xee);
      FUN_10002350(&local_150,0x580200100700,uVar14,uVar13,0,0);
      FUN_10002350(&local_150,0x290200100100,uVar13,uVar14,0,0);
      FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,0x31);
      FUN_10002350(&local_150,0x580200100700,uVar14,uVar13,0,0);
      FUN_10002350(&local_150,0xc60200130700,uVar14,uVar14,0,8);
      FUN_10012d60(&local_110,uVar13);
      uVar12 = uVar14;
LAB_10014d0c:
      FUN_10012d60(&local_110,uVar12);
LAB_10015850:
      FUN_10012d60(&local_110,uVar16);
      goto LAB_1001585c;
    }
    uVar14 = FUN_10012f58(&local_110,&local_150,pbVar4,uVar25,uVar20,0,0);
LAB_1001585c:
    if (uVar14 != 0xffffffff) {
      if (pbVar4[0x10] == 0 || pbVar4[0x10] == 0xf) {
        uVar10 = *(ushort *)(pbVar4 + 0x11);
        uVar12 = 0;
        do {
          if (auStack_f8[uVar12] == (uint)uVar10) {
            auStack_f8[uVar12] = 0xffffffff;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x10);
        auStack_f8[uVar14 & 0xff] = (uint)uVar10;
      }
      else {
        puVar2 = (ushort *)(pbVar4 + 0x11);
        FUN_10012d90(&local_110,uVar14);
        if (pbVar4[0x10] == 1) {
          uVar18 = FUN_10012910(&local_110,extraout_x1_03,*puVar2);
          FUN_10002350(&local_150,0x110201300100,uVar18 & 0xffffffff,uVar14,uVar18 >> 0x20,0);
        }
        else {
          auVar28 = FUN_100127d8(&local_110,&local_150,0xffff);
          uVar19 = auVar28._0_8_ & 0xffffffff;
          uVar18 = FUN_10012910(&local_110,auVar28._8_8_,*puVar2);
          FUN_10002350(&local_150,0x290200100100,uVar19,local_110._4_4_ | 0x80000000,
                       (ulonglong)pbVar4[0x10] << 4,0);
          FUN_10002350(&local_150,0x540200100700,uVar14,uVar19,0,0);
          FUN_10002350(&local_150,0x550200100700,uVar19,uVar18 & 0xffffffff,uVar18 >> 0x20,0);
          FUN_10002350(&local_150,0x560200100700,uVar14,uVar19,0,0);
          uVar10 = *puVar2;
          uVar12 = 0;
          do {
            if (auStack_f8[uVar12] == (uint)uVar10) {
              auStack_f8[uVar12] = 0xffffffff;
              break;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < 0x10);
          auStack_f8[uVar14 & 0xff] = (uint)uVar10;
        }
LAB_10014560:
        FUN_10012d60(&local_110,uVar14);
      }
    }
switchD_1001444c_caseD_3:
    iVar27 = iVar27 + 1;
  } while( true );
}


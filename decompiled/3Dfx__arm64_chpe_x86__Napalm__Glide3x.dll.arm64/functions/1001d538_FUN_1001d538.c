/*
 * FUN_1001d538 at 1001d538
 * undefined FUN_1001d538(void)
 * Address ranges: 1001d538-1001da53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d538(int param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint extraout_w9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar13 = 0;
  do {
    if (uVar13 == 0) {
      iVar7 = 0;
      if (*(int *)(param_1 + 0x2b1c) == 6) {
        iVar7 = param_1 + 0x2b54;
      }
    }
    else {
      iVar7 = 0;
      if ((uVar13 == 1) && (iVar7 = 0, *(int *)(param_1 + 0x2b20) == 7)) {
        iVar7 = param_1 + 0x2b68;
      }
    }
    if (iVar7 != 0) {
      FUN_1001cda0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(iVar7 + 8),
                   *(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x10),1);
    }
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar13 = uVar13 + 1;
  } while (uVar13 < 2);
  uVar13 = 0;
  do {
    if (uVar13 == 0) {
      if ((param_2 == 6) || ((param_2 == -1 && (*(int *)(param_1 + 0x2b1c) == 6)))) {
        iVar16 = 0;
        iVar7 = 0x2b54;
        uVar8 = 6;
LAB_1001d670:
        puVar1 = (undefined8 *)(param_1 + iVar7);
        if (puVar1 != (undefined8 *)0x0) {
          iVar7 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),uVar8);
          if (iVar7 == -1) {
            uVar14 = 3;
            do {
              uVar8 = (*pcVar4)();
              puVar9 = (undefined8 *)(*extraout_w11)(uVar8,uVar14);
              uStack_e8 = puVar9[1];
              local_f0 = *puVar9;
              uVar17 = puVar9[3];
              uStack_e0 = puVar9[2];
              uStack_50 = *(undefined4 *)(puVar9 + 0x14);
              uStack_c8 = puVar9[5];
              local_d0 = puVar9[4];
              uStack_b8 = puVar9[7];
              uStack_c0 = puVar9[6];
              uStack_a8 = puVar9[9];
              local_b0 = puVar9[8];
              uStack_98 = puVar9[0xb];
              uStack_a0 = puVar9[10];
              uStack_88 = puVar9[0xd];
              local_90 = puVar9[0xc];
              uStack_78 = puVar9[0xf];
              uStack_80 = puVar9[0xe];
              uStack_68 = puVar9[0x11];
              local_70 = puVar9[0x10];
              uStack_58 = puVar9[0x13];
              uStack_60 = puVar9[0x12];
              local_d8._0_4_ = (int)uVar17;
              local_d8._4_4_ = (int)((ulonglong)uVar17 >> 0x20);
              bVar5 = (int)local_d8 == local_d8._4_4_;
              local_d8 = uVar17;
              if (bVar5) goto LAB_1001d8d0;
              uVar14 = uVar14 + 1;
            } while (uVar14 < 7);
            uVar15 = 0;
            uVar12 = 3;
            uVar14 = 0xffffffff;
            do {
              uVar8 = (*pcVar4)();
              puVar9 = (undefined8 *)(*extraout_w11_00)(uVar8,uVar12);
              uStack_e8 = puVar9[1];
              local_f0 = *puVar9;
              local_d8 = puVar9[3];
              uStack_e0 = puVar9[2];
              uStack_50 = *(undefined4 *)(puVar9 + 0x14);
              uStack_c8 = puVar9[5];
              local_d0 = puVar9[4];
              uStack_b8 = puVar9[7];
              uStack_c0 = puVar9[6];
              uStack_a8 = puVar9[9];
              uVar17 = puVar9[8];
              uStack_98 = puVar9[0xb];
              uStack_a0 = puVar9[10];
              uStack_88 = puVar9[0xd];
              local_90 = puVar9[0xc];
              uStack_78 = puVar9[0xf];
              uStack_80 = puVar9[0xe];
              uStack_68 = puVar9[0x11];
              local_70 = puVar9[0x10];
              uStack_58 = puVar9[0x13];
              uStack_60 = puVar9[0x12];
              local_b0._4_4_ = (uint)((ulonglong)uVar17 >> 0x20);
              bVar5 = uVar15 <= local_b0._4_4_;
              local_b0 = uVar17;
              if ((bVar5) && (uVar10 = FUN_10024800(&local_f0), (uVar10 & 1) == 0)) {
                uVar15 = extraout_w9;
                uVar14 = uVar12;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < 7);
            if (uVar14 != 0xffffffff) {
              uVar8 = (*pcVar4)();
              puVar9 = (undefined8 *)(*extraout_w11_01)(uVar8,uVar14);
              uStack_e8 = puVar9[1];
              local_f0 = *puVar9;
              local_d8 = puVar9[3];
              uStack_e0 = puVar9[2];
              uStack_c8 = puVar9[5];
              local_d0 = puVar9[4];
              uStack_b8 = puVar9[7];
              uStack_c0 = puVar9[6];
              uVar17 = puVar9[9];
              local_b0 = puVar9[8];
              uStack_98 = puVar9[0xb];
              uStack_a0 = puVar9[10];
              uStack_88 = puVar9[0xd];
              local_90 = puVar9[0xc];
              uStack_78 = puVar9[0xf];
              uStack_80 = puVar9[0xe];
              uStack_a8._2_1_ = (byte)((ulonglong)uVar17 >> 0x10);
              uStack_68 = puVar9[0x11];
              local_70 = puVar9[0x10];
              uStack_58 = puVar9[0x13];
              uStack_60 = puVar9[0x12];
              bVar3 = uStack_a8._2_1_ >> 1;
              uStack_a8 = uVar17;
              if ((bVar3 & 1) != 0) {
                FUN_1001c4e0(*(undefined4 *)(param_1 + 0x365c),uVar14,1,0);
                FUN_100364c0(param_1,uVar14);
              }
              uVar8 = (*pcVar4)();
              (*extraout_w11_02)(uVar8,uVar14);
LAB_1001d8d0:
              iVar2 = *(int *)(puVar1 + 2);
              local_120 = *puVar1;
              iVar7 = iVar2;
              if (iVar2 == 0xff) {
                iVar7 = 0xff;
              }
              if (iVar16 == 0) {
                uVar8 = *(undefined4 *)(iVar7 * 4 + 0x100a0310);
              }
              else {
                uVar8 = 7;
              }
              if (iVar16 == 0) {
                uVar11 = *(undefined4 *)(iVar7 * 4 + 0x100a0380);
              }
              else {
                uVar11 = 7;
              }
              uStack_118 = CONCAT44(*(undefined4 *)puVar1,1);
              uStack_108 = CONCAT44(uVar8,iVar2);
              uStack_110 = CONCAT44(*(undefined4 *)puVar1,*(undefined4 *)((int)puVar1 + 4));
              local_128 = CONCAT31(local_128._1_3_,*(undefined1 *)(*(int *)(param_1 + 4) + 0x54));
              local_100 = CONCAT44(uVar11,(iVar16 + 3) * 2);
              local_f8 = local_128;
              uVar8 = (*pcVar4)();
              cVar6 = (*extraout_w11_03)(uVar8,uVar14,&local_120,iVar16);
              if (cVar6 != '\0') {
                uVar8 = (*pcVar4)();
                iVar7 = (*extraout_w11_04)(uVar8,uVar14);
                uVar8 = *(undefined4 *)(puVar1 + 1);
                *(undefined4 *)(iVar7 + 0x18) = uVar8;
                uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
                *(undefined4 *)(iVar7 + 0x1c) = uVar11;
                FUN_10036790(param_1,uVar14,uVar8,uVar11);
              }
            }
          }
        }
      }
    }
    else if ((uVar13 == 1) &&
            ((param_2 == 7 || ((param_2 == -1 && (*(int *)(param_1 + 0x2b20) == 7)))))) {
      iVar7 = 0x2b68;
      uVar8 = 7;
      iVar16 = 1;
      goto LAB_1001d670;
    }
    uVar13 = uVar13 + 1;
    if (1 < uVar13) {
      return;
    }
  } while( true );
}


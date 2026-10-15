/*
 * FUN_1001cf30 at 1001cf30
 * undefined FUN_1001cf30(void)
 * Address ranges: 1001cf30-1001d42f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cf30(int param_1,int param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  uint extraout_w9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
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
  
  uVar12 = 0;
  do {
    if (uVar12 == 0) {
      iVar6 = 0;
      if (*(int *)(param_1 + 0x29e0) == 6) {
        iVar6 = param_1 + 0x2a18;
      }
    }
    else {
      iVar6 = 0;
      if ((uVar12 == 1) && (iVar6 = 0, *(int *)(param_1 + 0x29e4) == 7)) {
        iVar6 = param_1 + 0x2a2c;
      }
    }
    if (iVar6 != 0) {
      FUN_1001c7d8(*(undefined4 *)(param_1 + 0x32dc),*(undefined4 *)(iVar6 + 8),
                   *(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10),1);
    }
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 2);
  uVar12 = 0;
  do {
    if (uVar12 == 0) {
      if ((param_2 == 6) || ((param_2 == -1 && (*(int *)(param_1 + 0x29e0) == 6)))) {
        cVar5 = '\0';
        iVar6 = 0x2a18;
        uVar7 = 6;
LAB_1001d068:
        puVar1 = (undefined8 *)(param_1 + iVar6);
        if (puVar1 != (undefined8 *)0x0) {
          iVar6 = FUN_1001c518(*(undefined4 *)(param_1 + 0x32dc),uVar7);
          if (iVar6 == -1) {
            uVar14 = 3;
            do {
              uVar7 = (*pcVar3)();
              puVar8 = (undefined8 *)(*extraout_w11)(uVar7,uVar14);
              uStack_e8 = puVar8[1];
              local_f0 = *puVar8;
              uVar15 = puVar8[3];
              uStack_e0 = puVar8[2];
              uStack_50 = *(undefined4 *)(puVar8 + 0x14);
              uStack_c8 = puVar8[5];
              local_d0 = puVar8[4];
              uStack_b8 = puVar8[7];
              uStack_c0 = puVar8[6];
              uStack_a8 = puVar8[9];
              local_b0 = puVar8[8];
              uStack_98 = puVar8[0xb];
              uStack_a0 = puVar8[10];
              uStack_88 = puVar8[0xd];
              local_90 = puVar8[0xc];
              uStack_78 = puVar8[0xf];
              uStack_80 = puVar8[0xe];
              uStack_68 = puVar8[0x11];
              local_70 = puVar8[0x10];
              uStack_58 = puVar8[0x13];
              uStack_60 = puVar8[0x12];
              local_d8._0_4_ = (int)uVar15;
              local_d8._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
              bVar4 = (int)local_d8 == local_d8._4_4_;
              local_d8 = uVar15;
              if (bVar4) goto LAB_1001d2d0;
              uVar14 = uVar14 + 1;
            } while (uVar14 < 7);
            uVar11 = 3;
            uVar13 = 0;
            uVar14 = 0xffffffff;
            do {
              uVar7 = (*pcVar3)();
              puVar8 = (undefined8 *)(*extraout_w11_00)(uVar7,uVar11);
              uStack_e8 = puVar8[1];
              local_f0 = *puVar8;
              local_d8 = puVar8[3];
              uStack_e0 = puVar8[2];
              uStack_50 = *(undefined4 *)(puVar8 + 0x14);
              uStack_c8 = puVar8[5];
              local_d0 = puVar8[4];
              uStack_b8 = puVar8[7];
              uStack_c0 = puVar8[6];
              uStack_a8 = puVar8[9];
              uVar15 = puVar8[8];
              uStack_98 = puVar8[0xb];
              uStack_a0 = puVar8[10];
              uStack_88 = puVar8[0xd];
              local_90 = puVar8[0xc];
              uStack_78 = puVar8[0xf];
              uStack_80 = puVar8[0xe];
              uStack_68 = puVar8[0x11];
              local_70 = puVar8[0x10];
              uStack_58 = puVar8[0x13];
              uStack_60 = puVar8[0x12];
              local_b0._4_4_ = (uint)((ulonglong)uVar15 >> 0x20);
              bVar4 = uVar13 <= local_b0._4_4_;
              local_b0 = uVar15;
              if ((bVar4) && (uVar9 = FUN_10023de8(&local_f0), (uVar9 & 1) == 0)) {
                uVar13 = extraout_w9;
                uVar14 = uVar11;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < 7);
            if (uVar14 != 0xffffffff) {
              uVar7 = (*pcVar3)();
              puVar8 = (undefined8 *)(*extraout_w11_01)(uVar7,uVar14);
              uStack_e8 = puVar8[1];
              local_f0 = *puVar8;
              local_d8 = puVar8[3];
              uStack_e0 = puVar8[2];
              uStack_c8 = puVar8[5];
              local_d0 = puVar8[4];
              uStack_b8 = puVar8[7];
              uStack_c0 = puVar8[6];
              uVar15 = puVar8[9];
              local_b0 = puVar8[8];
              uStack_98 = puVar8[0xb];
              uStack_a0 = puVar8[10];
              uStack_88 = puVar8[0xd];
              local_90 = puVar8[0xc];
              uStack_78 = puVar8[0xf];
              uStack_80 = puVar8[0xe];
              uStack_a8._2_1_ = (byte)((ulonglong)uVar15 >> 0x10);
              uStack_68 = puVar8[0x11];
              local_70 = puVar8[0x10];
              uStack_58 = puVar8[0x13];
              uStack_60 = puVar8[0x12];
              bVar2 = uStack_a8._2_1_ >> 1;
              uStack_a8 = uVar15;
              if ((bVar2 & 1) != 0) {
                FUN_1001bf18(*(undefined4 *)(param_1 + 0x32dc),uVar14,1,0);
                FUN_100371f0(param_1,uVar14);
              }
              uVar7 = (*pcVar3)();
              (*extraout_w11_02)(uVar7,uVar14);
LAB_1001d2d0:
              local_120 = *puVar1;
              if (cVar5 == '\0') {
                uVar7 = *(undefined4 *)(&DAT_10099c70 + *(int *)(puVar1 + 2) * 4);
              }
              else {
                uVar7 = 7;
              }
              uStack_118 = CONCAT44(*(undefined4 *)puVar1,1);
              uStack_108 = CONCAT44(uVar7,*(int *)(puVar1 + 2));
              uStack_110 = CONCAT44(*(undefined4 *)puVar1,*(undefined4 *)((int)puVar1 + 4));
              uVar7 = 9;
              if (cVar5 == '\0') {
                uVar7 = 6;
              }
              uVar10 = 7;
              if (cVar5 == '\0') {
                uVar10 = 0;
              }
              local_128 = CONCAT31(local_128._1_3_,*(undefined1 *)(*(int *)(param_1 + 4) + 0x54));
              local_100 = CONCAT44(uVar10,uVar7);
              local_f8 = local_128;
              uVar7 = (*pcVar3)();
              cVar5 = (*extraout_w11_03)(uVar7,uVar14,&local_120,cVar5);
              if (cVar5 != '\0') {
                uVar7 = (*pcVar3)();
                iVar6 = (*extraout_w11_04)(uVar7,uVar14);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                *(undefined4 *)(iVar6 + 0x18) = uVar7;
                uVar10 = *(undefined4 *)((int)puVar1 + 0xc);
                *(undefined4 *)(iVar6 + 0x1c) = uVar10;
                FUN_100374c0(param_1,uVar14,uVar7,uVar10);
              }
            }
          }
        }
      }
    }
    else if ((uVar12 == 1) &&
            ((param_2 == 7 || ((param_2 == -1 && (*(int *)(param_1 + 0x29e4) == 7)))))) {
      iVar6 = 0x2a2c;
      uVar7 = 7;
      cVar5 = '\x01';
      goto LAB_1001d068;
    }
    uVar12 = uVar12 + 1;
    if (1 < uVar12) {
      return;
    }
  } while( true );
}


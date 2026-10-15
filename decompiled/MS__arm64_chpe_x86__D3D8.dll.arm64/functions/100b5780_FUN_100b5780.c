/*
 * FUN_100b5780 at 100b5780
 * undefined FUN_100b5780(void)
 * Address ranges: 100b5780-100b59d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100b5780(int param_1,uint param_2)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  code *extraout_w11;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  uint local_110;
  int local_10c;
  int local_108;
  uint *local_104;
  int local_100;
  code *local_fc;
  uint *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_110 = param_2;
  if ((param_2 & 1) == 0) {
    FUN_100b4f00(param_1 + 0xa30,&local_f0,&local_110);
    *(uint *)(param_1 + 0x5940) = param_2;
    uVar15 = 1;
    *(undefined8 *)(param_1 + 0x4c) = uStack_e8;
    *(undefined8 *)(param_1 + 0x44) = local_f0;
    *(undefined8 *)(param_1 + 0x5c) = uStack_d8;
    *(undefined8 *)(param_1 + 0x54) = uStack_e0;
    *(undefined8 *)(param_1 + 0x6c) = uStack_c8;
    *(undefined8 *)(param_1 + 100) = local_d0;
    *(undefined8 *)(param_1 + 0x7c) = uStack_b8;
    *(undefined8 *)(param_1 + 0x74) = uStack_c0;
    *(undefined8 *)(param_1 + 0x8c) = uStack_a8;
    *(undefined8 *)(param_1 + 0x84) = local_b0;
    *(undefined8 *)(param_1 + 0x9c) = uStack_98;
    *(undefined8 *)(param_1 + 0x94) = uStack_a0;
    *(undefined8 *)(param_1 + 0xac) = uStack_88;
    *(undefined8 *)(param_1 + 0xa4) = local_90;
    *(undefined8 *)(param_1 + 0xbc) = uStack_78;
    *(undefined8 *)(param_1 + 0xb4) = uStack_80;
    *(undefined8 *)(param_1 + 0xcc) = uStack_68;
    *(undefined8 *)(param_1 + 0xc4) = local_70;
    *(undefined8 *)(param_1 + 0xdc) = uStack_58;
    *(undefined8 *)(param_1 + 0xd4) = uStack_60;
    *(undefined8 *)(param_1 + 0xec) = uStack_48;
    *(undefined8 *)(param_1 + 0xe4) = local_50;
  }
  else {
    uVar15 = 0;
    iVar11 = FUN_100bd300(param_1 + 0x58f8,param_2);
    if (iVar11 != 0) {
      uVar19 = *(undefined8 *)(iVar11 + 4);
      uVar18 = *(undefined8 *)(iVar11 + 0x1c);
      uVar15 = *(undefined8 *)(iVar11 + 0x14);
      *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(iVar11 + 0xc);
      *(undefined8 *)(param_1 + 0x44) = uVar19;
      *(undefined8 *)(param_1 + 0x5c) = uVar18;
      *(undefined8 *)(param_1 + 0x54) = uVar15;
      uVar19 = *(undefined8 *)(iVar11 + 0x24);
      uVar18 = *(undefined8 *)(iVar11 + 0x3c);
      uVar15 = *(undefined8 *)(iVar11 + 0x34);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(iVar11 + 0x2c);
      *(undefined8 *)(param_1 + 100) = uVar19;
      *(undefined8 *)(param_1 + 0x7c) = uVar18;
      *(undefined8 *)(param_1 + 0x74) = uVar15;
      uVar19 = *(undefined8 *)(iVar11 + 0x44);
      uVar18 = *(undefined8 *)(iVar11 + 0x5c);
      uVar15 = *(undefined8 *)(iVar11 + 0x54);
      *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(iVar11 + 0x4c);
      *(undefined8 *)(param_1 + 0x84) = uVar19;
      *(undefined8 *)(param_1 + 0x9c) = uVar18;
      *(undefined8 *)(param_1 + 0x94) = uVar15;
      uVar19 = *(undefined8 *)(iVar11 + 100);
      uVar18 = *(undefined8 *)(iVar11 + 0x7c);
      uVar15 = *(undefined8 *)(iVar11 + 0x74);
      *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(iVar11 + 0x6c);
      *(undefined8 *)(param_1 + 0xa4) = uVar19;
      *(undefined8 *)(param_1 + 0xbc) = uVar18;
      *(undefined8 *)(param_1 + 0xb4) = uVar15;
      uVar19 = *(undefined8 *)(iVar11 + 0x84);
      uVar18 = *(undefined8 *)(iVar11 + 0x9c);
      uVar15 = *(undefined8 *)(iVar11 + 0x94);
      *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(iVar11 + 0x8c);
      *(undefined8 *)(param_1 + 0xc4) = uVar19;
      *(undefined8 *)(param_1 + 0xdc) = uVar18;
      *(undefined8 *)(param_1 + 0xd4) = uVar15;
      uVar18 = *(undefined8 *)(iVar11 + 0xac);
      uVar15 = *(undefined8 *)(iVar11 + 0xa4);
      *(uint *)(param_1 + 0x5940) = param_2;
      psVar1 = (short *)(iVar11 + 0x16c);
      *(undefined8 *)(param_1 + 0xec) = uVar18;
      *(undefined8 *)(param_1 + 0xe4) = uVar15;
      iVar5 = *(int *)(iVar11 + 0x168);
      FUN_10120e20(&local_110);
      iVar17 = 0;
      if (*psVar1 != -1) {
        local_100 = param_1 + 0x58b0;
        local_104 = (uint *)(param_1 + 0x58b4);
        local_10c = iVar11 + 0x16e;
        local_fc = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
        local_108 = iVar5 + 0x850;
        local_f8 = local_104;
        do {
          uVar9 = psVar1[iVar17 * 2];
          uVar10 = *(ushort *)(local_10c + iVar17 * 4);
          puVar3 = (undefined8 *)(local_108 + (uint)uVar9 * 0x10);
          puVar4 = (undefined8 *)(param_1 + (uVar9 + 0x122) * 0x10);
          uVar13 = (uint)uVar9;
          uVar6 = uVar10 - uVar13 & 0x3fffffff;
          uVar16 = 0;
          if (uVar6 != 0) {
            do {
              uVar15 = *puVar3;
              uVar16 = uVar16 + 1;
              puVar3 = puVar3 + 1;
              *puVar4 = uVar15;
              puVar4 = puVar4 + 1;
            } while (uVar16 < uVar6 << 1);
          }
          uVar6 = *(uint *)(param_1 + 0x58b0);
          uVar7 = *local_104;
          uVar12 = (ulonglong)uVar7;
          uVar14 = (uint)uVar9;
          uVar16 = (uint)uVar10;
          if (uVar6 < uVar7) {
            if (uVar7 < uVar13 || uVar10 < uVar6) {
              puVar2 = (undefined4 *)(local_100 + 8);
              uVar8 = *puVar2;
              auVar20 = (*local_fc)();
              (*extraout_w11)(auVar20._0_8_ & 0xffffffff,auVar20._8_8_ & 0xffffffff,
                              uVar12 & 0xffffffff);
              *puVar2 = uVar8;
            }
            else {
              if (uVar16 < uVar7) {
                uVar16 = uVar7;
              }
              if (uVar6 < uVar13) {
                uVar14 = uVar6;
              }
            }
          }
          *(uint *)(param_1 + 0x58b0) = uVar14;
          iVar17 = iVar17 + 1;
          *local_f8 = uVar16;
        } while (psVar1[iVar17 * 2] != -1);
      }
      uVar15 = 1;
      FUN_10120ed0(&local_110);
    }
  }
  FUN_100b1930(param_1);
  return uVar15;
}


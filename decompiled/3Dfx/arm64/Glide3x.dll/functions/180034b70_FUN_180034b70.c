/*
 * FUN_180034b70 at 180034b70
 * undefined __cdecl FUN_180034b70(ushort * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, int * param_7, longlong * param_8)
 * Address ranges: 180034b70-180035287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034b70(ushort *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int *param_7,longlong *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined8 extraout_x1;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint *puVar11;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  longlong extraout_x14_02;
  uint uVar12;
  uint uVar13;
  undefined1 auVar15 [12];
  uint uVar14;
  
  uVar1 = FUN_180032ae8((longlong)param_7,(uint)*param_1,(uint)param_1[1],(uint)param_1[2],
                        (uint)param_1[3],7,1);
  uVar13 = uVar1 & 0xffff;
  uVar14 = uVar1 & 0xffff;
  piVar7 = (int *)FUN_1800324f0((longlong)param_7,uVar1 & 0xffff,7);
  if ((param_2 & 0xf0) == 0) {
    uVar6 = param_2 & 0xffff | 0x2000;
  }
  else {
    FUN_180034420(piVar7,param_8,param_2,0xa4,uVar1 & 0xffff,uVar1 & 0xffff,7,1);
    uVar6 = uVar14;
  }
  uVar12 = 0;
  if (param_5 == 0) {
    if (param_4 == 0) goto LAB_18003506c;
LAB_180034eb8:
    puVar11 = (uint *)(param_7 + 0x4f);
    puVar9 = (uint *)(param_7 + 0x57);
    puVar8 = (uint *)(param_7 + 0x5f);
    if (uVar12 == uVar14) {
      uVar13 = FUN_180032ae8((longlong)param_7,0,0,0,0,7,0);
    }
    auVar15 = FUN_1800324f0((longlong)param_7,uVar13,7);
    uVar2 = FUN_180032c00(auVar15._0_8_,auVar15._8_4_,0xa4);
    FUN_1800325f0(param_7,0,uVar6,(byte)uVar2,0,1);
    uVar6 = FUN_180032c00((longlong)param_7,uVar13,0xe4);
    uVar6 = FUN_1800596e8(param_7,(uint *)(param_7 + 0x60),param_7[0x14],(ulonglong)param_4,
                          (byte)uVar6,0,0);
    *puVar8 = uVar6;
    FUN_18005a6d8(param_8,(*puVar9 + *puVar11 + uVar6) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x20,
                  puVar11,puVar9,puVar8,(uint *)0x0);
    if (uVar12 != 0) {
      auVar15 = FUN_1800324f0((longlong)param_7,uVar1 & 0xffff,7);
      uVar6 = FUN_180032c00(auVar15._0_8_,auVar15._8_4_,0xa4);
      FUN_1800325f0(param_7,0,uVar12,(byte)uVar6,0,0);
      uVar6 = FUN_180032c00((longlong)param_7,uVar1 & 0xffff,0xa4);
      FUN_1800325f0(param_7,1,uVar13,(byte)uVar6,0,0);
      FUN_18005a6d8(param_8,(*puVar8 + *puVar9 + *puVar11) * 0x1000000 + 0x1000000 & 0x7f000000 |
                            0x3c,puVar11,puVar9,puVar8,(uint *)0x0);
    }
    uVar2 = uVar13;
    if (uVar12 != uVar14) goto LAB_18003506c;
  }
  else {
    uVar2 = uVar1 & 0xffff;
    if (uVar6 == uVar2) {
      uVar2 = FUN_180032ae8((longlong)param_7,0,0,0,0,7,0);
      uVar2 = uVar2 & 0xffff;
    }
    bVar10 = 0;
    uVar3 = FUN_180032ae8((longlong)param_7,0,0,0,0,7,0);
    uVar12 = uVar2;
    if (param_4 == 0) {
      uVar12 = uVar14;
    }
    auVar15 = FUN_1800324f0((longlong)param_7,uVar3,7);
    uVar4 = FUN_180032c00(auVar15._0_8_,auVar15._8_4_,0xa4);
    FUN_1800325f0(param_7,0,uVar6,(byte)uVar4,bVar10,1);
    uVar4 = FUN_180032c00((longlong)param_7,uVar3,0xa4);
    iVar5 = FUN_1800596e8(param_7,(uint *)(param_7 + 0x60),param_7[0x14],(ulonglong)param_6,
                          (byte)uVar4,0,0);
    param_7[0x5f] = iVar5;
    FUN_18005a6d8(param_8,(param_7[0x57] + param_7[0x4f] + iVar5) * 0x1000000 + 0x1000000U &
                          0x7f000000 | 0x50,(uint *)(param_7 + 0x4f),(uint *)(param_7 + 0x5f),
                  (uint *)(param_7 + 0x57),(uint *)0x0);
    auVar15 = FUN_1800324f0((longlong)param_7,uVar2,7);
    uVar4 = FUN_180032c00(auVar15._0_8_,auVar15._8_4_,0xa4);
    FUN_1800325f0(param_7,0,uVar6,(byte)uVar4,0,1);
    uVar4 = FUN_180032c00((longlong)param_7,uVar2,0xa4);
    iVar5 = FUN_1800596e8(param_7,(uint *)(param_7 + 0x60),param_7[0x14],(ulonglong)param_5,
                          (byte)uVar4,0,0);
    param_7[0x5f] = iVar5;
    FUN_18005a6d8(param_8,(param_7[0x57] + param_7[0x4f] + iVar5) * 0x1000000 + 0x1000000U &
                          0x7f000000 | 0x50,(uint *)(param_7 + 0x4f),(uint *)(param_7 + 0x57),
                  (uint *)(param_7 + 0x5f),(uint *)0x0);
    auVar15 = FUN_1800324f0((longlong)param_7,uVar12,7);
    uVar4 = FUN_180032c00(auVar15._0_8_,auVar15._8_4_,0xa4);
    FUN_1800325f0(param_7,0,uVar2,(byte)uVar4,0,0);
    uVar4 = FUN_180032c00((longlong)param_7,uVar12,0xa4);
    FUN_1800325f0(param_7,1,uVar3,(byte)uVar4,0,0);
    FUN_18005a6d8(param_8,(param_7[0x5f] + param_7[0x57] + param_7[0x4f]) * 0x1000000 + 0x1000000U &
                          0x7f000000 | 1,(uint *)(param_7 + 0x4f),(uint *)(param_7 + 0x57),
                  (uint *)(param_7 + 0x5f),(uint *)0x0);
    if ((uVar3 & 0xf0) == 0x80) {
      FUN_1800596b0((longlong)param_7,param_7[(ulonglong)(uVar3 & 0xf) + 0x26]);
      *(undefined4 *)(extraout_x14 + 0x98) = 0;
    }
    if (param_4 != 0) goto LAB_180034eb8;
    if (uVar2 == uVar14) goto LAB_18003506c;
  }
  if ((uVar2 & 0xf0) == 0x80) {
    FUN_1800596b0((longlong)param_7,param_7[(ulonglong)(uVar2 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14_00 + 0x98) = 0;
  }
LAB_18003506c:
  piVar7 = (int *)FUN_1800324f0((longlong)param_7,uVar1 & 0xffff,1);
  FUN_1800325f0(piVar7,0,uVar1 & 0xffff,0,0,0);
  FUN_1800325f0(param_7,1,uVar1 & 0xffff,0x55,0,0);
  uVar13 = (param_7[0x5f] + param_7[0x57] + param_7[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 | 1
  ;
  FUN_18005a6d8(param_8,uVar13,(uint *)(param_7 + 0x4f),(uint *)(param_7 + 0x57),
                (uint *)(param_7 + 0x5f),(uint *)0x0);
  FUN_1800325f0(param_7,1,uVar1 & 0xffff,0xaa,0,0);
  FUN_18005a6d8(param_8,uVar13,(uint *)(param_7 + 0x4f),(uint *)(param_7 + 0x57),
                (uint *)(param_7 + 0x5f),(uint *)0x0);
  if ((param_3 & 0xf0) == 0x10) {
    FUN_18005a6d8(param_8,(param_7[0x57] + param_7[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                          0x3b,(uint *)(param_7 + 0x4f),(uint *)(param_7 + 0x57),(uint *)0x0,
                  (uint *)0x0);
    piVar7 = (int *)FUN_1800324f0((longlong)param_7,param_3,0xf);
    FUN_1800325f0(piVar7,0,param_3,0xe4,0,0);
    FUN_1800325f0(param_7,1,uVar1 & 0xffff,0,0,0);
    puVar11 = (uint *)(param_7 + 0x5f);
    puVar9 = (uint *)(param_7 + 0x57);
    puVar8 = (uint *)(param_7 + 0x4f);
    uVar13 = (param_7[0x5f] + param_7[0x57] + param_7[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
             1;
  }
  else {
    FUN_180032a58((longlong)param_7,extraout_x1,uVar1 & 0xffff,0);
    puVar11 = (uint *)0x0;
    puVar9 = (uint *)0x0;
    puVar8 = (uint *)(param_7 + 0x57);
    uVar13 = param_7[0x57] * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d;
  }
  FUN_18005a6d8(param_8,uVar13,puVar8,puVar9,puVar11,(uint *)0x0);
  if ((uVar12 & 0xf0) == 0x80) {
    FUN_1800596b0((longlong)param_7,param_7[(ulonglong)(uVar12 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14_01 + 0x98) = 0;
  }
  if ((uVar1 & 0xf0) == 0x80) {
    FUN_1800596b0((longlong)param_7,param_7[(ulonglong)(uVar1 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14_02 + 0x98) = 0;
  }
  *(undefined1 *)(param_7 + 0x2b) = 0;
  return;
}


/*
 * FUN_180034420 at 180034420
 * undefined __cdecl FUN_180034420(int * param_1, longlong * param_2, uint param_3, byte param_4, uint param_5, uint param_6, byte param_7, byte param_8)
 * Address ranges: 180034420-1800346d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034420(int *param_1,longlong *param_2,uint param_3,byte param_4,uint param_5,
                  uint param_6,byte param_7,byte param_8)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  float fVar8;
  int iVar9;
  undefined1 auVar10 [12];
  
  uVar3 = ~(param_3 >> 0xd) & 1 | (uint)((param_3 & 0xf00) == 0x100) << 1;
  if (uVar3 == 1) {
    auVar10 = FUN_1800324f0((longlong)param_1,param_5,param_7);
    uVar3 = FUN_180032c00(auVar10._0_8_,auVar10._8_4_,(uint)param_4);
    iVar9 = FUN_1800325f0(param_1,0,extraout_w13_01,(byte)uVar3,0,0);
    bVar1 = param_4 == 0xff;
    iVar5 = 5;
    if (bVar1) {
      iVar5 = 2;
    }
    iVar6 = 0x4000;
    if (bVar1) {
      iVar6 = 0x4001;
    }
    iVar7 = 0x4006;
    if (bVar1) {
      iVar7 = iVar6;
    }
    param_1[99] = 0x437f0000;
    param_1[100] = 0x437f0000;
    param_1[0x61] = 0x437f0000;
    param_1[0x62] = 0x437f0000;
    param_1[0x6b] = iVar9;
    param_1[0x6c] = iVar9;
    param_1[0x69] = iVar9;
    param_1[0x6a] = iVar9;
LAB_1800345f0:
    param_1[0x5f] = iVar5;
    param_1[0x60] = iVar7;
    puVar4 = (uint *)(param_1 + 0x67);
    param_1[0x67] = iVar5;
    param_1[0x68] = iVar7;
    iVar5 = 10;
    if (param_4 == 0xff) {
      iVar5 = 4;
    }
    uVar3 = (iVar5 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x32;
  }
  else {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_18003463c;
      auVar10 = FUN_1800324f0((longlong)param_1,param_5,param_7);
      uVar3 = FUN_180032c00(auVar10._0_8_,auVar10._8_4_,(uint)param_4);
      fVar8 = (float)FUN_1800325f0(param_1,0,extraout_w13,(byte)uVar3,1,0);
      bVar1 = param_4 == 0xff;
      iVar5 = 5;
      if (bVar1) {
        iVar5 = 2;
      }
      iVar9 = 0x4000;
      if (bVar1) {
        iVar9 = 0x4001;
      }
      iVar7 = 0x4006;
      if (bVar1) {
        iVar7 = iVar9;
      }
      param_1[99] = -0x3c810000;
      param_1[100] = -0x3c810000;
      param_1[0x61] = -0x3c810000;
      param_1[0x62] = -0x3c810000;
      fVar8 = fVar8 + 255.0;
      param_1[0x6b] = (int)fVar8;
      param_1[0x6c] = (int)fVar8;
      param_1[0x69] = (int)fVar8;
      param_1[0x6a] = (int)fVar8;
      goto LAB_1800345f0;
    }
    auVar10 = FUN_1800324f0((longlong)param_1,param_5,param_7);
    uVar3 = FUN_180032c00(auVar10._0_8_,auVar10._8_4_,(uint)param_4);
    FUN_1800325f0(param_1,0,extraout_w13_00,(byte)uVar3,0,0);
    bVar1 = param_4 == 0xff;
    iVar5 = 5;
    if (bVar1) {
      iVar5 = 2;
    }
    iVar9 = 0x4000;
    if (bVar1) {
      iVar9 = 0x4001;
    }
    iVar6 = 0x4006;
    if (bVar1) {
      iVar6 = iVar9;
    }
    puVar4 = (uint *)0x0;
    param_1[0x5f] = iVar5;
    param_1[0x60] = iVar6;
    param_1[99] = 0x437f0000;
    param_1[100] = 0x437f0000;
    param_1[0x61] = 0x437f0000;
    param_1[0x62] = 0x437f0000;
    uVar3 = (iVar5 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000;
  }
  FUN_18005a6d8(param_2,uVar3,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                (uint *)(param_1 + 0x5f),puVar4);
  param_3 = param_5;
LAB_18003463c:
  auVar10 = FUN_1800324f0((longlong)param_1,param_6,param_7);
  bVar2 = (param_3 & 0xf00) == 0x100;
  uVar3 = FUN_180032c00(auVar10._0_8_,auVar10._8_4_,(uint)param_4);
  FUN_1800325f0(param_1,0,param_3,(byte)uVar3,bVar2,0);
  uVar3 = (param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000;
  if ((param_8 & 1) == 0) {
    uVar3 = uVar3 | 0x43;
  }
  else {
    uVar3 = uVar3 | 0x1c;
  }
  FUN_18005a6d8(param_2,uVar3,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),(uint *)0x0,
                (uint *)0x0);
  return;
}


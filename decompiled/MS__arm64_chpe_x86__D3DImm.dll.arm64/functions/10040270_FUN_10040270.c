/*
 * FUN_10040270 at 10040270
 * undefined FUN_10040270(void)
 * Address ranges: 10040270-10040733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10040270(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  undefined4 *extraout_w11;
  undefined4 *extraout_w11_00;
  undefined4 *extraout_w11_01;
  uint *extraout_w12;
  uint *extraout_w12_00;
  uint *puVar14;
  uint uVar15;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  byte local_b0;
  undefined4 local_ac;
  ushort *local_a8;
  undefined4 local_a4;
  ushort *local_a0;
  int local_9c;
  int local_98;
  ushort *local_94;
  ushort *local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_7c;
  undefined4 local_60 [8];
  
  local_9c = param_3 + 0xe4;
  uVar15 = 0;
  local_a4 = (undefined4)param_1;
  local_ac = param_4;
  local_98 = param_2;
  local_88 = param_5;
  do {
    iVar1 = param_3 + uVar15 * 0x10;
    uVar3 = *(ushort *)(local_9c + uVar15 * 0x10);
    if ((uVar3 != 0) || (*(short *)(iVar1 + 0x164) != 0)) {
      local_90 = (ushort *)(iVar1 + 0x164);
      uVar4 = *local_90;
      if ((uVar3 != (uVar4 & 0xfeff)) ||
         (bVar13 = 1, *(ushort *)(iVar1 + 0xe6) != (*(ushort *)(iVar1 + 0x166) & 0xfeff))) {
        bVar13 = 0;
      }
      local_a0 = (ushort *)(iVar1 + 0x168);
      local_94 = (ushort *)(iVar1 + 0xe8);
      if ((*local_94 == (*local_a0 & 0xfeff)) &&
         (*(ushort *)(iVar1 + 0xea) == (*(ushort *)(iVar1 + 0x16a) & 0xfeff))) {
        local_b0 = 1;
      }
      else {
        local_b0 = 0;
      }
      local_a8 = (ushort *)(iVar1 + 0xea);
      puVar14 = (uint *)(local_98 + uVar15 * 4);
      uVar12 = *puVar14 & 0x1f;
      if ((uVar12 < 0x1b) && (*(char *)(uVar12 + 0x1009e240) != '\0')) {
        if ((*local_94 != (*(ushort *)(iVar1 + 0x16a) & 0xfeff)) ||
           (bVar11 = 1, *local_a8 != (*local_a0 & 0xfeff))) {
          bVar11 = 0;
        }
        local_b0 = bVar11 | local_b0;
      }
      if (uVar12 != (*puVar14 >> 5 & 0x1f)) {
        local_b0 = 0;
      }
      local_b0 = local_b0 & bVar13;
      bVar5 = false;
      uVar12 = 0;
      do {
        bVar6 = true;
        if (bVar5) break;
        iVar2 = uVar12 * 2 + uVar15 * 0x10 + param_3;
        if (((*(ushort *)(iVar2 + 0xe6) & 0xf0) == 0x70 && uVar3 != 0) ||
           (bVar5 = false, (*(ushort *)(iVar2 + 0x166) & 0xf0) == 0x70 && uVar4 != 0)) {
          bVar5 = true;
        }
        uVar12 = uVar12 + 1;
        bVar6 = bVar5;
      } while (uVar12 < 3);
      uVar8 = 0;
      if (bVar6) {
        uVar8 = FUN_10079948(param_3,4,1);
        local_d8 = CONCAT31(local_d8._1_3_,*(short *)(iVar1 + 0xee) != 0);
        local_e0 = CONCAT31(local_e0._1_3_,*(short *)(iVar1 + 0xec) != 0);
        FUN_1003d290(local_a4,param_3,uVar15,uVar15 + 5 | 0x410100,uVar8);
        param_1 = FUN_10079a60(param_3,0);
      }
      uVar12 = 0;
      if ((((*puVar14 & 0x1f) != 0x18) && ((*puVar14 & 0x3e0) == 0x300)) &&
         ((*(ushort *)(iVar1 + 0xe4) == (*local_a0 & 0xf0) ||
          (*(ushort *)(iVar1 + 0xe4) == (*(ushort *)(iVar1 + 0x16a) & 0xf0))))) {
        param_1 = FUN_10079948(param_3,4,1);
        uVar12 = ((uint)param_1 & 0x3f) << 10 | 0xb0;
      }
      if (uVar3 != 0) {
        uVar10 = uVar12;
        if (uVar12 == 0) {
          uVar10 = (uint)*(ushort *)(iVar1 + 0xe4);
        }
        local_c8 = CONCAT22(local_c8._2_2_,*local_a8);
        local_d0 = CONCAT22(local_d0._2_2_,*local_94);
        local_d8 = CONCAT22(local_d8._2_2_,*(undefined2 *)(iVar1 + 0xe6));
        local_e0 = CONCAT22(local_e0._2_2_,*(undefined2 *)(param_3 + (uVar15 + 0xf) * 0x10));
        param_1 = FUN_1003d920(local_a4,param_3,local_ac,uVar15,*puVar14 & 0x1f,uVar8,
                               (uint)local_b0 * 8 + 7,uVar10);
      }
      if ((local_b0 == 0) && (uVar4 != 0)) {
        local_c8 = CONCAT22(local_c8._2_2_,*(undefined2 *)(iVar1 + 0x16a));
        local_d0 = CONCAT22(local_d0._2_2_,*local_a0);
        local_d8 = CONCAT22(local_d8._2_2_,*(undefined2 *)(iVar1 + 0x166));
        local_e0 = CONCAT22(local_e0._2_2_,*(undefined2 *)(param_3 + (uVar15 + 0x17) * 0x10));
        param_1 = FUN_1003d920(local_a4,param_3,local_ac,uVar15,*puVar14 >> 5 & 0x1f,uVar8,8,
                               *local_90);
      }
      uVar7 = local_ac;
      if (uVar12 != 0) {
        uVar9 = FUN_1003d5d0(param_1,local_60,param_3,local_ac,*(undefined2 *)(iVar1 + 0xe4));
        FUN_1003d680(uVar9,&local_80,param_3,uVar7);
        uStack_dc = uVar7;
        local_c8 = (uint)local_7c;
        uStack_c4 = 0;
        local_cc = local_80;
        local_d0 = 7;
        local_d4 = local_60[0];
        local_d8 = 0x36;
        local_e0 = param_3;
        FUN_1007a868(&local_e0,0x20);
        FUN_10079a60(param_3,0);
      }
      puVar14 = (uint *)(param_3 + 500);
      uVar12 = *puVar14 & (0x1010101 << (ulonglong)(uVar15 & 0x1f) ^ 0xffffffffU);
      *puVar14 = uVar12;
      if (((uVar12 & 0xff) == 0) && ((*(uint *)(param_3 + 0x204) & 0x3f00) == 0)) {
        FUN_10079a60(param_3,*(uint *)(param_3 + 0x204));
        *extraout_w11 = 0;
        puVar14 = extraout_w12;
      }
      if ((*puVar14 & 0xff0000) == 0) {
        FUN_10079a60(param_3,*(undefined4 *)(param_3 + 0x200));
        *extraout_w11_00 = 0;
        puVar14 = extraout_w12_00;
      }
      if ((*puVar14 & 0xff000000) == 0) {
        FUN_10079a60(param_3,*(undefined4 *)(param_3 + 0x1fc));
        *extraout_w11_01 = 0;
      }
      param_1 = FUN_10079a60(param_3,uVar8);
    }
    uVar15 = uVar15 + 1;
    if (7 < uVar15) {
      return 1;
    }
  } while( true );
}


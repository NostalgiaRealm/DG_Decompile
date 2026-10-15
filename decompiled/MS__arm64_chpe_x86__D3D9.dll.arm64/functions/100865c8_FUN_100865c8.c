/*
 * FUN_100865c8 at 100865c8
 * undefined FUN_100865c8(void)
 * Address ranges: 100865c8-10086acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100865c8(undefined8 param_1,int param_2,int param_3,undefined4 param_4,ulonglong param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  ulonglong uVar8;
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
  ulonglong uVar16;
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
  ushort *local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  ushort *local_94;
  ushort *local_90;
  ulonglong local_88;
  undefined4 local_80;
  byte local_7c;
  undefined4 local_60 [8];
  
  local_9c = param_3 + 0xf4;
  local_a0 = (undefined4)param_1;
  uVar15 = 0;
  local_ac = param_4;
  local_98 = param_2;
  local_88 = param_5;
  do {
    iVar1 = param_3 + uVar15 * 0x10;
    uVar3 = *(ushort *)(local_9c + uVar15 * 0x10);
    if ((uVar3 != 0) || (*(short *)(iVar1 + 0x174) != 0)) {
      local_90 = (ushort *)(iVar1 + 0x174);
      uVar4 = *local_90;
      if ((uVar3 != (uVar4 & 0xfeff)) ||
         (bVar13 = 1, *(ushort *)(iVar1 + 0xf6) != (*(ushort *)(iVar1 + 0x176) & 0xfeff))) {
        bVar13 = 0;
      }
      local_a4 = (ushort *)(iVar1 + 0x178);
      local_94 = (ushort *)(iVar1 + 0xf8);
      if ((*local_94 == (*local_a4 & 0xfeff)) &&
         (*(ushort *)(iVar1 + 0xfa) == (*(ushort *)(iVar1 + 0x17a) & 0xfeff))) {
        local_b0 = 1;
      }
      else {
        local_b0 = 0;
      }
      local_a8 = (ushort *)(iVar1 + 0xfa);
      puVar14 = (uint *)(local_98 + uVar15 * 4);
      uVar12 = *puVar14 & 0x1f;
      if ((uVar12 < 0x1b) && (*(char *)(uVar12 + 0x10162260) != '\0')) {
        if ((*local_94 != (*(ushort *)(iVar1 + 0x17a) & 0xfeff)) ||
           (bVar11 = 1, *local_a8 != (*local_a4 & 0xfeff))) {
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
        if (((*(ushort *)(iVar2 + 0xf6) & 0xf0) == 0x70 && uVar3 != 0) ||
           (bVar5 = false, (*(ushort *)(iVar2 + 0x176) & 0xf0) == 0x70 && uVar4 != 0)) {
          bVar5 = true;
        }
        uVar12 = uVar12 + 1;
        bVar6 = bVar5;
      } while (uVar12 < 3);
      uVar16 = 0;
      if (bVar6) {
        uVar7 = 0;
        if ((((uint)((local_88 & 0xffffffffffff) >> ((ulonglong)(uVar15 * 3) & 0x3f)) & 7) - 5 < 2)
           && ((local_88 >> 0x32 & 1) != 0)) {
          uVar7 = FUN_10121590(param_3,4,1);
        }
        uVar8 = FUN_10121590(param_3,4,1);
        uVar16 = uVar8 & 0xffffffff;
        local_d8 = CONCAT31(local_d8._1_3_,*(short *)(iVar1 + 0xfe) != 0);
        local_e0 = CONCAT31(local_e0._1_3_,*(short *)(iVar1 + 0xfc) != 0);
        FUN_100829b0(uVar8,param_3,uVar15,uVar15 + 5 | 0x410100,uVar16,uVar7,local_ac,local_88);
        param_1 = FUN_10121648(param_3,uVar7);
      }
      uVar12 = 0;
      if ((((*puVar14 & 0x1f) != 0x18) && ((*puVar14 & 0x3e0) == 0x300)) &&
         ((*(ushort *)(iVar1 + 0xf4) == (*local_a4 & 0xf0) ||
          (*(ushort *)(iVar1 + 0xf4) == (*(ushort *)(iVar1 + 0x17a) & 0xf0))))) {
        param_1 = FUN_10121590(param_3,4,1);
        uVar12 = ((uint)param_1 & 0x3f) << 10 | 0xb0;
      }
      if (uVar3 != 0) {
        uVar10 = uVar12;
        if (uVar12 == 0) {
          uVar10 = (uint)*(ushort *)(iVar1 + 0xf4);
        }
        local_c8 = CONCAT22(local_c8._2_2_,*local_a8);
        local_d0 = CONCAT22(local_d0._2_2_,*local_94);
        local_d8 = CONCAT22(local_d8._2_2_,*(undefined2 *)(iVar1 + 0xf6));
        local_e0 = CONCAT22(local_e0._2_2_,*(undefined2 *)(param_3 + (uVar15 + 0x10) * 0x10));
        param_1 = FUN_10083160(local_a0,param_3,local_ac,uVar15,*puVar14 & 0x1f,uVar16,
                               (uint)local_b0 * 8 + 7,uVar10);
      }
      if ((local_b0 == 0) && (uVar4 != 0)) {
        local_c8 = CONCAT22(local_c8._2_2_,*(undefined2 *)(iVar1 + 0x17a));
        local_d0 = CONCAT22(local_d0._2_2_,*local_a4);
        local_d8 = CONCAT22(local_d8._2_2_,*(undefined2 *)(iVar1 + 0x176));
        local_e0 = CONCAT22(local_e0._2_2_,*(undefined2 *)(param_3 + (uVar15 + 0x18) * 0x10));
        param_1 = FUN_10083160(local_a0,param_3,local_ac,uVar15,*puVar14 >> 5 & 0x1f,uVar16,8,
                               *local_90);
      }
      uVar7 = local_ac;
      if (uVar12 != 0) {
        uVar9 = FUN_10082d68(param_1,local_60,param_3,local_ac,*(undefined2 *)(iVar1 + 0xf4));
        FUN_10082e80(uVar9,&local_80,param_3,uVar7,0xffffffff,0xffffffff,uVar12,0);
        uStack_dc = uVar7;
        local_c8 = (uint)local_7c;
        uStack_c4 = 0;
        local_cc = local_80;
        local_d0 = 7;
        local_d4 = local_60[0];
        local_d8 = 0x36;
        local_e0 = param_3;
        FUN_10122a88(&local_e0,0x20);
        FUN_10121648(param_3,0);
      }
      puVar14 = (uint *)(param_3 + 0x204);
      uVar12 = *puVar14 & (0x1010101 << (ulonglong)(uVar15 & 0x1f) ^ 0xffffffffU);
      *puVar14 = uVar12;
      if (((uVar12 & 0xff) == 0) && ((*(uint *)(param_3 + 0x214) & 0x3f00) == 0)) {
        FUN_10121648(param_3,*(uint *)(param_3 + 0x214));
        *extraout_w11 = 0;
        puVar14 = extraout_w12;
      }
      if ((*puVar14 & 0xff0000) == 0) {
        FUN_10121648(param_3,*(undefined4 *)(param_3 + 0x210));
        *extraout_w11_00 = 0;
        puVar14 = extraout_w12_00;
      }
      if ((*puVar14 & 0xff000000) == 0) {
        FUN_10121648(param_3,*(undefined4 *)(param_3 + 0x20c));
        *extraout_w11_01 = 0;
      }
      param_1 = FUN_10121648(param_3,uVar16);
    }
    uVar15 = uVar15 + 1;
    if (7 < uVar15) {
      return 1;
    }
  } while( true );
}


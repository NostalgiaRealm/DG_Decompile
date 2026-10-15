/*
 * FUN_10050530 at 10050530
 * undefined FUN_10050530(void)
 * Address ranges: 10050530-10050b2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_10050530(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,int param_6
            ,int *param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  undefined8 uVar11;
  int *local_110;
  undefined1 local_10c;
  undefined4 *local_108;
  int *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined1 *puStack_f8;
  undefined4 *local_f4;
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
  
  puVar1 = param_1 + 0x277;
  *puVar1 = 0;
  param_1[0x278] = 0;
  *(undefined8 *)(param_1 + 0x27b) = 0;
  *(undefined8 *)(param_1 + 0x279) = 0;
  *(undefined8 *)(param_1 + 0x27f) = 0;
  *(undefined8 *)(param_1 + 0x27d) = 0;
  *(undefined8 *)(param_1 + 0x283) = 0;
  *(undefined8 *)(param_1 + 0x281) = 0;
  *(undefined8 *)(param_1 + 0x287) = 0;
  *(undefined8 *)(param_1 + 0x285) = 0;
  *(undefined8 *)(param_1 + 0x28b) = 0;
  *(undefined8 *)(param_1 + 0x289) = 0;
  *(undefined8 *)(param_1 + 0x28f) = 0;
  *(undefined8 *)(param_1 + 0x28d) = 0;
  *(undefined8 *)(param_1 + 0x293) = 0;
  *(undefined8 *)(param_1 + 0x291) = 0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_110 = param_7;
  local_104 = (int *)param_3;
  local_fc = (undefined4 *)param_8;
  if (param_4 == 0) {
    local_100 = (undefined4 *)0x0;
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    local_100 = (undefined4 *)(*extraout_w11)(param_4);
  }
  piVar3 = local_104;
  local_108 = *(undefined4 **)((int)local_104 + 0xc);
  (*pcVar2)();
  cVar5 = (*extraout_w11_00)(piVar3);
  local_10c = cVar5 == '\0';
  iVar8 = (int)local_108 + 0x7c;
  bVar4 = local_108 != (undefined4 *)0x0;
  local_108 = (undefined4 *)0;
  if (bVar4) {
    local_108 = (undefined4 *)iVar8;
  }
  (*pcVar2)();
  uVar7 = (*extraout_w11_01)(piVar3);
  FUN_10001810(param_1,uVar7,local_108,param_4,local_100,local_110,local_fc,local_10c);
  *param_1 = &PTR_FUN_1009c98c;
  local_100 = param_1 + 0x297;
  local_108 = param_1 + 0x295;
  *local_100 = 0;
  param_1[0x296] = param_6;
  *local_108 = 0;
  uVar11 = *param_2;
  local_fc = (undefined4 *)((int)param_1 + 0xa86);
  *(undefined8 *)(param_1 + 0x29a) = param_2[1];
  *(undefined8 *)(param_1 + 0x298) = uVar11;
  local_110 = param_1 + 0x29c;
  *local_110 = (int)piVar3;
  local_104 = param_1 + 0x29d;
  *local_104 = param_4;
  *(undefined8 *)(param_1 + 0x29e) = 0;
  param_1[0x2a0] = param_5;
  *local_fc = 0x1010101;
  puStack_f8 = (undefined1 *)((int)param_1 + 0xa87);
  local_f4 = param_1 + 0x2a2;
  *(undefined1 *)(param_1 + 0x2a1) = 0;
  *(undefined8 *)(param_1 + 0x545) = 0;
  *(undefined8 *)(param_1 + 0x547) = 0;
  *(undefined8 *)(param_1 + 0x549) = 0;
  *(undefined8 *)(param_1 + 0x54b) = 0;
  FUN_1005e370(param_1 + 0x54e);
  *(undefined2 *)(param_1 + 0x5d5) = 0x101;
  *(undefined8 *)(param_1 + 0x5ee) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f2) = 0;
  *(undefined8 *)(param_1 + 0x5f4) = 0;
  FUN_10058fb0(puVar1,&DAT_1009c5d0,0);
  uVar7 = (*pcVar2)();
  cVar5 = (*extraout_w11_02)(uVar7);
  if (cVar5 == '\0') {
    puVar9 = &DAT_1009c4b0;
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = local_108;
    if (param_4 != 0) {
      puVar10 = (undefined4 *)(*local_104 + 0xc);
    }
    FUN_10058fb0(puVar1,&DAT_1009c480,puVar10);
    puVar10 = local_108;
    if (param_4 != 0) {
      puVar10 = (undefined4 *)(*local_104 + 0xc);
    }
    FUN_10058fb0(puVar1,&DAT_1009c490,puVar10);
    puVar10 = local_108;
    if (param_4 != 0) {
      puVar10 = (undefined4 *)(*local_104 + 0xc);
    }
    puVar9 = &DAT_1009c4a0;
  }
  FUN_10058fb0(puVar1,puVar9,puVar10);
  if (param_5 != 0) {
    (*pcVar2)();
    (*extraout_w11_03)(param_5);
  }
  iVar8 = FUN_10081e90(param_2,&DAT_1009c480,0x10);
  if (iVar8 == 0) {
    param_1[1] = &DAT_100a2f20;
    param_1[2] = &DAT_100a33f0;
    puVar9 = &DAT_100a3520;
LAB_1005096c:
    *local_100 = puVar9;
    param_1[0x270] = param_1 + 0x531;
    param_1[0x271] = param_1 + 0x532;
    param_1[0x272] = param_1 + 0x533;
  }
  else {
    iVar8 = FUN_10081e90(param_2,&DAT_1009c490,0x10);
    if (iVar8 != 0) {
      iVar8 = FUN_10081e90(param_2,&DAT_1009c4a0,0x10);
      if (iVar8 != 0) {
        iVar8 = FUN_10081e90(param_2,&DAT_1009c4b0,0x10);
        if (iVar8 == 0) {
          param_1[1] = &DAT_100a4210;
          param_1[2] = &DAT_100a46e0;
          *puStack_f8 = 0;
          *(undefined1 *)local_fc = 0;
          *(undefined1 *)local_f4 = 0;
        }
        goto LAB_10050a48;
      }
      param_1[1] = &DAT_100a3bc0;
      param_1[2] = &DAT_100a4090;
      puVar9 = &DAT_100a41c0;
      goto LAB_1005096c;
    }
    param_1[1] = &DAT_100a3570;
    param_1[0x270] = param_1 + 0x531;
    param_1[0x271] = param_1 + 0x532;
    param_1[0x272] = param_1 + 0x533;
    param_1[2] = &DAT_100a3a40;
    *local_100 = &DAT_100a3b70;
  }
  *(undefined1 *)(param_1 + 0x2a1) = 1;
  local_110 = (int *)0x1c4;
  FUN_10059b10(param_1 + 0x250,&local_f0,&local_110);
  *(undefined8 *)(param_1 + 0x566) = uStack_e8;
  *(undefined8 *)(param_1 + 0x564) = local_f0;
  *(undefined8 *)(param_1 + 0x56a) = uStack_d8;
  *(undefined8 *)(param_1 + 0x568) = uStack_e0;
  *(undefined8 *)(param_1 + 0x56e) = uStack_c8;
  *(undefined8 *)(param_1 + 0x56c) = local_d0;
  *(undefined8 *)(param_1 + 0x572) = uStack_b8;
  *(undefined8 *)(param_1 + 0x570) = uStack_c0;
  *(undefined8 *)(param_1 + 0x576) = uStack_a8;
  *(undefined8 *)(param_1 + 0x574) = local_b0;
  *(undefined8 *)(param_1 + 0x57a) = uStack_98;
  *(undefined8 *)(param_1 + 0x578) = uStack_a0;
  *(undefined8 *)(param_1 + 0x57e) = uStack_88;
  *(undefined8 *)(param_1 + 0x57c) = local_90;
  *(undefined8 *)(param_1 + 0x582) = uStack_78;
  *(undefined8 *)(param_1 + 0x580) = uStack_80;
  *(undefined8 *)(param_1 + 0x586) = uStack_68;
  *(undefined8 *)(param_1 + 0x584) = local_70;
  *(undefined8 *)(param_1 + 0x58a) = uStack_58;
  *(undefined8 *)(param_1 + 0x588) = uStack_60;
  *(undefined8 *)(param_1 + 0x58e) = uStack_48;
  *(undefined8 *)(param_1 + 0x58c) = local_50;
LAB_10050a48:
  *(undefined8 *)(param_1 + 0x537) = 0;
  *(undefined8 *)(param_1 + 0x535) = 0;
  *(undefined8 *)(param_1 + 0x53b) = 0;
  *(undefined8 *)(param_1 + 0x539) = 0;
  *(undefined8 *)(param_1 + 0x53f) = 0;
  *(undefined8 *)(param_1 + 0x53d) = 0;
  *(undefined8 *)(param_1 + 0x543) = 0;
  *(undefined8 *)(param_1 + 0x541) = 0;
  *(undefined8 *)(param_1 + 0x59f) = 0;
  *(undefined8 *)(param_1 + 0x59d) = 0;
  *(undefined8 *)(param_1 + 0x5a3) = 0;
  *(undefined8 *)(param_1 + 0x5a1) = 0;
  *(undefined8 *)(param_1 + 0x5a7) = 0;
  *(undefined8 *)(param_1 + 0x5a5) = 0;
  *(undefined8 *)(param_1 + 0x5ab) = 0;
  *(undefined8 *)(param_1 + 0x5a9) = 0;
  *(undefined8 *)(param_1 + 0x5af) = 0;
  *(undefined8 *)(param_1 + 0x5ad) = 0;
  *(undefined8 *)(param_1 + 0x5b3) = 0;
  *(undefined8 *)(param_1 + 0x5b1) = 0;
  *(undefined8 *)(param_1 + 0x5b7) = 0;
  *(undefined8 *)(param_1 + 0x5b5) = 0;
  *(undefined8 *)(param_1 + 0x5bb) = 0;
  *(undefined8 *)(param_1 + 0x5b9) = 0;
  *(undefined8 *)(param_1 + 0x5bf) = 0;
  *(undefined8 *)(param_1 + 0x5bd) = 0;
  *(undefined8 *)(param_1 + 0x5c3) = 0;
  *(undefined8 *)(param_1 + 0x5c1) = 0;
  *(undefined8 *)(param_1 + 0x5c7) = 0;
  *(undefined8 *)(param_1 + 0x5c5) = 0;
  *(undefined8 *)(param_1 + 0x5cb) = 0;
  *(undefined8 *)(param_1 + 0x5c9) = 0;
  *(undefined8 *)(param_1 + 0x5cf) = 0;
  *(undefined8 *)(param_1 + 0x5cd) = 0;
  *(undefined8 *)(param_1 + 0x5d3) = 0;
  *(undefined8 *)(param_1 + 0x5d1) = 0;
  if (((*(uint *)(param_6 + 0x5c) >> 0x14 & 1) == 0) ||
     ((*(uint *)(param_6 + 0x94) >> 0x14 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x227) = uVar6;
  *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_6 + 0x135);
  if (param_1[10] == 0) {
    uVar6 = 0;
  }
  else {
    uVar7 = (*pcVar2)();
    uVar6 = (*extraout_w11_04)(uVar7);
  }
  *(undefined1 *)(param_1 + 0x3f) = uVar6;
  return param_1;
}


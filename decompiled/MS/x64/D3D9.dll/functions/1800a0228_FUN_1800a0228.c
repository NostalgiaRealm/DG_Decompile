/*
 * FUN_1800a0228 at 1800a0228
 * undefined __fastcall FUN_1800a0228(longlong param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 1800a0228-1800a08bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0228(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  char cVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  uint local_res8 [2];
  uint local_res10;
  int local_res18;
  int local_res20;
  uint in_stack_fffffffffffffdf0;
  float local_128 [3];
  float local_11c;
  undefined8 local_118;
  float local_110;
  float local_10c;
  uint local_108;
  undefined4 local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98;
  longlong local_88;
  longlong *local_80;
  longlong local_78 [7];
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  iVar13 = param_3 * *(int *)(param_1 + 0x3c) + param_2;
  if (iVar1 == 1) {
    uVar9 = 0xf;
    uVar14 = 0x22;
  }
  else if (iVar1 == 2) {
    uVar9 = 0x10;
    uVar14 = 0x23;
  }
  else if (iVar1 == 4) {
    uVar9 = 0x11;
    uVar14 = 0x24;
  }
  else if (iVar1 == 8) {
    uVar9 = 0x12;
    uVar14 = 0x25;
  }
  else if (iVar1 == 0x10) {
    uVar9 = 0x13;
    uVar14 = 0x26;
  }
  else {
    uVar9 = 0xffffffff;
    uVar14 = 0xffffffff;
  }
  local_res18 = param_3;
  local_res20 = iVar13;
  local_108 = param_2;
  local_fc = param_2;
  if (param_4 != 2) {
    if (param_4 != 1) {
      return;
    }
    lVar10 = *(longlong *)(param_1 + 0x7c);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(param_1 + 0x74);
    }
    local_res8[0] = *(uint *)(param_1 + 0x188);
    plVar6 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),&local_88,
                           *(uint *)(param_1 + 0x174),iVar13);
    plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),local_78,
                           *(uint *)(param_1 + 0x8c),0);
    local_b0 = *(undefined8 *)(param_1 + 0x154);
    lVar3 = *(longlong *)(param_1 + 0x130);
    uVar14 = *(uint *)(param_1 + 0x2c);
    cVar11 = '\0';
    uVar5 = local_res10 >> 8;
    local_res10 = local_res10 & 0xffffff00;
    local_11c = (float)*(uint *)(param_1 + 0x19c);
    local_128[2] = (float)*(uint *)(param_1 + 0x198);
    if (uVar9 < 0x24) {
      if (((uVar9 == 4) || (uVar9 == 5)) || ((uVar9 == 6 || (uVar9 == 7)))) goto LAB_1800a07c9;
      if (uVar9 == 0x22) goto LAB_1800a0789;
    }
    else if ((((uVar9 == 0x24) || (uVar9 == 0x25)) || (uVar9 == 0x26)) || (uVar9 == 0x27)) {
LAB_1800a0789:
      local_res10 = CONCAT31((int3)uVar5,1);
    }
    in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffff00;
    FUN_1800aa2e0(lVar3,uVar14,0,0,0,0,'\0','\0',0);
    cVar11 = (char)local_res10;
LAB_1800a07c9:
    local_f8 = local_res18;
    local_98 = local_res8[0];
    local_128[0] = 0.0;
    local_128[1] = 0.0;
    local_118 = 0;
    local_104 = 0xffffffff;
    local_100 = local_res20;
    local_f4 = local_res20;
    local_f0 = 0;
    local_e8 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_e0 = 0;
    local_d8 = 0;
    if (plVar8 == (longlong *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = *plVar8;
    }
    local_b8 = 0;
    if (plVar6 == (longlong *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = *plVar6;
    }
    local_110 = local_128[2];
    local_10c = local_11c;
    local_d0 = lVar10;
    FUN_180094c50(lVar3,local_128,uVar14,uVar14,uVar9,cVar11,'\0',
                  in_stack_fffffffffffffdf0 & 0xffffff00);
    pbVar4 = (byte *)(param_1 + 0x250 + (ulonglong)(param_2 >> 6) * 8 +
                     ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
    *pbVar4 = *pbVar4 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x7c);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x74);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x23c);
  plVar6 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),local_78,
                         *(uint *)(param_1 + 0x228),iVar13);
  local_80 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_88,
                           *(uint *)(param_1 + 0x8c),0);
  lVar3 = *(longlong *)(param_1 + 0x130);
  local_b0 = *(undefined8 *)(param_1 + 0x208);
  cVar11 = '\0';
  uVar5 = local_res10 >> 8;
  local_res10 = local_res10 & 0xffffff00;
  local_10c = (float)*(uint *)(param_1 + 0x19c);
  local_110 = (float)*(uint *)(param_1 + 0x198);
  local_11c = (float)*(uint *)(param_1 + 0x28);
  local_128[2] = (float)*(uint *)(param_1 + 0x24);
  local_res8[0] = *(uint *)(param_1 + 0x2c);
  if (uVar9 < 0x24) {
    if ((((uVar9 == 4) || (uVar9 == 5)) || (uVar9 == 6)) || (uVar9 == 7)) goto LAB_1800a040a;
    if (uVar9 == 0x22) goto LAB_1800a03c5;
  }
  else if (((uVar9 == 0x24) || (uVar9 == 0x25)) || ((uVar9 == 0x26 || (uVar9 == 0x27)))) {
LAB_1800a03c5:
    local_res10 = CONCAT31((int3)uVar5,1);
  }
  in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffff00;
  FUN_1800aa2e0(lVar3,local_res8[0],0,0,0,0,'\0','\0',0);
  cVar11 = (char)local_res10;
LAB_1800a040a:
  local_f8 = local_res18;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_118 = 0;
  local_104 = 0xffffffff;
  local_f0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_80 == (longlong *)0x0) {
    local_c0 = 0;
  }
  else {
    local_c0 = *local_80;
  }
  local_b8 = 0;
  if (plVar6 == (longlong *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = *plVar6;
  }
  local_100 = iVar13;
  local_f4 = iVar13;
  local_d0 = lVar10;
  local_98 = uVar2;
  FUN_180094c50(lVar3,local_128,local_res8[0],local_res8[0],uVar9,cVar11,'\0',
                in_stack_fffffffffffffdf0 & 0xffffff00);
  puVar12 = &DAT_1800fec18;
  if ((((&DAT_1800fec18)[*(uint *)(param_1 + 0x2c)] != '\0') &&
      (uVar7 = FUN_18009f438(param_1), puVar12[uVar7 & 0xffffffff] != '\0')) &&
     (*(char *)((ulonglong)*(uint *)(param_1 + 0x20) * 0x20 + 0x6e9 + *(longlong *)(param_1 + 0x50))
      != '\0')) {
    lVar10 = *(longlong *)(param_1 + 0x7c);
    local_res10 = (*(int *)(param_1 + 0x34) + local_res18) * *(int *)(param_1 + 0x3c) + param_2;
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(param_1 + 0x74);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x23c);
    plVar6 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1940),
                           (longlong *)local_res8,*(uint *)(param_1 + 0x228),local_res20);
    plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_88,
                           *(uint *)(param_1 + 0x8c),1);
    FUN_180097a94(*(longlong *)(param_1 + 0x130),*(uint *)(param_1 + 0x2c),*(uint *)(param_1 + 0x2c)
                  ,param_2,local_res10,param_2,local_res18,local_res10,0.0,0,
                  (float)*(uint *)(param_1 + 0x24),(float)*(uint *)(param_1 + 0x28),0,0,
                  (float)*(uint *)(param_1 + 0x198),(float)*(uint *)(param_1 + 0x19c),0,0,lVar10,0,
                  *(undefined8 *)(param_1 + 0x208),(undefined8 *)&DAT_1800fe8e0,
                  (undefined8 *)&DAT_1800fe8e0,plVar8,(undefined8 *)&DAT_1800fe8e0,plVar6,0,0,uVar2,
                  '\0',uVar14,1);
  }
  return;
}


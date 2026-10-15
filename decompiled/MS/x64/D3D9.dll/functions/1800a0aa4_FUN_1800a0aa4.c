/*
 * FUN_1800a0aa4 at 1800a0aa4
 * undefined __fastcall FUN_1800a0aa4(longlong param_1, int param_2, int param_3, float param_4, float param_5, float param_6, float param_7, byte param_8)
 * Address ranges: 1800a0aa4-1800a0e66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a0aa4(longlong param_1,int param_2,int param_3,float param_4,float param_5,
                  float param_6,float param_7,byte param_8)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined4 in_stack_fffffffffffffe90;
  uint3 uVar17;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  ulonglong local_128;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int local_f8;
  undefined4 local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  longlong local_78;
  longlong local_70;
  longlong local_68 [5];
  
  cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 8) + 0x84);
  uVar12 = param_3 * *(int *)(param_1 + 0x3c) + param_2;
  uVar13 = (ulonglong)(uVar12 & 0x3f);
  uVar10 = (ulonglong)(uVar12 >> 6);
  local_128 = (ulonglong)uVar12;
  lVar4 = (longlong)uVar13 >> 3;
  bVar14 = (*(byte *)(param_1 + 0x260 + uVar10 * 8 + lVar4) >> (uVar13 & 7) & 1) != 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_1800976c4(*(longlong *)(param_1 + 0x130),1,*(longlong *)(param_1 + 0x10));
    bVar14 = (*(byte *)(param_1 + 0x270 + uVar10 * 8 + lVar4) >> (uVar13 & 7) & 1) == 0 && bVar14;
  }
  bVar11 = (param_8 ^ 1) & bVar14;
  if (*(char *)(param_1 + 0x24c) == '\0') {
    uVar9 = *(uint *)(&DAT_1800feb70 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4);
  }
  else {
    uVar9 = 1;
  }
  uVar9 = ((-(uint)(cVar1 != '\0') & 0x40 |
            ~-(uint)((&DAT_1800ff0a8)[*(uint *)(param_1 + 0x2c)] != '\0') & 0x10 | (uint)bVar11 |
           0xffe00000) << 6 | -(uint)(cVar1 != '\0') & 0x18 | uVar9 & 7) << 4 |
          *(uint *)(&DAT_1800ff0e0 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4) & 0xf;
  local_150 = *(longlong *)(param_1 + 0x7c);
  if (local_150 == 0) {
    local_150 = *(longlong *)(param_1 + 0x74);
  }
  if (bVar11 == 0) {
    local_148 = 0;
    plVar6 = &local_148;
  }
  else {
    plVar6 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_78,
                           *(uint *)(param_1 + 0x220),0);
  }
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  plVar7 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1930),&local_70,
                         *(uint *)(param_1 + 0x1d0),0);
  plVar8 = FUN_1800e1d04(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1938),local_68,
                         *(uint *)(param_1 + 0x90),uVar12);
  local_130 = *(longlong *)(param_1 + 0x130);
  local_138 = *(undefined8 *)(param_1 + 0x208);
  uVar3 = *(uint *)(param_1 + 0x2c);
  fVar16 = *(float *)(param_1 + 0x248);
  fVar15 = *(float *)(param_1 + 0x244);
  local_140 = *(undefined8 *)(param_1 + 0x1b8);
  param_8 = 0;
  if ((((uVar9 == 0x24) || (uVar9 == 0x25)) || (uVar9 == 0x26)) || (uVar9 == 0x27)) {
    param_8 = 1;
  }
  uVar17 = (uint3)((uint)in_stack_fffffffffffffe90 >> 8);
  FUN_1800aa2e0(local_130,uVar3,0,0,0,0,cVar1,cVar1,0);
  local_f0 = uVar12;
  local_e4 = uVar12;
  local_e0 = local_150;
  local_f8 = param_2;
  local_ec = param_2;
  local_c0 = local_140;
  local_114 = fVar16 * param_5;
  local_e8 = param_3;
  local_b8 = local_138;
  local_10c = fVar16 * param_7;
  local_118 = fVar15 * param_4;
  local_110 = fVar15 * param_6;
  local_108 = param_4;
  local_104 = param_5;
  local_100 = param_6;
  local_fc = param_7;
  local_f4 = 0xffffffff;
  local_d8 = 0;
  local_a0 = 0;
  local_90 = uVar2;
  local_8c = 0;
  if (plVar8 == (longlong *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = *plVar8;
  }
  local_c8 = 0;
  if (plVar7 == (longlong *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = *plVar7;
  }
  if (plVar6 == (longlong *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = *plVar6;
  }
  local_98 = 0;
  FUN_180094c50(local_130,&local_118,uVar3,uVar3,uVar9,param_8,cVar1,(uint)uVar17 << 8);
  pbVar5 = (byte *)(param_1 + 0x270 + uVar10 * 8 + lVar4);
  *pbVar5 = *pbVar5 & ~('\x01' << (uVar13 & 7));
  pbVar5 = (byte *)(param_1 + 0x250 + uVar10 * 8 + lVar4);
  *pbVar5 = *pbVar5 & ~('\x01' << (uVar13 & 7));
  pbVar5 = (byte *)(param_1 + 0x110 + uVar10 * 8 + lVar4);
  *pbVar5 = *pbVar5 | '\x01' << (uVar13 & 7);
  pbVar5 = (byte *)(param_1 + 0x260 + uVar10 * 8 + lVar4);
  *pbVar5 = *pbVar5 & ~('\x01' << (uVar13 & 7));
                    /* WARNING: Could not recover jumptable at 0x0001800a0e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetRectEmpty((LPRECT)(local_128 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x1c8)));
  return;
}


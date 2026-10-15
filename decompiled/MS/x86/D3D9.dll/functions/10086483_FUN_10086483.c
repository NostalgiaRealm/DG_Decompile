/*
 * FUN_10086483 at 10086483
 * undefined __thiscall FUN_10086483(void * this, int param_1, int param_2, float param_3, float param_4, float param_5, byte param_6)
 * Address ranges: 10086483-100867e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10086483(void *this,int param_1,int param_2,float param_3,float param_4,float param_5,
            byte param_6)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  float in_XMM3_Da;
  int local_d0;
  int local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  undefined4 local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_54;
  uint local_50;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  float *local_9;
  byte local_5;
  
  local_10 = *(void **)((int)this + 0xe0);
  local_9 = (float *)CONCAT31(local_9._1_3_,*(undefined1 *)(*(int *)((int)local_10 + 4) + 0x84));
  uVar3 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  uVar7 = uVar3 >> 5;
  local_54 = uVar3 & 0x1f;
  iVar1 = (int)local_54 >> 3;
  bVar8 = (*(byte *)((int)this + iVar1 + uVar7 * 4 + 0x1cc) >> (uVar3 & 7) & 1) != 0;
  iVar6 = *(int *)((int)this + 0x1c);
  local_50 = uVar7;
  local_18 = in_XMM3_Da;
  local_14 = uVar3;
  local_5 = bVar8;
  if (iVar6 == 0) {
    FUN_1007eed0(local_10,1,*(int *)((int)this + 8));
    iVar6 = *(int *)((int)this + 0x1c);
    bVar8 = local_5 & 1U - ((*(byte *)((int)this + iVar1 + uVar7 * 4 + 0x1d8) >> (uVar3 & 7) & 1) !=
                           0);
  }
  bVar8 = (param_6 ^ 1) & bVar8;
  if (*(char *)((int)this + 0x1bc) == '\0') {
    uVar3 = *(uint *)(&DAT_100d2940 + iVar6 * 4);
  }
  else {
    uVar3 = 1;
  }
  uVar7 = 0;
  if ((char)local_9 != '\0') {
    uVar7 = 0x40;
  }
  uVar4 = 0;
  if ((&DAT_100d2700)[iVar6] == '\0') {
    uVar4 = 0x10;
  }
  uVar5 = 0;
  if ((char)local_9 != '\0') {
    uVar5 = 0x18;
  }
  uVar3 = ((uVar7 | uVar4 | CONCAT11((char)local_9,bVar8) & 0xff | 0xffe00000) << 6 | uVar5 |
          uVar3 & 7) << 4 | *(uint *)(&DAT_100d2730 + iVar6 * 4) & 0xf;
  _param_6 = *(int *)((int)this + 0x58);
  if (_param_6 == 0) {
    _param_6 = *(int *)((int)this + 0x54);
  }
  if (bVar8 == 0) {
    local_28 = 0;
    local_1c = &local_28;
  }
  else {
    local_1c = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_c8,
                            *(uint *)((int)this + 400),0);
  }
  local_2c = *(float *)((int)this + 0x1b4) * local_18;
  local_10 = *(void **)((int)this + 0xe0);
  local_34 = *(float *)((int)this + 0x1b4) * param_4;
  local_24 = *(int *)((int)this + 0x1c);
  local_3c = *(undefined4 *)((int)this + 0x148);
  local_30 = *(float *)((int)this + 0x1b8) * param_3;
  local_40 = *(undefined4 *)((int)this + 0x184);
  local_38 = *(float *)((int)this + 0x1b8) * param_5;
  local_48 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_cc,
                          *(uint *)((int)this + 100),local_14);
  local_4c = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_d0,
                          *(uint *)((int)this + 0x154),0);
  local_44 = *(undefined4 *)((int)this + 0x7c);
  uVar7 = local_20 >> 8;
  local_20 = local_20 & 0xffffff00;
  if ((((uVar3 == 0x24) || (uVar3 == 0x25)) || (uVar3 == 0x26)) || (uVar3 == 0x27)) {
    local_20 = CONCAT31((int3)uVar7,1);
  }
  FUN_1008d81c(local_10,local_24,0,0,0,0,(char)local_9,(char)local_9,0);
  local_c4 = local_2c;
  local_c0 = local_30;
  local_bc = local_34;
  local_b8 = local_38;
  local_9c = local_14;
  local_90 = local_14;
  local_8c = _param_6;
  local_b4 = local_18;
  local_7c = local_3c;
  local_b0 = param_3;
  local_78 = local_40;
  local_ac = param_4;
  local_64 = local_44;
  local_a4 = param_1;
  local_98 = param_1;
  local_a8 = param_5;
  local_a0 = 0xffffffff;
  local_94 = param_2;
  local_88 = 0;
  local_6c = 0;
  local_60 = 0;
  local_5c = 0;
  if (local_48 == (int *)0x0) {
    local_84 = 0;
  }
  else {
    local_84 = *local_48;
  }
  local_80 = 0;
  if (local_4c == (int *)0x0) {
    local_74 = 0;
  }
  else {
    local_74 = *local_4c;
  }
  if (local_1c == (int *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = *local_1c;
  }
  local_68 = 0;
  FUN_1007cf8b(local_10,&local_c4,local_24,local_24,uVar3,(char)local_20,local_9,0.0);
  iVar6 = (int)local_54 >> 3;
  pbVar2 = (byte *)((int)this + iVar6 + local_50 * 4 + 0x1d8);
  *pbVar2 = *pbVar2 & ~('\x01' << (local_54 & 7));
  pbVar2 = (byte *)((int)this + iVar6 + local_50 * 4 + 0x1c0);
  *pbVar2 = *pbVar2 & ~('\x01' << (local_54 & 7));
  pbVar2 = (byte *)((int)this + iVar6 + local_50 * 4 + 200);
  *pbVar2 = *pbVar2 | '\x01' << (local_54 & 7);
  pbVar2 = (byte *)((int)this + iVar6 + local_50 * 4 + 0x1cc);
  *pbVar2 = *pbVar2 & ~('\x01' << (local_54 & 7));
  SetRectEmpty((LPRECT)(*(int *)((int)this + 0x150) + local_14 * 0x20 + 0x10));
  return;
}


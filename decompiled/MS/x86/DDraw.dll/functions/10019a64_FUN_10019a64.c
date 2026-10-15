/*
 * FUN_10019a64 at 10019a64
 * undefined __thiscall FUN_10019a64(void * this, int param_1, int param_2, float param_3, float param_4, float param_5, byte param_6)
 * Address ranges: 10019a64-10019e3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10019a64(void *this,int param_1,int param_2,float param_3,float param_4,float param_5,
            byte param_6)

{
  char cVar1;
  void *this_00;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float in_XMM3_Da;
  float *local_d4;
  int local_c8;
  char local_c0;
  int local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int *local_98;
  int *local_94;
  uint local_90;
  uint local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_14;
  int local_10;
  int local_c [2];
  
  cVar1 = *(char *)(*(int *)((int)*(void **)((int)this + 0xe0) + 4) + 0x84);
  local_d4 = (float *)CONCAT31(local_d4._1_3_,cVar1);
  uVar4 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  uVar10 = uVar4 >> 5;
  local_8c = uVar4 & 0x1f;
  iVar2 = (int)local_8c >> 3;
  bVar12 = (*(byte *)((int)this + iVar2 + uVar10 * 4 + 0x1cc) >> (uVar4 & 7) & 1) != 0;
  iVar9 = *(int *)((int)this + 0x1c);
  local_90 = uVar10;
  if (iVar9 == 0) {
    FUN_100122bc(*(void **)((int)this + 0xe0),1,*(int *)((int)this + 8));
    iVar9 = *(int *)((int)this + 0x1c);
    bVar12 = (bool)(bVar12 & 1U - ((*(byte *)((int)this + iVar2 + uVar10 * 4 + 0x1d8) >> (uVar4 & 7)
                                   & 1) != 0));
  }
  bVar8 = (param_6 ^ 1) & bVar12;
  if (*(char *)((int)this + 0x1bc) == '\0') {
    uVar10 = *(uint *)(&DAT_100629e8 + iVar9 * 4);
  }
  else {
    uVar10 = 1;
  }
  uVar11 = 0;
  if (cVar1 != '\0') {
    uVar11 = 0x40;
  }
  uVar5 = 0;
  if ((&DAT_10062804)[iVar9] == '\0') {
    uVar5 = 0x10;
  }
  uVar6 = 0;
  if (cVar1 != '\0') {
    uVar6 = 0x18;
  }
  uVar10 = ((uVar11 | uVar5 | CONCAT11(cVar1,bVar8) & 0xff | 0xffe00000) << 6 | uVar6 | uVar10 & 7)
           << 4 | *(uint *)(&DAT_10062890 + iVar9 * 4) & 0xf;
  local_c8 = *(int *)((int)this + 0x58);
  if (local_c8 == 0) {
    local_c8 = *(int *)((int)this + 0x54);
  }
  if (bVar8 == 0) {
    local_b8 = 0;
    piVar7 = &local_b8;
  }
  else {
    piVar7 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_14,
                          *(uint *)((int)this + 400),0);
  }
  local_b4 = *(float *)((int)this + 0x1b4) * in_XMM3_Da;
  this_00 = *(void **)((int)this + 0xe0);
  local_ac = *(float *)((int)this + 0x1b4) * param_4;
  iVar9 = *(int *)((int)this + 0x1c);
  local_a4 = *(undefined4 *)((int)this + 0x148);
  local_b0 = *(float *)((int)this + 0x1b8) * param_3;
  local_a0 = *(undefined4 *)((int)this + 0x184);
  local_a8 = *(float *)((int)this + 0x1b8) * param_5;
  local_98 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_10,
                          *(uint *)((int)this + 100),uVar4);
  local_94 = FUN_1004be7b(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),local_c,
                          *(uint *)((int)this + 0x154),0);
  local_9c = *(undefined4 *)((int)this + 0x7c);
  local_c0 = '\0';
  if ((((uVar10 == 0x24) || (uVar10 == 0x25)) || (uVar10 == 0x26)) || (uVar10 == 0x27)) {
    local_c0 = '\x01';
  }
  FUN_10020680(this_00,iVar9,0,0,0,0,cVar1,cVar1,0);
  local_88 = local_b4;
  local_84 = local_b0;
  local_80 = local_ac;
  local_7c = local_a8;
  local_50 = local_c8;
  local_40 = local_a4;
  local_74 = param_3;
  local_3c = local_a0;
  local_70 = param_4;
  local_28 = local_9c;
  local_68 = param_1;
  local_5c = param_1;
  local_6c = param_5;
  local_64 = 0xffffffff;
  local_58 = param_2;
  local_4c = 0;
  local_30 = 0;
  local_24 = 0;
  local_20 = 0;
  if (local_98 == (int *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = *local_98;
  }
  local_44 = 0;
  if (local_94 == (int *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = *local_94;
  }
  if (piVar7 == (int *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = *piVar7;
  }
  local_2c = 0;
  local_60 = uVar4;
  local_54 = uVar4;
  FUN_1001038c(this_00,&local_88,iVar9,iVar9,uVar10,local_c0,local_d4,0.0);
  iVar9 = (int)local_8c >> 3;
  pbVar3 = (byte *)((int)this + iVar9 + local_90 * 4 + 0x1d8);
  *pbVar3 = *pbVar3 & ~('\x01' << (local_8c & 7));
  pbVar3 = (byte *)((int)this + iVar9 + local_90 * 4 + 0x1c0);
  *pbVar3 = *pbVar3 & ~('\x01' << (local_8c & 7));
  pbVar3 = (byte *)((int)this + iVar9 + local_90 * 4 + 200);
  *pbVar3 = *pbVar3 | '\x01' << (local_8c & 7);
  pbVar3 = (byte *)((int)this + iVar9 + local_90 * 4 + 0x1cc);
  *pbVar3 = *pbVar3 & ~('\x01' << (local_8c & 7));
  SetRectEmpty((LPRECT)(*(int *)((int)this + 0x150) + uVar4 * 0x20 + 0x10));
  return;
}


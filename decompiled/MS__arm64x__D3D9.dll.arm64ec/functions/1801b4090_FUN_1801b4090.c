/*
 * FUN_1801b4090 at 1801b4090
 * undefined FUN_1801b4090(void)
 * Address ranges: 1801b4090-1801b43b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801b4090(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,
                 undefined8 param_5,int param_6,int param_7,char param_8,byte param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint local_c0 [2];
  uint local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 local_88;
  undefined8 local_80;
  
  uVar8 = param_9 ^ 1;
  uVar3 = uVar8 << 3;
  uVar4 = *(byte *)(param_2 + 0x68) | 0x410700;
  *(undefined4 *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x68) * 4 + 0x88) = 5;
  uVar5 = *(byte *)(param_2 + 0x69) | 0x410700;
  *(undefined4 *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x69) * 4 + 0x88) = 5;
  uVar12 = uVar4;
  iVar6 = FUN_180213760(param_2 + 0x10,4,1);
  uVar7 = FUN_180213760(param_2 + 0x10,uVar8 + 3,0);
  local_88 = 0xe4;
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_2 + 0x60);
  uVar8 = param_3 | 0x10000000;
  local_80 = 0;
  local_98 = 0;
  local_b0 = 0;
  uVar11 = uVar3 & 0xff | 7;
  local_c0[0] = uVar11;
  local_b8 = uVar8;
  local_90 = uVar12;
  FUN_180214c88(param_2 + 0x10,param_1,0xa7,iVar6,local_c0,0x48);
  local_80 = 0;
  local_98 = 0;
  uVar10 = 1;
  if (param_8 == '\x01') {
    uVar10 = 2;
  }
  local_88 = 0xe4;
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_2 + 0x60);
  local_c0[0] = uVar11;
  local_b8 = uVar8;
  local_90 = uVar5;
  local_b0._0_4_ = uVar10;
  FUN_180214c88(param_2 + 0x10,param_1,0xa7,uVar7,local_c0,0x48);
  local_a0 = 0x1e4;
  local_b0._0_4_ = 0x1e4;
  local_98 = 0;
  uVar12 = uVar3 & 0xff | 7;
  local_c0[0] = uVar12;
  local_b8 = iVar6;
  local_a8 = uVar7;
  FUN_180214c88(param_2 + 0x10,param_1,0,uVar7,local_c0,0x30);
  local_80 = 0;
  local_98 = 0;
  local_b0._0_4_ = 1;
  if (param_8 != '\x01') {
    local_b0._0_4_ = 2;
  }
  local_88 = 0xe4;
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_2 + 0x60);
  local_c0[0] = uVar12;
  local_b8 = uVar8;
  local_90 = uVar4;
  FUN_180214c88(param_2 + 0x10,param_1,0xa7,iVar6,local_c0,0x48);
  local_88 = 0xe4;
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_2 + 0x60);
  local_80 = 0;
  local_b0._0_4_ = 3;
  local_98 = 0;
  local_c0[0] = uVar12;
  local_b8 = uVar8;
  local_90 = uVar5;
  FUN_180214c88(param_2 + 0x10,param_1,0xa7,param_3,local_c0,0x48);
  local_a0 = 0x1e4;
  local_b0 = CONCAT44(local_b0._4_4_,0x1e4);
  local_98 = 0;
  local_c0[0] = uVar12;
  local_b8 = iVar6;
  local_a8 = param_3;
  FUN_180214c88(param_2 + 0x10,param_1,0,iVar6,local_c0,0x30);
  iVar1 = param_7;
  if (param_7 == 0 || param_6 != 1) {
    iVar1 = iVar6;
  }
  uVar9 = 0x55;
  if (param_8 != '\x02') {
    uVar9 = 0;
  }
  local_c0[0] = CONCAT31(local_c0[0]._1_3_,uVar9);
  FUN_1801b2b68(param_1,param_2,iVar1,(byte)uVar3 | 7,iVar6,uVar7,iVar6,param_4);
  if (param_6 != 3 && iVar1 == iVar6) {
    iVar2 = param_7;
    if (param_7 == 0) {
      iVar2 = iVar6;
    }
    FUN_1801b2908(param_1,param_2,iVar2,uVar3 & 0xff | 7,iVar6,1,param_6);
  }
  FUN_180213800(param_2 + 0x10,uVar7);
  if (iVar1 == param_7) {
    FUN_180213800(param_2 + 0x10,iVar6);
    iVar6 = param_7;
  }
  return iVar6;
}


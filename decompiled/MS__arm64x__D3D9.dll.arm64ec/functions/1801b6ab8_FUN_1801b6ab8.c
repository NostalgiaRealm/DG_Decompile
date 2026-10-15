/*
 * FUN_1801b6ab8 at 1801b6ab8
 * undefined FUN_1801b6ab8(void)
 * Address ranges: 1801b6ab8-1801b6ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801b6ab8(undefined8 param_1,uint *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_c0 [2];
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  iVar5 = param_4;
  iVar2 = FUN_180213760(param_2 + 4,4,1);
  bVar1 = *(byte *)((longlong)param_2 + 0x6d);
  local_a8 = 0;
  uVar3 = 5;
  if ((*param_2 & 0xf) != 5) {
    uVar3 = 1;
  }
  param_2[(ulonglong)bVar1 + 0x22] = uVar3;
  uVar3 = *param_2;
  if (iVar5 == 0 || param_5 != param_3) {
    iVar5 = iVar2;
  }
  *(byte *)(param_2 + 0x20) = (byte)param_2[0x20] | 3;
  local_b0 = CONCAT44(local_b0._4_4_,4);
  local_b8 = 0x210101;
  local_c0[0] = 3;
  FUN_180214c88(param_2 + 4,param_1,0x36,iVar2,local_c0,0x20);
  local_b0 = 0;
  local_a8 = 0xb4;
  local_b8 = param_2[0x17];
  local_a0 = 0;
  local_c0[0] = 4;
  FUN_180214c88(param_2 + 4,param_1,0x36,iVar2,local_c0,0x28);
  local_70 = 0;
  local_90 = 0;
  local_88 = param_2[0x17] | 0x10000000;
  local_80 = 0;
  uStack_78 = 0xb0;
  local_a0 = CONCAT44(local_a0._4_4_,0xe4);
  local_a8 = CONCAT44(local_a8._4_4_,(uint)bVar1) | 0x410700;
  local_b0 = CONCAT44(local_b0._4_4_,0xa4);
  uVar4 = ((param_6 ^ 1) & 0x1f) << 3 | 7;
  local_c0[0] = uVar4;
  local_b8 = iVar2;
  local_98 = uVar3 >> 0x10 & 1 | 0x20010600;
  FUN_180214c88(param_2 + 4,param_1,0x48,iVar5,local_c0,0x58);
  if (param_5 != param_3) {
    iVar5 = param_4;
    if (param_4 == 0) {
      iVar5 = iVar2;
    }
    FUN_1801b2908(param_1,param_2,iVar5,uVar4,iVar2,param_3,param_5);
  }
  if (iVar5 != iVar2) {
    FUN_180213800(param_2 + 4,iVar2);
  }
  return iVar5;
}


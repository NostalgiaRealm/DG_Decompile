/*
 * FUN_10015f30 at 10015f30
 * undefined FUN_10015f30(void)
 * Address ranges: 10015f30-100161fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10015f30(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 extraout_x1;
  undefined1 auVar6 [16];
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar3 = FUN_10014618(param_1,param_2,0xffff);
  FUN_10014c78(param_1,uVar3);
  auVar6 = FUN_10014cc0(param_1,extraout_x1,0xffffffff,1);
  uVar4 = auVar6._0_8_;
  local_58 = uVar4;
  uVar5 = FUN_10014cc0(param_1,auVar6._8_8_,0xffffffff,1);
  local_50[0] = uVar5;
  FUN_10002470(param_2,0x7e0201400500,uVar4 & 0xffffffff,param_3,0,0);
  FUN_10002470(param_2,0x890200000210,uVar5 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,8,0);
  FUN_10002470(param_2,0x28c10200030010,uVar4 & 0xffffffff,0xffffffff,0,0x17);
  FUN_10002470(param_2,0x20810200012010,uVar4 & 0xffffffff,0xffffffff,0,0xff);
  FUN_10002470(param_2,0x570200100700,uVar3,uVar3,0,0);
  FUN_10002470(param_2,0x28810200012010,uVar4 & 0xffffffff,0xffffffff,0,0x7f);
  uVar1 = auVar6._0_4_ & 0xff;
  FUN_10002470(param_2,0x8d0200000000,uVar4 & 0xffffffff,uVar1 | 0x80000000,1,0);
  FUN_10002470(param_2,0x720100030000,0xffffffff,0xffffffff,0,0);
  iVar2 = param_2[1] - *param_2;
  FUN_10002470(param_2,0x2a0201300700,uVar3,uVar4 & 0xffffffff,0,0);
  uVar1 = (uint)uVar5 & 0xff | (uVar1 | 0xffc00200) << 8;
  FUN_10002470(param_2,0x5e0201300700,param_3,uVar1,0,0);
  *(char *)(*param_2 + iVar2 + -1) = ((char)param_2[1] - (char)*param_2) - (char)iVar2;
  FUN_10002470(param_2,0x590201300700,param_3,*(uint *)(param_1 + 4) | 0x80000000,0x1a0,0);
  FUN_10002470(param_2,0x890200000210,uVar5 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,0,0);
  FUN_10002470(param_2,0x2d0201300700,uVar4 & 0xffffffff,param_3,0,0);
  FUN_10002470(param_2,0x580201300700,uVar3,uVar1,0,0);
  FUN_10002470(param_2,0xc60200130700,uVar3,uVar3,0,0);
  FUN_10014dd8(param_1,param_2,&local_58);
  FUN_10014dd8(param_1,param_2,local_50);
  FUN_10014c48(param_1,uVar3);
  return uVar3;
}


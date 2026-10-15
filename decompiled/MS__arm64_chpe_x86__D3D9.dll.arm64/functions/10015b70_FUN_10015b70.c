/*
 * FUN_10015b70 at 10015b70
 * undefined FUN_10015b70(void)
 * Address ranges: 10015b70-10015eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10015b70(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 extraout_x1;
  undefined1 auVar7 [16];
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar3 = FUN_10014618(param_1,param_2,0xffff);
  FUN_10014c78(param_1,uVar3);
  uVar4 = FUN_10014618(param_1,param_2,0xffff);
  FUN_10014c78(param_1,uVar4);
  auVar7 = FUN_10014cc0(param_1,extraout_x1,0xffffffff,1);
  uVar5 = auVar7._0_8_;
  local_58 = uVar5;
  uVar6 = FUN_10014cc0(param_1,auVar7._8_8_,0xffffffff,1);
  local_50[0] = uVar6;
  FUN_10002470(param_2,0x570200100700,uVar3,uVar3,0,0);
  FUN_10002470(param_2,0x890200000210,uVar6 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,8,0);
  FUN_10002470(param_2,0xc20201330700,uVar3,param_3,0,6);
  puVar1 = (uint *)(param_1 + 4);
  FUN_10002470(param_2,0x540200100700,param_3,*puVar1 | 0x80000000,0x100,0);
  FUN_10002470(param_2,0x2d0201300700,uVar5 & 0xffffffff,param_3,0,0);
  FUN_10002470(param_2,0x2a0201300700,uVar4,uVar5 & 0xffffffff,0,0);
  FUN_10002470(param_2,0xf8810200012010,uVar5 & 0xffffffff,0xffffffff,0,0x400);
  FUN_10002470(param_2,0x5c0201300700,param_3,uVar4,0,0);
  FUN_10002470(param_2,0x470200100000,uVar5 & 0xffffffff,*puVar1 | 0x80000000,0x1d0,0);
  FUN_10002470(param_2,0x590201300700,param_3,*puVar1 | 0x80000000,0x1a0,0);
  uVar2 = (uint)uVar6 & 0xff | (auVar7._0_4_ & 0xff | 0xffc00200) << 8;
  FUN_10002470(param_2,0x110201300100,uVar4,uVar2,0,0);
  FUN_10002470(param_2,0x2d0201300700,uVar5 & 0xffffffff,param_3,0,0);
  FUN_10002470(param_2,0x890200000210,uVar6 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,4,0);
  FUN_10002470(param_2,0x590201300700,uVar4,uVar2,0,0);
  FUN_10002470(param_2,0x530201300700,param_3,uVar4,0,0);
  FUN_10002470(param_2,0x540200100700,param_3,uVar3,0,0);
  FUN_10002470(param_2,0x550200100700,uVar3,uVar4,0,0);
  FUN_10002470(param_2,0x560200100700,uVar3,param_3,0,0);
  FUN_10002470(param_2,0xc60200130700,uVar3,uVar3,0,0);
  FUN_10014dd8(param_1,param_2,&local_58);
  FUN_10014dd8(param_1,param_2,local_50);
  FUN_10014c48(param_1,uVar3);
  FUN_10014c48(param_1,uVar4);
  return uVar3;
}


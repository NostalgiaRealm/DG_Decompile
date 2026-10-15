/*
 * FUN_180110d18 at 180110d18
 * undefined FUN_180110d18(void)
 * Address ranges: 180110d18-180111027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180110d18(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar3);
  uVar4 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
  local_58 = uVar4;
  uVar5 = FUN_18010f178(param_1);
  local_50[0] = uVar5;
  FUN_1801060c0(param_2,0x570200100700,uVar2,uVar2,0,0);
  FUN_1801060c0(param_2,0x890200000213,uVar5 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,0x10,0
               );
  FUN_1801060c0(param_2,0xc20201330700,uVar2,param_3,0,6);
  FUN_1801060c0(param_2,0x540200100700,param_3,*(uint *)(param_1 + 4) | 0x80000000,0x100,0);
  FUN_1801060c0(param_2,0x2d0201300700,uVar4 & 0xffffffff,param_3,0,0);
  FUN_1801060c0(param_2,0x2a0201300700,uVar3,uVar4 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0xf8810200012010,uVar4 & 0xffffffff,0xffffffff,0,0x400);
  FUN_1801060c0(param_2,0x5c0201300700,param_3,uVar3,0,0);
  FUN_1801060c0(param_2,0x470200100000,uVar4 & 0xffffffff,*(uint *)(param_1 + 4) | 0x80000000,0x1d0,
                0);
  FUN_1801060c0(param_2,0x590201300700,param_3,*(uint *)(param_1 + 4) | 0x80000000,0x1a0,0);
  uVar1 = (uint)uVar5 & 0xff | ((uint)uVar4 & 0xff | 0xffc00200) << 8;
  FUN_1801060c0(param_2,0x110201300100,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0x2d0201300700,uVar4 & 0xffffffff,param_3,0,0);
  FUN_1801060c0(param_2,0x890200000213,uVar5 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,8,0);
  FUN_1801060c0(param_2,0x590201300700,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0x530201300700,param_3,uVar3,0,0);
  FUN_1801060c0(param_2,0x540200100700,param_3,uVar2,0,0);
  FUN_1801060c0(param_2,0x550200100700,uVar2,uVar3,0,0);
  FUN_1801060c0(param_2,0x560200100700,uVar2,param_3,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar2,uVar2,0,0);
  FUN_18010f268(param_1,param_2,&local_58);
  FUN_18010f268(param_1,param_2,local_50);
  uVar6 = FUN_18010f108(param_1,uVar2);
  FUN_18010f108(uVar6,uVar3);
  return uVar2;
}


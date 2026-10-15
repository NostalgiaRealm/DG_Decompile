/*
 * FUN_1801110a8 at 1801110a8
 * undefined FUN_1801110a8(void)
 * Address ranges: 1801110a8-180111503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801110a8(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar2 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),1,0);
  FUN_18010f138(param_1,uVar2);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar3);
  uVar4 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar4);
  uVar5 = FUN_18010eb78(param_1,param_2,0xffff);
  uVar6 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
  local_58 = uVar6;
  uVar7 = FUN_18010f178(param_1);
  local_50[0] = uVar7;
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar2,0,0);
  FUN_1801060c0(param_2,0x890200000213,uVar7 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,0x10,0
               );
  FUN_1801060c0(param_2,0x2d0201300700,uVar6 & 0xffffffff,uVar2,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,*(uint *)(param_1 + 4) | 0x80000000,0x170,0);
  FUN_1801060c0(param_2,0x2a0201300700,uVar4,uVar6 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x5c0201300700,uVar3,uVar4,0,0);
  FUN_1801060c0(param_2,0x570200100700,uVar4,uVar4,0,0);
  FUN_1801060c0(param_2,0xc20201330700,uVar4,uVar2,0,6);
  FUN_1801060c0(param_2,0x540200100700,uVar2,*(uint *)(param_1 + 4) | 0x80000000,0x100,0);
  FUN_1801060c0(param_2,0x2d0201300700,uVar6 & 0xffffffff,uVar2,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0xe1);
  FUN_1801060c0(param_2,0xf8810200012010,uVar6 & 0xffffffff,0xffffffff,0,0x400);
  FUN_1801060c0(param_2,0x2a0201300700,uVar3,uVar6 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x470200100000,uVar6 & 0xffffffff,*(uint *)(param_1 + 4) | 0x80000000,0x1d0,
                0);
  FUN_1801060c0(param_2,0x5c0201300700,uVar2,uVar3,0,0);
  uVar1 = (uint)uVar7 & 0xff | ((uint)uVar6 & 0xff | 0xffc00200) << 8;
  FUN_1801060c0(param_2,0x110201300100,uVar5,uVar1,0,0);
  FUN_1801060c0(param_2,0x110201300100,uVar3,uVar5,0,0);
  FUN_1801060c0(param_2,0x590201300700,uVar2,*(uint *)(param_1 + 4) | 0x80000000,0x1a0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0xc4);
  FUN_1801060c0(param_2,0x2d0201300700,uVar6 & 0xffffffff,uVar2,0,0);
  FUN_1801060c0(param_2,0x890200000213,uVar7 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,8,0);
  FUN_1801060c0(param_2,0x590201300700,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0xc6);
  FUN_1801060c0(param_2,0x530200100700,uVar2,uVar3,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar4,uVar4,0,0x44);
  FUN_1801060c0(param_2,0x540200100700,uVar2,uVar4,0,0);
  FUN_1801060c0(param_2,0x550200100700,uVar4,uVar3,0,0);
  FUN_1801060c0(param_2,0x560200100700,uVar3,uVar4,0,0);
  FUN_18010f268(param_1,param_2,&local_58);
  FUN_18010f268(param_1,param_2,local_50);
  uVar8 = FUN_18010f108(param_1,uVar3);
  uVar8 = FUN_18010f108(uVar8,uVar4);
  FUN_18010f108(uVar8,uVar2);
  return uVar3;
}


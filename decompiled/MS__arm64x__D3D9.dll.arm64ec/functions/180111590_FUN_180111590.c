/*
 * FUN_180111590 at 180111590
 * undefined FUN_180111590(void)
 * Address ranges: 180111590-180111823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180111590(longlong param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 extraout_x1;
  ulonglong local_58;
  ulonglong local_50 [2];
  
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar3);
  uVar4 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
  local_58 = uVar4;
  uVar5 = FUN_18010f178(param_1);
  local_50[0] = uVar5;
  FUN_1801060c0(param_2,0x7e0201400500,uVar4 & 0xffffffff,param_3,0,0);
  FUN_1801060c0(param_2,0x890200000213,uVar5 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,0x10,0
               );
  FUN_1801060c0(param_2,0x28c10200030010,uVar4 & 0xffffffff,0xffffffff,0,0x17);
  FUN_1801060c0(param_2,0x20810200012010,uVar4 & 0xffffffff,0xffffffff,0,0xff);
  FUN_1801060c0(param_2,0x570200100700,uVar3,uVar3,0,0);
  FUN_1801060c0(param_2,0x28810200012010,uVar4 & 0xffffffff,0xffffffff,0,0x7f);
  uVar1 = (uint)uVar4 & 0xff;
  FUN_1801060c0(param_2,0x8d0200000000,uVar4 & 0xffffffff,uVar1 | 0x80000000,1,0);
  FUN_1801060c0(param_2,0x720100030000,0xffffffff,0xffffffff,0,0);
  iVar2 = (int)param_2[1] - (int)*param_2;
  FUN_1801060c0(param_2,0x2a0201300700,uVar3,uVar4 & 0xffffffff,0,0);
  uVar1 = (uint)uVar5 & 0xff | (uVar1 | 0xffc00200) << 8;
  FUN_1801060c0(param_2,0x5e0201300700,param_3,uVar1,0,0);
  *(char *)(*param_2 + (ulonglong)(iVar2 - 1)) = ((char)param_2[1] - (char)*param_2) - (char)iVar2;
  FUN_1801060c0(param_2,0x590201300700,param_3,*(uint *)(param_1 + 4) | 0x80000000,0x1a0,0);
  FUN_1801060c0(param_2,0x890200000213,uVar5 & 0xffffffff,*(uint *)(param_1 + 8) | 0x80000000,0,0);
  FUN_1801060c0(param_2,0x2d0201300700,uVar4 & 0xffffffff,param_3,0,0);
  FUN_1801060c0(param_2,0x580201300700,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0);
  FUN_18010f268(param_1,param_2,&local_58);
  FUN_18010f268(param_1,param_2,local_50);
  FUN_18010f108(param_1,uVar3);
  return uVar3;
}


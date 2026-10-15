/*
 * FUN_1801104a8 at 1801104a8
 * undefined FUN_1801104a8(void)
 * Address ranges: 1801104a8-180110667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801104a8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_40 [2];
  
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  local_40[0] = uVar4;
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  uVar1 = FUN_18010f688(param_1,param_2,local_40,local_40,0);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,0x570200100700,uVar2,uVar2,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  FUN_1801060c0(param_2,0xc20200130700,uVar2,uVar1,0,1);
  FUN_1801060c0(param_2,0x5e0200100700,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar1,uVar2,0,0);
  FUN_1801060c0(param_2,0x550200100700,uVar1,*(uint *)(param_1 + 4) | 0x80000000,0x160,0);
  FUN_1801060c0(param_2,0x540200100700,uVar2,uVar3,0,0);
  FUN_1801060c0(param_2,0x560200100700,uVar1,uVar2,0,0);
  uVar5 = FUN_18010f108(param_1,uVar2);
  uVar5 = FUN_18010f108(uVar5,uVar1);
  FUN_18010f108(uVar5,uVar4 & 0xffffffff);
  return uVar1;
}


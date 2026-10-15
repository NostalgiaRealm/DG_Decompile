/*
 * FUN_1801106a0 at 1801106a0
 * undefined FUN_1801106a0(void)
 * Address ranges: 1801106a0-1801108f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801106a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  uVar5 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_18010f138(param_1,uVar5 & 0xffffffff);
  uVar1 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  FUN_1801060c0(param_2,0x290200100100,uVar1,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  FUN_1801060c0(param_2,0x290200100100,uVar2,uVar5 & 0xffffffff,uVar5 >> 0x20,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar1,uVar1,0,0xd8);
  FUN_1801060c0(param_2,0xc60200130700,uVar2,uVar2,0,0xe3);
  FUN_1801060c0(param_2,0x590200100700,uVar1,uVar2,0,0);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,0x290200100100,uVar2,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar5 & 0xffffffff,uVar5 >> 0x20,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar2,uVar2,0,0xe3);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0xd8);
  FUN_1801060c0(param_2,0x590200100700,uVar2,uVar3,0,0);
  FUN_1801060c0(param_2,0x5c0200100700,uVar1,uVar2,0,0);
  uVar6 = FUN_18010f108(param_1,uVar2);
  uVar6 = FUN_18010f108(uVar6,uVar1);
  uVar6 = FUN_18010f108(uVar6,uVar5 & 0xffffffff);
  FUN_18010f108(uVar6,uVar4 & 0xffffffff);
  return uVar1;
}


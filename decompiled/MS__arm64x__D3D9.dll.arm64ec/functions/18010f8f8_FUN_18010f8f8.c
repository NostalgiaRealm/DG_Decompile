/*
 * FUN_18010f8f8 at 18010f8f8
 * undefined FUN_18010f8f8(void)
 * Address ranges: 18010f8f8-18010faa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18010f8f8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar3 & 0xffffffff);
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  uVar1 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,0x290200100100,uVar1,uVar3 & 0xffffffff,uVar3 >> 0x20,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar1,*(uint *)(param_1 + 4) | 0x80000000,0x170,0x19);
  FUN_1801060c0(param_2,0x290200100100,uVar2,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar1,uVar1,0,0xe2);
  FUN_1801060c0(param_2,0xc60200130700,uVar2,uVar2,0,0x9b);
  FUN_1801060c0(param_2,0x590200100700,uVar1,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  FUN_1801060c0(param_2,0x580200100700,uVar1,uVar2,0,0);
  uVar5 = FUN_18010f108(param_1,uVar1);
  uVar5 = FUN_18010f108(uVar5,uVar4 & 0xffffffff);
  FUN_18010f108(uVar5,uVar3 & 0xffffffff);
  return uVar1;
}


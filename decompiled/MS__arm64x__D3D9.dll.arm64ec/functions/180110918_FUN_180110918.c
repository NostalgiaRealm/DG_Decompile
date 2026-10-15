/*
 * FUN_180110918 at 180110918
 * undefined FUN_180110918(void)
 * Address ranges: 180110918-180110aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180110918(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar3);
  FUN_1801060c0(param_2,0x570200100700,uVar2,uVar2,0,0);
  FUN_1801060c0(param_2,0x570200100700,uVar3,uVar3,0,0);
  FUN_1801060c0(param_2,0xc20200130700,uVar2,uVar4 & 0xffffffff,uVar4 >> 0x20,6);
  FUN_1801060c0(param_2,0xc20200130700,uVar3,uVar4 & 0xffffffff,uVar4 >> 0x20,1);
  FUN_1801060c0(param_2,0x540200100700,uVar2,*(uint *)(param_1 + 4) | 0x80000000,0x130,0);
  FUN_1801060c0(param_2,0x540200100700,uVar3,*(uint *)(param_1 + 4) | 0x80000000,0x120,0);
  FUN_1801060c0(param_2,0x560200100700,uVar2,uVar3,0,0);
  uVar5 = FUN_18010f108(param_1,uVar3);
  uVar5 = FUN_18010f108(uVar5,uVar2);
  uVar5 = FUN_18010f108(uVar5,uVar1);
  FUN_18010f108(uVar5,uVar4 & 0xffffffff);
  return uVar2;
}


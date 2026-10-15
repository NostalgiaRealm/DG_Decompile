/*
 * FUN_18010fac8 at 18010fac8
 * undefined FUN_18010fac8(void)
 * Address ranges: 18010fac8-18010fbbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18010fac8(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar2 & 0xffffffff);
  uVar1 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,0x5b0201400700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,0);
  FUN_1801060c0(param_2,0x5b0200100700,uVar1,uVar1,0,0);
  FUN_1801060c0(param_2,0x5c0200100700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,0);
  FUN_1801060c0(param_2,0x570200100700,uVar1,*(uint *)(param_1 + 4) | 0x80000000,0x110,0);
  FUN_18010f108(param_1,uVar2 & 0xffffffff);
  return uVar1;
}


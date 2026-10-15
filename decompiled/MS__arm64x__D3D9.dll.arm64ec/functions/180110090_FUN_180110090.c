/*
 * FUN_180110090 at 180110090
 * undefined FUN_180110090(void)
 * Address ranges: 180110090-18011033f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180110090(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),1,0);
  FUN_1801060c0(param_2,0x540200100700,uVar4 & 0xffffffff,*(uint *)(param_1 + 4) | 0x80000000,0x70,0
               );
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  uVar1 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  uVar5 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar1,uVar5 & 0xffffffff,uVar5 >> 0x20,0);
  FUN_1801060c0(param_2,0x590200100700,uVar1,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  uVar5 = FUN_18010ecc8(param_1,param_2,*(ushort *)(param_3 + 3) + 1,*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar2,uVar5 & 0xffffffff,uVar5 >> 0x20,0);
  FUN_1801060c0(param_2,0x590200100700,uVar2,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  uVar6 = FUN_18010f108(param_1,uVar4 & 0xffffffff);
  uVar3 = FUN_18010eb78(uVar6,param_2,0xffff);
  FUN_18010f138(param_1,uVar3);
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar2,0,0x44);
  FUN_1801060c0(param_2,0xc60200130700,uVar1,uVar2,0,0xee);
  FUN_1801060c0(param_2,0x580200100700,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar1,uVar3,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0x31);
  FUN_1801060c0(param_2,0x580200100700,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,8);
  uVar6 = FUN_18010f108(param_1,uVar1);
  uVar6 = FUN_18010f108(uVar6,uVar3);
  FUN_18010f108(uVar6,uVar2);
  return uVar3;
}


/*
 * FUN_18010fbe0 at 18010fbe0
 * undefined FUN_18010fbe0(void)
 * Address ranges: 18010fbe0-18011005f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18010fbe0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,byte param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar1 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  uVar5 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),param_5,0);
  if ((param_5 & 1) != 0) {
    FUN_1801060c0(param_2,0x540200100700,uVar5 & 0xffffffff,*(uint *)(param_1 + 4) | 0x80000000,0x70
                  ,0);
  }
  FUN_18010f138(param_1,uVar5 & 0xffffffff);
  uVar6 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar1,uVar6 & 0xffffffff,uVar6 >> 0x20,0);
  uVar8 = uVar5 >> 0x20;
  FUN_1801060c0(param_2,0x590200100700,uVar1,uVar5 & 0xffffffff,uVar8,0);
  uVar6 = FUN_18010ecc8(param_1,param_2,*(ushort *)(param_3 + 3) + 1,*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar2,uVar6 & 0xffffffff,uVar6 >> 0x20,0);
  FUN_1801060c0(param_2,0x590200100700,uVar2,uVar5 & 0xffffffff,uVar8,0);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar3);
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar2,0,0x44);
  uVar4 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar4);
  uVar6 = FUN_18010ecc8(param_1,param_2,*(ushort *)(param_3 + 3) + 2,*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar4,uVar6 & 0xffffffff,uVar6 >> 0x20,0);
  FUN_1801060c0(param_2,0x590200100700,uVar4,uVar5 & 0xffffffff,uVar8,0);
  if ((param_4 & 1) == 0) {
    FUN_18010f108(param_1,uVar5 & 0xffffffff);
  }
  FUN_1801060c0(param_2,0xc60200130700,uVar1,uVar2,0,0xee);
  if ((param_4 & 1) == 0) {
    FUN_1801060c0(param_2,0x570200100700,uVar2,uVar2,0,0);
  }
  else {
    uVar6 = FUN_18010ecc8(param_1,param_2,*(ushort *)(param_3 + 3) + 3,*(undefined1 *)(param_3 + 8),
                          *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
    FUN_1801060c0(param_2,0x290200100100,uVar2,uVar6 & 0xffffffff,uVar6 >> 0x20,0);
    FUN_1801060c0(param_2,0x590200100700,uVar2,uVar5 & 0xffffffff,uVar8,0);
    FUN_18010f108(param_1,uVar5 & 0xffffffff);
  }
  FUN_1801060c0(param_2,0x580200100700,uVar1,uVar3,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar4,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar2,0,0x44);
  FUN_1801060c0(param_2,0xc60200130700,uVar4,uVar2,0,0xee);
  FUN_1801060c0(param_2,0x580200100700,uVar3,uVar4,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar4,uVar1,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar4,uVar3,0,0x88);
  FUN_1801060c0(param_2,0xc60200130700,uVar1,uVar3,0,0xdd);
  FUN_1801060c0(param_2,0x580200100700,uVar1,uVar4,0,0);
  uVar7 = FUN_18010f108(param_1,uVar4);
  uVar7 = FUN_18010f108(uVar7,uVar3);
  uVar7 = FUN_18010f108(uVar7,uVar2);
  FUN_18010f108(uVar7,uVar1);
  return uVar1;
}


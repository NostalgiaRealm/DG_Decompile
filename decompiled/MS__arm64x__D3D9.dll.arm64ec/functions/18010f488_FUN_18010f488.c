/*
 * FUN_18010f488 at 18010f488
 * undefined FUN_18010f488(void)
 * Address ranges: 18010f488-18010f653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18010f488(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  
  if (param_4 == 0x530200100700) {
    uVar6 = *(undefined1 *)(param_3 + 10);
  }
  else {
    uVar6 = 2;
  }
  uVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        uVar6,*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_18010f138(param_1,uVar4 & 0xffffffff);
  uVar7 = *(undefined2 *)(param_3 + 0x11);
  if ((*(char *)(param_3 + 0x13) != -0x3d) ||
     (bVar1 = true, *(char *)(param_3 + 0x10) != '\0' && *(char *)(param_3 + 0x10) != '\x0f')) {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar7 = 0xffff;
  }
  uVar2 = FUN_18010eb78(param_1,param_2,uVar7);
  FUN_18010f138(param_1,uVar2);
  uVar3 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_1801060c0(param_2,param_4,uVar2,uVar4 & 0xffffffff,uVar4 >> 0x20,0);
  FUN_1801060c0(param_2,0x290200100100,uVar3,uVar2,0,0);
  FUN_1801060c0(param_2,0x540200100700,uVar3,*(uint *)(param_1 + 4) | 0x80000000,0x100,0);
  FUN_1801060c0(param_2,0xc20200130700,uVar3,*(uint *)(param_1 + 4) | 0x80000000,0x150,4);
  FUN_1801060c0(param_2,0x540200100700,uVar2,uVar3,0,0);
  FUN_1801060c0(param_2,0x550200100700,uVar3,*(uint *)(param_1 + 4) | 0x80000000,0x160,0);
  FUN_1801060c0(param_2,0x560200100700,uVar2,uVar3,0,0);
  uVar5 = FUN_18010f108(param_1,uVar2);
  FUN_18010f108(uVar5,uVar4 & 0xffffffff);
  return uVar2;
}


/*
 * FUN_180110368 at 180110368
 * undefined FUN_180110368(void)
 * Address ranges: 180110368-18011048f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180110368(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),1,0);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 5),*(undefined1 *)(param_3 + 9),
                        *(undefined1 *)(param_3 + 0xc),*(undefined1 *)(param_3 + 0xf),0,0);
  FUN_18010f138(param_1,uVar2 & 0xffffffff);
  FUN_1801060c0(param_2,0x5c0200100700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,0);
  uVar3 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_1801060c0(param_2,0x590200100700,uVar1,uVar3 & 0xffffffff,uVar3 >> 0x20,0);
  FUN_1801060c0(param_2,0x580200100700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,0);
  uVar4 = FUN_18010f108(param_1,uVar2 & 0xffffffff);
  FUN_18010f108(uVar4,uVar1);
  return uVar1;
}


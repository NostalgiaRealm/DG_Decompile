/*
 * FUN_180111bc0 at 180111bc0
 * undefined FUN_180111bc0(void)
 * Address ranges: 180111bc0-180111cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180111bc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong extraout_x15;
  
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),2,
                        *(undefined1 *)(param_3 + 0xd),1,0);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_180111590(param_1,param_2,uVar1);
  uVar3 = FUN_18010f108(param_1,uVar1);
  FUN_18010f138(uVar3,uVar2);
  uVar3 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_1801060c0(param_2,0x590200100700,uVar2,uVar3,0,0);
  FUN_180110d18(param_1,param_2,uVar2);
  FUN_18010f138(param_1,uVar2);
  return extraout_x15 & 0xffffffff;
}


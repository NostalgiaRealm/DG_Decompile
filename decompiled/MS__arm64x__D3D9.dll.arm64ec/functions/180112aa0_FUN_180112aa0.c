/*
 * FUN_180112aa0 at 180112aa0
 * undefined FUN_180112aa0(void)
 * Address ranges: 180112aa0-180112c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180112aa0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulonglong local_50 [2];
  
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8)
                        ,0,0,1,0);
  FUN_18010f138(param_1,uVar1);
  auVar4 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 0x12),0xe4,0,0,0,0);
  uVar2 = FUN_18010f178(param_1,auVar4._8_8_,0xffffffff,1);
  local_50[0] = uVar2;
  FUN_1801060c0(param_2,0xc20200130700,uVar1,auVar4._0_8_ & 0xffffffff,auVar4._0_8_ >> 0x20,
                (&DAT_180229d2f)[*(byte *)(param_3 + 2)]);
  FUN_1801060c0(param_2,0x500200100700,uVar2 & 0xffffffff,uVar1,0,0);
  FUN_1801060c0(param_2,0x20810200012010,uVar2 & 0xffffffff,0xffffffff,0,
                1 << (ulonglong)(*(uint *)(param_3 + 0xc) & 3));
  FUN_18010f268(param_1,param_2,local_50);
  uVar3 = FUN_18010f108(param_1,uVar1);
  FUN_180113dc0(uVar3,param_2,0);
  FUN_1801060c0(param_2,(param_4 & 0xff) << 0x28 ^ 0x10000000000 | 0x840100110000,0xffffffff,
                0xffffffff,0,0);
  return;
}


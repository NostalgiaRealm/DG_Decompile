/*
 * FUN_180110b10 at 180110b10
 * undefined FUN_180110b10(void)
 * Address ranges: 180110b10-180110bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180110b10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 3),*(undefined1 *)(param_3 + 8),
                        *(undefined1 *)(param_3 + 0xb),*(undefined1 *)(param_3 + 0xe),0,0);
  FUN_18010f138(param_1,uVar2 & 0xffffffff);
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),1,0);
  FUN_1801060c0(param_2,0xc20200130700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,
                (&DAT_180229d2f)[*(byte *)(param_3 + 9)]);
  FUN_18010f108(param_1,uVar2 & 0xffffffff);
  return uVar1;
}


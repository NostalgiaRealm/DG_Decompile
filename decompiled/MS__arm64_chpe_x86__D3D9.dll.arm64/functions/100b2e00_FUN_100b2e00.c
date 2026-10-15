/*
 * FUN_100b2e00 at 100b2e00
 * undefined FUN_100b2e00(void)
 * Address ranges: 100b2e00-100b2e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100b2e00(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_10117918(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x130c),
                       *(undefined4 *)(param_1 + 0x1cf08),*(int *)(param_1 + 0x1cf04) + 0x1430,
                       param_2 * 0x1000,param_2 * 0x1000 + 0x1000,param_3,0,0);
  return uVar1;
}


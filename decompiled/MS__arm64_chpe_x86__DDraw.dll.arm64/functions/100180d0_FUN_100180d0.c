/*
 * FUN_100180d0 at 100180d0
 * undefined FUN_100180d0(void)
 * Address ranges: 100180d0-1001811f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100180d0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_100811f8(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x130c),
                       *(undefined4 *)(param_1 + 53000),*(int *)(param_1 + 0xcf04) + 0x1430,
                       param_2 * 0x1000,param_2 * 0x1000 + 0x1000,param_3,0,0);
  return uVar1;
}


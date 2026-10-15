/*
 * FUN_10092ce0 at 10092ce0
 * undefined FUN_10092ce0(void)
 * Address ranges: 10092ce0-10092d3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10092ce0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_100e50c8(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x130c),
                       *(undefined4 *)(param_1 + 0x1cf08),*(int *)(param_1 + 0x1cf04) + 0x1430,
                       param_2 * 0x1000,param_2 * 0x1000 + 0x1000,param_3,0,0);
  return uVar1;
}


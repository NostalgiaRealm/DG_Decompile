/*
 * FUN_10068918 at 10068918
 * undefined FUN_10068918(void)
 * Address ranges: 10068918-1006895f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068918(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (uint *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x88) + 0xd0);
    *param_3 = (uint)(*(int *)(param_1 + 0x88) != 0);
  }
  return uVar1;
}


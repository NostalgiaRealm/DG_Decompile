/*
 * FUN_100217a0 at 100217a0
 * undefined FUN_100217a0(void)
 * Address ranges: 100217a0-100217e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100217a0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + 0x30)) {
    uVar1 = FUN_1001e7d0(*(undefined4 *)(*(int *)(param_1 + 0x38) + param_2 * 4),param_3);
  }
  return uVar1;
}


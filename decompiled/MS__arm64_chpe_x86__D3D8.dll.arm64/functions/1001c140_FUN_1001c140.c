/*
 * FUN_1001c140 at 1001c140
 * undefined FUN_1001c140(void)
 * Address ranges: 1001c140-1001c187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001c140(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + 0x30)) {
    uVar1 = FUN_10019470(*(undefined4 *)(*(int *)(param_1 + 0x38) + param_2 * 4),param_3);
  }
  return uVar1;
}


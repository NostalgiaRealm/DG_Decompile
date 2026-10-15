/*
 * FUN_1009e78d at 1009e78d
 * undefined4 __stdcall FUN_1009e78d(int param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1009e78d-1009e7cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e78d(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x270);
    if (param_2 != (undefined4 *)0x0) {
      FUN_100cff00(param_2,*(undefined4 **)(param_1 + 0x26c),*(int *)(param_1 + 0x270) << 3);
    }
    uVar1 = 0;
  }
  return uVar1;
}


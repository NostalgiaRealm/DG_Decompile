/*
 * FUN_1009b10b at 1009b10b
 * undefined4 __stdcall FUN_1009b10b(int param_1, undefined4 * param_2)
 * Address ranges: 1009b10b-1009b138
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009b10b(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x5bd8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x5bd8) + 0x274);
    }
    *param_2 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}


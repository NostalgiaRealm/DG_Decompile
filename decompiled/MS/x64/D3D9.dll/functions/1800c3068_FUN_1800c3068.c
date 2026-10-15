/*
 * FUN_1800c3068 at 1800c3068
 * undefined8 __fastcall FUN_1800c3068(longlong param_1, undefined8 * param_2, undefined4 * param_3)
 * Address ranges: 1800c3068-1800c30a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c3068(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x288);
    if (param_2 != (undefined8 *)0x0) {
      FUN_1800fbec0(param_2,*(undefined8 **)(param_1 + 0x280),
                    (ulonglong)*(uint *)(param_1 + 0x288) << 3);
    }
    uVar1 = 0;
  }
  return uVar1;
}


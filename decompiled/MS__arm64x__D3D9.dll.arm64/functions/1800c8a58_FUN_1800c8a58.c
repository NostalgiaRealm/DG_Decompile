/*
 * FUN_1800c8a58 at 1800c8a58
 * undefined FUN_1800c8a58(void)
 * Address ranges: 1800c8a58-1800c8a9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c8a58(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x288);
    if (param_2 != 0) {
      thunk_FUN_180001218(param_2,*(undefined8 *)(param_1 + 0x280),
                          (ulonglong)*(uint *)(param_1 + 0x288) << 3);
    }
    uVar1 = 0;
  }
  return uVar1;
}


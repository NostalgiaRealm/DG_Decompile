/*
 * FUN_1801e4098 at 1801e4098
 * undefined FUN_1801e4098(void)
 * Address ranges: 1801e4098-1801e40db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e4098(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x288);
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_2,*(undefined8 *)(param_1 + 0x280),
                          (ulonglong)*(uint *)(param_1 + 0x288) << 3);
    }
    uVar1 = 0;
  }
  return uVar1;
}


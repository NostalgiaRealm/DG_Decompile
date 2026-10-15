/*
 * FUN_180130ca0 at 180130ca0
 * undefined FUN_180130ca0(void)
 * Address ranges: 180130ca0-180130d0b;180130d10-180130d33;180130d54-180130d6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180130ca0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180130c60();
  if ((uVar1 & 1) == 0) {
    if (((*(char *)(param_1 + 0xed) != '\0') && (lVar2 = *(longlong *)(param_1 + 0xd0), lVar2 != 0))
       && (*(char *)(param_1 + 0xec) == '\0')) {
      if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar2,*(undefined8 *)(param_1 + 0xe0),
                            (*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                            *(int *)(param_1 + 0x8c));
      }
      if (*(int *)(param_1 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar2,*(undefined8 *)(param_1 + 0xe0),
                            (uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3);
      }
    }
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
  *(undefined1 *)(param_1 + 0xee) = 0;
  return;
}


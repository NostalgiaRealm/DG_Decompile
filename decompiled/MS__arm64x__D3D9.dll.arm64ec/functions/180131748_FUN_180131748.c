/*
 * FUN_180131748 at 180131748
 * undefined FUN_180131748(void)
 * Address ranges: 180131748-1801317ab;1801317b0-1801317d3;1801317f4-180131807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180131748(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0xed) != '\0') && (lVar1 = *(longlong *)(param_1 + 0xd0), lVar1 != 0))
     && (*(char *)(param_1 + 0xec) == '\0')) {
    if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar1,*(undefined8 *)(param_1 + 0xe0),
                          (*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                          *(int *)(param_1 + 0x8c));
    }
    if (*(int *)(param_1 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar1,*(undefined8 *)(param_1 + 0xe0),
                          (uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3);
    }
  }
  *(undefined1 *)(param_1 + 0xed) = 0;
  return;
}


/*
 * FUN_1801516b4 at 1801516b4
 * undefined FUN_1801516b4(void)
 * Address ranges: 1801516b4-1801516bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801516b4(uint param_1)

{
  undefined8 unaff_x20;
  longlong *unaff_x21;
  uint unaff_w22;
  
  if (unaff_w22 < param_1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*unaff_x21 + (ulonglong)param_1 * 0x158,
                        *unaff_x21 + (ulonglong)(param_1 - 1) * 0x158,0x158);
  }
  *(undefined8 *)(*unaff_x21 + (ulonglong)unaff_w22 * 0x158) = unaff_x20;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48((ulonglong)unaff_w22 * 0x158 + *unaff_x21 + 8);
}


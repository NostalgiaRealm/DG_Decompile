/*
 * FUN_1801515f0 at 1801515f0
 * undefined FUN_1801515f0(void)
 * Address ranges: 1801515f0-180151623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801515f0(void)

{
  uint uVar1;
  undefined8 unaff_x20;
  longlong *unaff_x21;
  uint unaff_w22;
  longlong in_stack_00000010;
  
  FUN_1802229d8(*unaff_x21);
  *unaff_x21 = in_stack_00000010;
  *(int *)(unaff_x21 + 1) = (int)unaff_x21[1] << 1;
  uVar1 = *(uint *)((longlong)unaff_x21 + 0xc);
  if (uVar1 <= unaff_w22) {
    *(undefined8 *)(*unaff_x21 + (ulonglong)unaff_w22 * 0x158) = unaff_x20;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48((ulonglong)unaff_w22 * 0x158 + *unaff_x21 + 8);
  }
  if (3 < uVar1 - unaff_w22) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(*unaff_x21 + (ulonglong)uVar1 * 0x158,
                        *unaff_x21 + (ulonglong)(uVar1 - 1) * 0x158,0x158);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(*unaff_x21 + (ulonglong)uVar1 * 0x158,
                      *unaff_x21 + (ulonglong)(uVar1 - 1) * 0x158,0x158);
}


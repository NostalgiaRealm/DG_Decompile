/*
 * FUN_1801516ec at 1801516ec
 * undefined FUN_1801516ec(void)
 * Address ranges: 1801516ec-180151713
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801516ec(void)

{
  undefined8 unaff_x20;
  longlong *unaff_x21;
  ulonglong unaff_x22;
  longlong lVar1;
  
  lVar1 = (unaff_x22 & 0xffffffff) * 0x158;
  *(undefined8 *)(*unaff_x21 + lVar1) = unaff_x20;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar1 + *unaff_x21 + 8);
}


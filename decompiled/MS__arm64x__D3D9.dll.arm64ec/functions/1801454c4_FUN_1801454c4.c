/*
 * FUN_1801454c4 at 1801454c4
 * undefined FUN_1801454c4(void)
 * Address ranges: 1801454c4-180145537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801454c4(void)

{
  longlong unaff_x19;
  undefined8 *unaff_x20;
  longlong unaff_x21;
  ulonglong unaff_x22;
  
  FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x77b8));
  *(undefined8 *)(unaff_x19 + 0x77b8) = 0;
  unaff_x20[0x1ef8] = 0;
  *(undefined4 *)(unaff_x21 + 0x37c8) = 0;
  *(undefined4 *)(unaff_x21 + 0x37cc) = 0;
  FUN_1801630c0(unaff_x20 + 0x1ef2);
  FUN_1802229d8(*(undefined8 *)(unaff_x19 + 0x7778));
  FUN_18015f638(unaff_x20 + 0x1ee9);
  *unaff_x20 = &PTR_FUN_18022ac48;
  if ((unaff_x22 & 1) != 0) {
    FUN_1802229d8();
  }
  return;
}


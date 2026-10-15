/*
 * FUN_180037194 at 180037194
 * undefined FUN_180037194(void)
 * Address ranges: 180037194-180037207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180037194(void)

{
  longlong unaff_x19;
  undefined8 *unaff_x20;
  longlong unaff_x21;
  ulonglong unaff_x22;
  
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x19 + 0x77b8));
  *(undefined8 *)(unaff_x19 + 0x77b8) = 0;
  unaff_x20[0x1ef8] = 0;
  *(undefined4 *)(unaff_x21 + 0x37c8) = 0;
  *(undefined4 *)(unaff_x21 + 0x37cc) = 0;
  FUN_180053290(unaff_x20 + 0x1ef2);
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x19 + 0x7778));
  FUN_18004f958(unaff_x20 + 0x1ee9);
  *unaff_x20 = &PTR_FUN_180233cb8;
  if ((unaff_x22 & 1) != 0) {
    FUN_180102fc0();
  }
  return;
}


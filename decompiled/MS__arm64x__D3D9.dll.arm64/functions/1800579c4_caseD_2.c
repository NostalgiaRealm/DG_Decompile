/*
 * switchD_180057968::caseD_2 at 1800579c4
 * undefined caseD_2(void)
 * Address ranges: 1800579c4-180057a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void switchD_180057968::caseD_2(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong unaff_x19;
  uint unaff_w21;
  uint unaff_w22;
  
  if (unaff_w22 < 6) {
    lVar2 = unaff_x19 + (ulonglong)unaff_w21 * 0x34;
    uVar1 = *(undefined4 *)(&DAT_1802310f0 + (ulonglong)unaff_w22 * 4);
    *(undefined4 *)(lVar2 + 0xb8) = uVar1;
    *(byte *)(unaff_x19 + 0xf684 + (longlong)((int)unaff_w21 >> 3)) =
         *(byte *)(unaff_x19 + 0xf684 + (longlong)((int)unaff_w21 >> 3)) |
         (byte)(1 << (ulonglong)(unaff_w21 & 7));
    *(undefined4 *)(lVar2 + 0x3f8) = uVar1;
    return;
  }
  return;
}


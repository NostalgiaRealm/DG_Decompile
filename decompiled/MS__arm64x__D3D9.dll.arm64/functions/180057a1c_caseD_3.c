/*
 * switchD_180057968::caseD_3 at 180057a1c
 * undefined caseD_3(void)
 * Address ranges: 180057a1c-180057a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void switchD_180057968::caseD_3(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong unaff_x19;
  ulonglong unaff_x21;
  uint unaff_w22;
  
  if (unaff_w22 < 6) {
    lVar2 = unaff_x19 + (unaff_x21 & 0xffffffff) * 0x34;
    uVar1 = *(undefined4 *)(&DAT_1802310f0 + (ulonglong)unaff_w22 * 4);
    *(undefined4 *)(lVar2 + 0xbc) = uVar1;
    *(undefined4 *)(lVar2 + 0x3fc) = uVar1;
    FUN_180057c74(1);
    return;
  }
  return;
}


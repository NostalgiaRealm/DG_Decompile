/*
 * switchD_180167a6c::caseD_3 at 180167b20
 * undefined caseD_3(void)
 * Address ranges: 180167b20-180167b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void switchD_180167a6c::caseD_3(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong unaff_x19;
  ulonglong unaff_x21;
  uint unaff_w22;
  
  if (unaff_w22 < 6) {
    lVar2 = unaff_x19 + (unaff_x21 & 0xffffffff) * 0x34;
    uVar1 = *(undefined4 *)(&DAT_18022bf08 + (ulonglong)unaff_w22 * 4);
    *(undefined4 *)(lVar2 + 0xbc) = uVar1;
    *(undefined4 *)(lVar2 + 0x3fc) = uVar1;
    FUN_180167d78(1);
    return;
  }
  return;
}


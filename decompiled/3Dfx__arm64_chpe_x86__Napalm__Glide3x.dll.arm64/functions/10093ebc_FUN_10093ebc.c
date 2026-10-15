/*
 * FUN_10093ebc at 10093ebc
 * undefined FUN_10093ebc(void)
 * Address ranges: 10093ebc-10093f47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10093ebc(void)

{
  uint uVar1;
  int unaff_w28;
  
  uVar1 = *(uint *)(unaff_w28 + 4);
  if (uVar1 < 0x10040) {
    switch(uVar1) {
    case 0x40:
      goto switchD_10093f24_caseD_40;
    case 0x41:
      goto LAB_10093ef4;
    case 0x50:
switchD_10093f24_caseD_50:
      goto LAB_10093ef4;
    case 0x51:
switchD_10093f24_caseD_51:
      goto LAB_10093ef4;
    }
  }
  else {
    if (uVar1 < 0x10041) {
switchD_10093f24_caseD_40:
      goto LAB_10093ef4;
    }
    if ((uVar1 - 0x10050 & 0xfffeffff) == 0) goto switchD_10093f24_caseD_50;
    if ((uVar1 - 0x10051 & 0xfffeffff) == 0) goto switchD_10093f24_caseD_51;
  }
LAB_10093ef4:
                    /* WARNING: Could not recover jumptable at 0x10093f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}


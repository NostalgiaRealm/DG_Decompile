/*
 * FUN_1008a414 at 1008a414
 * undefined FUN_1008a414(void)
 * Address ranges: 1008a414-1008a49f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008a414(void)

{
  uint uVar1;
  int unaff_w28;
  
  uVar1 = *(uint *)(unaff_w28 + 4);
  if (uVar1 < 0x10040) {
    switch(uVar1) {
    case 0x40:
      goto switchD_1008a47c_caseD_40;
    case 0x41:
      goto LAB_1008a44c;
    case 0x50:
switchD_1008a47c_caseD_50:
      goto LAB_1008a44c;
    case 0x51:
switchD_1008a47c_caseD_51:
      goto LAB_1008a44c;
    }
  }
  else {
    if (uVar1 < 0x10041) {
switchD_1008a47c_caseD_40:
      goto LAB_1008a44c;
    }
    if ((uVar1 - 0x10050 & 0xfffeffff) == 0) goto switchD_1008a47c_caseD_50;
    if ((uVar1 - 0x10051 & 0xfffeffff) == 0) goto switchD_1008a47c_caseD_51;
  }
LAB_1008a44c:
                    /* WARNING: Could not recover jumptable at 0x1008a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}


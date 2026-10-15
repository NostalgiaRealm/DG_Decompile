/*
 * FUN_10089df4 at 10089df4
 * undefined FUN_10089df4(void)
 * Address ranges: 10089df4-10089e7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10089df4(void)

{
  uint uVar1;
  int unaff_w28;
  
  uVar1 = *(uint *)(unaff_w28 + 4);
  if (uVar1 < 0x10040) {
    switch(uVar1) {
    case 0x40:
      goto switchD_10089e5c_caseD_40;
    case 0x41:
      goto LAB_10089e2c;
    case 0x50:
switchD_10089e5c_caseD_50:
      goto LAB_10089e2c;
    case 0x51:
switchD_10089e5c_caseD_51:
      goto LAB_10089e2c;
    }
  }
  else {
    if (uVar1 < 0x10041) {
switchD_10089e5c_caseD_40:
      goto LAB_10089e2c;
    }
    if ((uVar1 - 0x10050 & 0xfffeffff) == 0) goto switchD_10089e5c_caseD_50;
    if ((uVar1 - 0x10051 & 0xfffeffff) == 0) goto switchD_10089e5c_caseD_51;
  }
LAB_10089e2c:
                    /* WARNING: Could not recover jumptable at 0x10089e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_WowA64DispatchRetLeafFunctionPointer)(4);
  return;
}


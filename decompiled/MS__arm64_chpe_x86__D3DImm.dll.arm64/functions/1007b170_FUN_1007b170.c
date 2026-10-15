/*
 * FUN_1007b170 at 1007b170
 * undefined FUN_1007b170(void)
 * Address ranges: 1007b170-1007b1bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Inspection switch repair: indirect branch 1007b190 uses signed-byte displacements from table 1007b1c0, multiplied by four and added to the table address. Explicit destinations from unchanged bytes: 0 -> 1007b194 (signed byte -11), 1 -> 1007b19c (signed byte -9), 2 -> 1007b1bc (signed byte -1), 3 -> 1007b1a4 (signed byte -7). This analysis-only jump-table override avoids a Ghidra ILP32 locked-varnode error; types remain inferred.
 */

/* Inspection switch repair: indirect branch 1007b190 uses signed-byte displacements from table
   1007b1c0, multiplied by four and added to the table address. Explicit destinations from unchanged
   bytes: 0 -> 1007b194 (signed byte -11), 1 -> 1007b19c (signed byte -9), 2 -> 1007b1bc (signed
   byte -1), 3 -> 1007b1a4 (signed byte -7). This analysis-only jump-table override avoids a Ghidra
   ILP32 locked-varnode error; types remain inferred. */

void FUN_1007b170(int param_1,uint param_2,byte param_3)

{
  uint *puVar1;
  
  if (param_3 != 0 && param_3 < 4 || param_3 == 4) {
                    /* WARNING: Switch is manually overridden */
    switch(param_3) {
    case 1:
      puVar1 = (uint *)(param_1 + 0x14);
      break;
    case 2:
      puVar1 = (uint *)(param_1 + 0x18);
      break;
    case 3:
      goto switchD_1007b190_caseD_1007b1bc;
    case 4:
      puVar1 = (uint *)(param_1 + 0x1c);
    }
    *puVar1 = 1 << (ulonglong)(param_2 & 0x1f) | *puVar1;
  }
switchD_1007b190_caseD_1007b1bc:
  return;
}


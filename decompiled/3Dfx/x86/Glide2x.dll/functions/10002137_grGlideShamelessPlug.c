/*
 * grGlideShamelessPlug at 10002137
 * undefined __stdcall grGlideShamelessPlug(int param_1)
 * Address ranges: 10002137-1000214e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideShamelessPlug,4
 */

/* __stdcall grGlideShamelessPlug,4 */

void grGlideShamelessPlug(int param_1)

{
  undefined *puVar1;
  
                    /* 0x2137  47  _grGlideShamelessPlug@4 */
  puVar1 = FUN_10012760();
  puVar1[0x58] = param_1 != 0;
  return;
}


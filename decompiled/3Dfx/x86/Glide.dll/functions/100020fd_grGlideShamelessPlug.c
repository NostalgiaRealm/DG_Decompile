/*
 * grGlideShamelessPlug at 100020fd
 * undefined __stdcall grGlideShamelessPlug(int param_1)
 * Address ranges: 100020fd-10002114
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideShamelessPlug,4
 */

/* __stdcall grGlideShamelessPlug,4 */

void grGlideShamelessPlug(int param_1)

{
  undefined *puVar1;
  
                    /* 0x20fd  47  _grGlideShamelessPlug@4 */
  puVar1 = FUN_10012ab2();
  puVar1[0x58] = param_1 != 0;
  return;
}


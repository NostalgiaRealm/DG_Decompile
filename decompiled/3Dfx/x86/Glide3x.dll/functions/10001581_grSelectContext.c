/*
 * grSelectContext at 10001581
 * bool __stdcall grSelectContext(int param_1)
 * Address ranges: 10001581-10001599
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSelectContext,4
 */

/* __stdcall grSelectContext,4 */

bool grSelectContext(int param_1)

{
  undefined *puVar1;
  
                    /* 0x1581  62  _grSelectContext@4 */
  puVar1 = FUN_1000504c();
  return param_1 == *(int *)(puVar1 + 0x30);
}


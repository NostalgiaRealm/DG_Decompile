/*
 * grBufferClear at 10001483
 * undefined __stdcall grBufferClear(uint param_1, undefined4 param_2, ushort param_3)
 * Address ranges: 10001483-100014a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grBufferClear,12
 */

/* __stdcall grBufferClear,12 */

void grBufferClear(uint param_1,undefined4 param_2,ushort param_3)

{
  uint uVar1;
  undefined *this;
  
                    /* 0x1483  13  _grBufferClear@12 */
  uVar1 = (uint)param_3;
  this = FUN_10012ab2();
  FUN_1001392a(this,param_1,param_2,uVar1);
  return;
}


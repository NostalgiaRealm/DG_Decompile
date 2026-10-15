/*
 * _grBufferClear@12 at 180001314
 * undefined __fastcall _grBufferClear@12(uint param_1, undefined1 param_2)
 * Address ranges: 180001314-180001335
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferClear_12(uint param_1,undefined1 param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  
                    /* 0x1314  15  _grBufferClear@12
                       0x1314  176  grBufferClear */
  uVar2 = (ulonglong)param_1;
  puVar1 = FUN_180015384();
  FUN_1800165cc((longlong)puVar1,uVar2 & 0xffffffff,param_2);
  return;
}


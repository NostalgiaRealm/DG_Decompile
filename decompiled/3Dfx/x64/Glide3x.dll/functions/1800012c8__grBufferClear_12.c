/*
 * _grBufferClear@12 at 1800012c8
 * undefined __fastcall _grBufferClear@12(uint param_1, undefined1 param_2)
 * Address ranges: 1800012c8-1800012e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferClear_12(uint param_1,undefined1 param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  
                    /* 0x12c8  8  _grBufferClear@12
                       0x12c8  108  grBufferClear */
  uVar2 = (ulonglong)param_1;
  puVar1 = FUN_1800069ac();
  FUN_180007d9c((longlong)puVar1,uVar2 & 0xffffffff,param_2);
  return;
}


/*
 * _grBufferSwap@4 at 180001368
 * undefined __fastcall _grBufferSwap@4(int param_1)
 * Address ranges: 180001368-180001386
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferSwap_4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
                    /* 0x1368  17  _grBufferSwap@4
                       0x1368  178  grBufferSwap */
  iVar2 = 4;
  if (param_1 < 5) {
    iVar2 = param_1;
  }
  puVar1 = FUN_180015384();
  FUN_180016614((longlong)puVar1,iVar2);
  return;
}


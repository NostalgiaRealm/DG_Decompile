/*
 * _grBufferSwap@4 at 1800012ec
 * undefined __fastcall _grBufferSwap@4(int param_1)
 * Address ranges: 1800012ec-18000130a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferSwap_4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
                    /* 0x12ec  9  _grBufferSwap@4
                       0x12ec  109  grBufferSwap */
  iVar2 = 4;
  if (param_1 < 5) {
    iVar2 = param_1;
  }
  puVar1 = FUN_1800069ac();
  FUN_180007de4((longlong)puVar1,iVar2);
  return;
}


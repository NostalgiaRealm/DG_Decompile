/*
 * _guTexMemReset@0 at 180003194
 * undefined __fastcall _guTexMemReset@0(void)
 * Address ranges: 180003194-1800031c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexMemReset_0(void)

{
  undefined *puVar1;
  
                    /* 0x3194  140  _guTexMemReset@0
                       0x3194  301  guTexMemReset */
  puVar1 = FUN_180015384();
  *(undefined8 *)(puVar1 + 0xa8) = 0;
  *(undefined8 *)(puVar1 + 0xb0) = 0;
  *(undefined4 *)(puVar1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xb8) = 0xffffffff;
  return;
}


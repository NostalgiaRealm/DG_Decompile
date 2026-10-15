/*
 * _guTexMemReset@0 at 180005c60
 * undefined __cdecl _guTexMemReset@0(void)
 * Address ranges: 180005c60-180005c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexMemReset_0(void)

{
  longlong lVar1;
  
                    /* 0x5c60  140  _guTexMemReset@0
                       0x5c60  301  guTexMemReset */
  lVar1 = FUN_180017788();
  *(undefined4 *)(lVar1 + 0xc0) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  return;
}


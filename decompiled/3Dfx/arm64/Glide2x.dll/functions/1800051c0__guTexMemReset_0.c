/*
 * _guTexMemReset@0 at 1800051c0
 * undefined __cdecl _guTexMemReset@0(void)
 * Address ranges: 1800051c0-1800051e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexMemReset_0(void)

{
  longlong lVar1;
  
                    /* 0x51c0  136  _guTexMemReset@0
                       0x51c0  293  guTexMemReset */
  lVar1 = FUN_180016878();
  *(undefined4 *)(lVar1 + 0xc0) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  return;
}


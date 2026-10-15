/*
 * _guTexMemReset@0 at 180002f74
 * undefined __fastcall _guTexMemReset@0(void)
 * Address ranges: 180002f74-180002fa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexMemReset_0(void)

{
  undefined *puVar1;
  
                    /* 0x2f74  136  _guTexMemReset@0
                       0x2f74  293  guTexMemReset */
  puVar1 = FUN_180015044();
  *(undefined8 *)(puVar1 + 0xa8) = 0;
  *(undefined8 *)(puVar1 + 0xb0) = 0;
  *(undefined4 *)(puVar1 + 0xc0) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xb8) = 0xffffffff;
  return;
}


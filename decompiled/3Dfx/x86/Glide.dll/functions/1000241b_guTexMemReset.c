/*
 * guTexMemReset at 1000241b
 * undefined __stdcall guTexMemReset(void)
 * Address ranges: 1000241b-10002443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guTexMemReset,0
 */

/* __stdcall guTexMemReset,0 */

void guTexMemReset(void)

{
  undefined *puVar1;
  
                    /* 0x241b  138  _guTexMemReset@0 */
  puVar1 = FUN_10012ab2();
  *(undefined4 *)(puVar1 + 0x60) = 0;
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0x68) = 0;
  *(undefined4 *)(puVar1 + 100) = 0;
  *(undefined4 *)(puVar1 + 0x78) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x70) = 0xffffffff;
  return;
}


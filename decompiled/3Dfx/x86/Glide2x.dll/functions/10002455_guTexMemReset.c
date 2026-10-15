/*
 * guTexMemReset at 10002455
 * undefined __stdcall guTexMemReset(void)
 * Address ranges: 10002455-1000247d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guTexMemReset,0
 */

/* __stdcall guTexMemReset,0 */

void guTexMemReset(void)

{
  undefined *puVar1;
  
                    /* 0x2455  134  _guTexMemReset@0 */
  puVar1 = FUN_10012760();
  *(undefined4 *)(puVar1 + 0x60) = 0;
  *(undefined4 *)(puVar1 + 0x6c) = 0;
  *(undefined4 *)(puVar1 + 0x68) = 0;
  *(undefined4 *)(puVar1 + 100) = 0;
  *(undefined4 *)(puVar1 + 0x78) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x74) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x70) = 0xffffffff;
  return;
}


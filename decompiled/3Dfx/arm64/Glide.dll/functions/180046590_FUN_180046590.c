/*
 * FUN_180046590 at 180046590
 * undefined __cdecl FUN_180046590(void)
 * Address ranges: 180046590-180046603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046590(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_18006c8d8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_1800609d8(0x58);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_18006c8d8 = (undefined8 *)0x0;
    }
    else {
      uVar2 = thunk_FUN_1800609d8(0xc00);
      *puVar1 = uVar2;
      puVar1[1] = 0x80;
      *(undefined1 *)(puVar1 + 10) = 1;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
      DAT_18006c8d8 = puVar1;
    }
  }
  return;
}


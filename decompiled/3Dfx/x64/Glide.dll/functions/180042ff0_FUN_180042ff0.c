/*
 * FUN_180042ff0 at 180042ff0
 * undefined8 * __fastcall FUN_180042ff0(void)
 * Address ranges: 180042ff0-180043060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180042ff0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_18006c890 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_18005db9c(0x58);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_18006c890 = (undefined8 *)0x0;
    }
    else {
      uVar2 = thunk_FUN_18005db9c(0xc00);
      *puVar1 = uVar2;
      puVar1[1] = 0x80;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 10) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
      DAT_18006c890 = puVar1;
    }
  }
  return DAT_18006c890;
}


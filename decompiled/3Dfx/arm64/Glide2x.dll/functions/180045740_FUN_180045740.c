/*
 * FUN_180045740 at 180045740
 * undefined __cdecl FUN_180045740(void)
 * Address ranges: 180045740-1800457b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045740(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_18006b880 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_18005fb88(0x58);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_18006b880 = (undefined8 *)0x0;
    }
    else {
      uVar2 = thunk_FUN_18005fb88(0xc00);
      *puVar1 = uVar2;
      puVar1[1] = 0x80;
      *(undefined1 *)(puVar1 + 10) = 1;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
      DAT_18006b880 = puVar1;
    }
  }
  return;
}


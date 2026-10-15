/*
 * FUN_100c0d52 at 100c0d52
 * undefined4 * __stdcall FUN_100c0d52(void)
 * Address ranges: 100c0d52-100c0dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100c0d52(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_100deecc == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100cfd55(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100deecc = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_100cfd89(0x800);
      *puVar1 = uVar2;
      puVar1[2] = 0;
      puVar1[1] = 0x80;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
      DAT_100deecc = puVar1;
    }
  }
  return DAT_100deecc;
}


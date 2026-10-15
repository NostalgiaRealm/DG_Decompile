/*
 * FUN_1003f0ab at 1003f0ab
 * undefined4 * __stdcall FUN_1003f0ab(void)
 * Address ranges: 1003f0ab-1003f104
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1003f0ab(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_1005fa80 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1005566f(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_1005fa80 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_100556a3(0x800);
      *puVar1 = uVar2;
      puVar1[2] = 0;
      puVar1[1] = 0x80;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
      DAT_1005fa80 = puVar1;
    }
  }
  return DAT_1005fa80;
}


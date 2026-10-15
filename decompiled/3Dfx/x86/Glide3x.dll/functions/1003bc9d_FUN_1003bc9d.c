/*
 * FUN_1003bc9d at 1003bc9d
 * undefined4 * __stdcall FUN_1003bc9d(void)
 * Address ranges: 1003bc9d-1003bcf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1003bc9d(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_1005b8a0 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1005225f(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_1005b8a0 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_10052293(0x800);
      *puVar1 = uVar2;
      puVar1[2] = 0;
      puVar1[1] = 0x80;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
      DAT_1005b8a0 = puVar1;
    }
  }
  return DAT_1005b8a0;
}


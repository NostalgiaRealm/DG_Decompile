/*
 * FUN_1009e78a at 1009e78a
 * undefined4 * __stdcall FUN_1009e78a(void)
 * Address ranges: 1009e78a-1009e7e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1009e78a(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_100ba70c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100ad475(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100ba70c = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_100ad4a9(0x800);
      *puVar1 = uVar2;
      puVar1[2] = 0;
      puVar1[1] = 0x80;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
      DAT_100ba70c = puVar1;
    }
  }
  return DAT_100ba70c;
}


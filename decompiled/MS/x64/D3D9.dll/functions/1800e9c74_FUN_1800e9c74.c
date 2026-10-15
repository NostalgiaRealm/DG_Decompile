/*
 * FUN_1800e9c74 at 1800e9c74
 * undefined8 * __fastcall FUN_1800e9c74(void)
 * Address ranges: 1800e9c74-1800e9ce4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e9c74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_1801123b8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_1800fbccc(0x58);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_1801123b8 = (undefined8 *)0x0;
    }
    else {
      uVar2 = thunk_FUN_1800fbccc(0xc00);
      *puVar1 = uVar2;
      puVar1[1] = 0x80;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 10) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
      DAT_1801123b8 = puVar1;
    }
  }
  return DAT_1801123b8;
}


/*
 * FUN_100555d7 at 100555d7
 * undefined4 * __stdcall FUN_100555d7(void)
 * Address ranges: 100555d7-10055630
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100555d7(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_1006bbd8 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1005c755(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_1006bbd8 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_1005c789(0x800);
      *puVar1 = uVar2;
      puVar1[2] = 0;
      puVar1[1] = 0x80;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
      DAT_1006bbd8 = puVar1;
    }
  }
  return DAT_1006bbd8;
}


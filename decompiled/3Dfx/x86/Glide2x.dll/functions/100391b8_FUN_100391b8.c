/*
 * FUN_100391b8 at 100391b8
 * undefined4 * __stdcall FUN_100391b8(void)
 * Address ranges: 100391b8-10039211
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100391b8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_1005975c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1004f60f(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_1005975c = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_1004f643(0x800);
      *puVar1 = uVar2;
      puVar1[2] = 0;
      puVar1[1] = 0x80;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
      DAT_1005975c = puVar1;
    }
  }
  return DAT_1005975c;
}


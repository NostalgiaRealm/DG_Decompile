/*
 * FUN_18020d5e0 at 18020d5e0
 * undefined FUN_18020d5e0(void)
 * Address ranges: 18020d5e0-18020d64b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020d5e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_180258a30 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_1802229a8(0x58);
    if (puVar1 == (undefined8 *)0x0) {
      DAT_180258a30 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_1802229a8(0xc00);
      *puVar1 = uVar2;
      puVar1[1] = 0x80;
      *(undefined1 *)(puVar1 + 10) = 1;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      thunk_FUN_18022384c(puVar1 + 5);
      DAT_180258a30 = puVar1;
    }
  }
  return;
}


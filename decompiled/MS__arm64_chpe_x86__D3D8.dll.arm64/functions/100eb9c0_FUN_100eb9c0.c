/*
 * FUN_100eb9c0 at 100eb9c0
 * undefined FUN_100eb9c0(void)
 * Address ranges: 100eb9c0-100eba4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100eb9c0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_1013d1a4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100febf0(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_1013d1a4 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_100fece0(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_101340b8)(puVar1 + 7);
      DAT_1013d1a4 = puVar1;
    }
  }
  return DAT_1013d1a4;
}


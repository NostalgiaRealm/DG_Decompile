/*
 * FUN_10077ec0 at 10077ec0
 * undefined FUN_10077ec0(void)
 * Address ranges: 10077ec0-10077f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10077ec0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_100c2a70 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100913c0(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100c2a70 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_100914b0(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_100ba0ec)(puVar1 + 7);
      DAT_100c2a70 = puVar1;
    }
  }
  return DAT_100c2a70;
}


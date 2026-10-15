/*
 * FUN_1011e210 at 1011e210
 * undefined FUN_1011e210(void)
 * Address ranges: 1011e210-1011e29f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1011e210(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_10175b7c == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_101321c0(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_10175b7c = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_101322b0(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_1016c0bc)(puVar1 + 7);
      DAT_10175b7c = puVar1;
    }
  }
  return DAT_10175b7c;
}


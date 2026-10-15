/*
 * FUN_10061ee0 at 10061ee0
 * undefined FUN_10061ee0(void)
 * Address ranges: 10061ee0-10061f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10061ee0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_100aab00 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10083310(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100aab00 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_10083400(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_100a808c)(puVar1 + 7);
      DAT_100aab00 = puVar1;
    }
  }
  return DAT_100aab00;
}


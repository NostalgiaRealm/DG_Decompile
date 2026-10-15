/*
 * FUN_10058ba0 at 10058ba0
 * undefined FUN_10058ba0(void)
 * Address ranges: 10058ba0-10058c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10058ba0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_1009f7c8 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10079f50(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_1009f7c8 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_1007a040(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_1009d08c)(puVar1 + 7);
      DAT_1009f7c8 = puVar1;
    }
  }
  return DAT_1009f7c8;
}


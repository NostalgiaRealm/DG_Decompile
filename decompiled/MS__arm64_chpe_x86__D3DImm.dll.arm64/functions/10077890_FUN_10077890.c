/*
 * FUN_10077890 at 10077890
 * undefined FUN_10077890(void)
 * Address ranges: 10077890-1007791f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10077890(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_100acbc8 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10081cb0(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100acbc8 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_10081da0(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_100a1040)(puVar1 + 7);
      DAT_100acbc8 = puVar1;
    }
  }
  return DAT_100acbc8;
}


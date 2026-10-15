/*
 * FUN_1005c830 at 1005c830
 * undefined FUN_1005c830(void)
 * Address ranges: 1005c830-1005c8bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1005c830(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_100a2930 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1007dc70(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      DAT_100a2930 = (undefined4 *)0x0;
    }
    else {
      uVar2 = FUN_1007dd60(0x800);
      *puVar1 = uVar2;
      *(undefined8 *)(puVar1 + 1) = 0x80;
      *(undefined8 *)(puVar1 + 3) = 0;
      *(undefined8 *)(puVar1 + 5) = 0;
      *(undefined1 *)(puVar1 + 0xd) = 1;
      (*(code *)PTR_FUN_100a008c)(puVar1 + 7);
      DAT_100a2930 = puVar1;
    }
  }
  return DAT_100a2930;
}


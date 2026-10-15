/*
 * FUN_18005a724 at 18005a724
 * undefined8 * __fastcall FUN_18005a724(void)
 * Address ranges: 18005a724-18005a79b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005a724(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18005db9c(0xdd0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_18004df30(puVar1);
    *(undefined4 *)(puVar1 + 0x1af) = 0;
    *(undefined4 *)(puVar1 + 0x1b3) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1b6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xdb4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1b9) = 0xffffffff;
    puVar1[0x1b0] = 0;
    puVar1[0x1b1] = 0;
    puVar1[0x1b2] = 0;
    puVar1[0x1b4] = 0;
    puVar1[0x1b5] = 0;
    puVar1[0x1b7] = 0;
    puVar1[0x1b8] = 0;
  }
  return puVar1;
}


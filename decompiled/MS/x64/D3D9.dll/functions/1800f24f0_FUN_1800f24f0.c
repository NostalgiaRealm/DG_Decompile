/*
 * FUN_1800f24f0 at 1800f24f0
 * undefined8 * __fastcall FUN_1800f24f0(void)
 * Address ranges: 1800f24f0-1800f2567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800f24f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0xdd0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1800ddf70(puVar1);
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


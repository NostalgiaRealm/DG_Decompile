/*
 * FUN_180040508 at 180040508
 * undefined8 * __fastcall FUN_180040508(undefined4 param_1, undefined1 param_2)
 * Address ranges: 180040508-1800405ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180040508(undefined4 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x1d0);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x31] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    *puVar1 = &PTR_FUN_180101f80;
    *(undefined4 *)(puVar1 + 0x30) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x32) = param_1;
    *(undefined1 *)(puVar1 + 0x39) = param_2;
    FUN_1800fbea0((undefined1 *)(puVar1 + 1),0,0x90);
    FUN_1800fbea0((undefined1 *)(puVar1 + 0x13),0,0x88);
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}


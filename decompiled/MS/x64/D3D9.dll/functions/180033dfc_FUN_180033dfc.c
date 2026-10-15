/*
 * FUN_180033dfc at 180033dfc
 * undefined8 * __fastcall FUN_180033dfc(undefined4 param_1)
 * Address ranges: 180033dfc-180033edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033dfc(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x268);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x4b) = param_1;
    puVar1[0x47] = 0;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    puVar1[0x4a] = 0;
    puVar1[0x4c] = 0;
    *puVar1 = &PTR_FUN_180101788;
    FUN_1800fbea0((undefined1 *)(puVar1 + 1),0,0x88);
    FUN_1800fbea0((undefined1 *)(puVar1 + 0x12),0,0x44);
    FUN_1800fbea0((undefined1 *)(puVar1 + 0x1b),0,0x90);
    FUN_1800fbea0((undefined1 *)(puVar1 + 0x2d),0,0x88);
    puVar1[0x3e] = 0;
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}


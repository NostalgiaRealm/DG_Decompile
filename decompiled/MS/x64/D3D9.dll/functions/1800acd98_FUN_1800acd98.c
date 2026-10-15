/*
 * FUN_1800acd98 at 1800acd98
 * undefined __fastcall FUN_1800acd98(undefined8 param_1, undefined4 param_2, undefined8 param_3)
 * Address ranges: 1800acd98-1800acdee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800acd98(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1800fbccc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_180104928;
    puVar1[2] = puVar1;
    puVar1[3] = param_1;
    *(undefined4 *)(puVar1 + 4) = param_2;
    puVar1[5] = param_3;
  }
  return;
}


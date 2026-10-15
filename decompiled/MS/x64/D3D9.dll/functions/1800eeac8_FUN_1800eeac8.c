/*
 * FUN_1800eeac8 at 1800eeac8
 * undefined __fastcall FUN_1800eeac8(longlong param_1, ulonglong param_2)
 * Address ranges: 1800eeac8-1800eeb2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eeac8(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x908 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800428b0(puVar1,1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x910 + param_1);
  *(undefined8 *)(lVar2 + 0x908 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800428b0(puVar1,1);
  }
  *(undefined8 *)(lVar2 + 0x910 + param_1) = 0;
  return;
}


/*
 * FUN_180053654 at 180053654
 * undefined __fastcall FUN_180053654(longlong param_1, ulonglong param_2)
 * Address ranges: 180053654-1800536da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053654(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x908 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x910 + param_1);
  *(undefined8 *)(lVar2 + 0x908 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180044964(puVar1);
    FUN_180060ac0(puVar1);
  }
  *(undefined8 *)(lVar2 + 0x910 + param_1) = 0;
  return;
}


/*
 * FUN_180051048 at 180051048
 * undefined __fastcall FUN_180051048(longlong param_1, ulonglong param_2)
 * Address ranges: 180051048-1800510ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051048(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x908 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042358(puVar1);
    FUN_18005d720(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x910 + param_1);
  *(undefined8 *)(lVar2 + 0x908 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180042358(puVar1);
    FUN_18005d720(puVar1);
  }
  *(undefined8 *)(lVar2 + 0x910 + param_1) = 0;
  return;
}


/*
 * FUN_180046f1c at 180046f1c
 * undefined __fastcall FUN_180046f1c(longlong param_1, uint param_2)
 * Address ranges: 180046f1c-180047034
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180046f1c(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_2 * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x2250 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180048590(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2248 + param_1);
  *(undefined8 *)(lVar2 + 0x2250 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800489d8(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2240 + param_1);
  *(undefined8 *)(lVar2 + 0x2248 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800489d8(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2238 + param_1);
  *(undefined8 *)(lVar2 + 0x2240 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800489d8(puVar1);
    FUN_180060ac0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2230 + param_1);
  *(undefined8 *)(lVar2 + 0x2238 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800489d8(puVar1);
    FUN_180060ac0(puVar1);
  }
  *(undefined8 *)(lVar2 + 0x2230 + param_1) = 0;
  FUN_18005b854(param_1,(ulonglong)param_2);
  FUN_180053654(param_1,(ulonglong)param_2);
  return;
}


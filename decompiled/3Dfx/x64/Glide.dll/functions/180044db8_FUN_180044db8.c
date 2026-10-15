/*
 * FUN_180044db8 at 180044db8
 * undefined __fastcall FUN_180044db8(longlong param_1, uint param_2)
 * Address ranges: 180044db8-180044ed0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044db8(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_2 * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x2250 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004642c(puVar1);
    FUN_18005dbc0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2248 + param_1);
  *(undefined8 *)(lVar2 + 0x2250 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180046874(puVar1);
    FUN_18005dbc0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2240 + param_1);
  *(undefined8 *)(lVar2 + 0x2248 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180046874(puVar1);
    FUN_18005dbc0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2238 + param_1);
  *(undefined8 *)(lVar2 + 0x2240 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180046874(puVar1);
    FUN_18005dbc0(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2230 + param_1);
  *(undefined8 *)(lVar2 + 0x2238 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180046874(puVar1);
    FUN_18005dbc0(puVar1);
  }
  *(undefined8 *)(lVar2 + 0x2230 + param_1) = 0;
  FUN_1800596f0(param_1,(ulonglong)param_2);
  FUN_1800514f0(param_1,(ulonglong)param_2);
  return;
}


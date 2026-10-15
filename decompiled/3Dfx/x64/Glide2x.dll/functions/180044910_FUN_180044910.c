/*
 * FUN_180044910 at 180044910
 * undefined __fastcall FUN_180044910(longlong param_1, uint param_2)
 * Address ranges: 180044910-180044a28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044910(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_2 * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar2 + 0x2250 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180045f84(puVar1);
    FUN_18005d720(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2248 + param_1);
  *(undefined8 *)(lVar2 + 0x2250 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800463cc(puVar1);
    FUN_18005d720(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2240 + param_1);
  *(undefined8 *)(lVar2 + 0x2248 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800463cc(puVar1);
    FUN_18005d720(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2238 + param_1);
  *(undefined8 *)(lVar2 + 0x2240 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800463cc(puVar1);
    FUN_18005d720(puVar1);
  }
  puVar1 = *(undefined8 **)(lVar2 + 0x2230 + param_1);
  *(undefined8 *)(lVar2 + 0x2238 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800463cc(puVar1);
    FUN_18005d720(puVar1);
  }
  *(undefined8 *)(lVar2 + 0x2230 + param_1) = 0;
  FUN_180059248(param_1,(ulonglong)param_2);
  FUN_180051048(param_1,(ulonglong)param_2);
  return;
}


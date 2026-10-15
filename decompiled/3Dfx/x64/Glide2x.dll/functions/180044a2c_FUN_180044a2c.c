/*
 * FUN_180044a2c at 180044a2c
 * undefined __fastcall FUN_180044a2c(longlong param_1, ulonglong param_2)
 * Address ranges: 180044a2c-180044b3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044a2c(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  lVar3 = (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar3 + 0x1e18 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180047078(puVar1);
    FUN_18005d720(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e10 + param_1);
  *(undefined8 *)(lVar3 + 0x1e18 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800407a0((longlong)pvVar2);
    FUN_18005d720(pvVar2);
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x1e08 + param_1);
  *(undefined8 *)(lVar3 + 0x1e10 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180047078(puVar1);
    FUN_18005d720(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e00 + param_1);
  *(undefined8 *)(lVar3 + 0x1e08 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800407a0((longlong)pvVar2);
    FUN_18005d720(pvVar2);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x2258 + param_1);
  *(undefined8 *)(lVar3 + 0x1e00 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180058b34((longlong)pvVar2);
    FUN_18005d720(pvVar2);
    *(undefined8 *)(lVar3 + 0x2258 + param_1) = 0;
  }
  return;
}


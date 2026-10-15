/*
 * FUN_180047038 at 180047038
 * undefined __fastcall FUN_180047038(longlong param_1, ulonglong param_2)
 * Address ranges: 180047038-180047148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047038(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  lVar3 = (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar3 + 0x1e18 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180049684(puVar1);
    FUN_180060ac0(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e10 + param_1);
  *(undefined8 *)(lVar3 + 0x1e18 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180042dac((longlong)pvVar2);
    FUN_180060ac0(pvVar2);
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x1e08 + param_1);
  *(undefined8 *)(lVar3 + 0x1e10 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_180049684(puVar1);
    FUN_180060ac0(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e00 + param_1);
  *(undefined8 *)(lVar3 + 0x1e08 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180042dac((longlong)pvVar2);
    FUN_180060ac0(pvVar2);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x2258 + param_1);
  *(undefined8 *)(lVar3 + 0x1e00 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_18005b140((longlong)pvVar2);
    FUN_180060ac0(pvVar2);
    *(undefined8 *)(lVar3 + 0x2258 + param_1) = 0;
  }
  return;
}


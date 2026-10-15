/*
 * FUN_1800f16c0 at 1800f16c0
 * undefined __fastcall FUN_1800f16c0(longlong param_1, ulonglong param_2)
 * Address ranges: 1800f16c0-1800f17d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f16c0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  lVar3 = (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar3 + 0x1e18 + param_1);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800e2334(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e10 + param_1);
  *(undefined8 *)(lVar3 + 0x1e18 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800e7e34((longlong)pvVar2);
    FUN_1800fbcf0(pvVar2);
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x1e08 + param_1);
  *(undefined8 *)(lVar3 + 0x1e10 + param_1) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800e2334(puVar1);
    FUN_1800fbcf0(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e00 + param_1);
  *(undefined8 *)(lVar3 + 0x1e08 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800e7e34((longlong)pvVar2);
    FUN_1800fbcf0(pvVar2);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x2258 + param_1);
  *(undefined8 *)(lVar3 + 0x1e00 + param_1) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1800f4794((longlong)pvVar2);
    FUN_1800fbcf0(pvVar2);
    *(undefined8 *)(lVar3 + 0x2258 + param_1) = 0;
  }
  return;
}


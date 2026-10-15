/*
 * FUN_180047818 at 180047818
 * undefined __cdecl FUN_180047818(longlong param_1, ulonglong param_2)
 * Address ranges: 180047818-1800478e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047818(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  lVar3 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar3 + 0x1e18);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004a608(puVar1);
    FUN_18005fbc8(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e10);
  *(undefined8 *)(lVar3 + 0x1e18) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180043b80((longlong)pvVar2);
    FUN_18005fbc8(pvVar2);
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x1e08);
  *(undefined8 *)(lVar3 + 0x1e10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004a608(puVar1);
    FUN_18005fbc8(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e00);
  *(undefined8 *)(lVar3 + 0x1e08) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180043b80((longlong)pvVar2);
    FUN_18005fbc8(pvVar2);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x2258);
  *(undefined8 *)(lVar3 + 0x1e00) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x10) + 0x10))();
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x18) = 0;
    FUN_18005fbc8(pvVar2);
    *(undefined8 *)(lVar3 + 0x2258) = 0;
  }
  return;
}


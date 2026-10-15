/*
 * FUN_18004b3a8 at 18004b3a8
 * undefined __cdecl FUN_18004b3a8(longlong param_1, ulonglong param_2)
 * Address ranges: 18004b3a8-18004b477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b3a8(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong lVar3;
  
  lVar3 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  puVar1 = *(undefined8 **)(lVar3 + 0x1e18);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004e198(puVar1);
    FUN_180063700(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e10);
  *(undefined8 *)(lVar3 + 0x1e18) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180047710((longlong)pvVar2);
    FUN_180063700(pvVar2);
  }
  puVar1 = *(undefined8 **)(lVar3 + 0x1e08);
  *(undefined8 *)(lVar3 + 0x1e10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_18004e198(puVar1);
    FUN_180063700(puVar1);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x1e00);
  *(undefined8 *)(lVar3 + 0x1e08) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_180047710((longlong)pvVar2);
    FUN_180063700(pvVar2);
  }
  pvVar2 = *(LPVOID *)(lVar3 + 0x2258);
  *(undefined8 *)(lVar3 + 0x1e00) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x10) + 0x10))();
    *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
    *(undefined4 *)((longlong)pvVar2 + 0x18) = 0;
    FUN_180063700(pvVar2);
    *(undefined8 *)(lVar3 + 0x2258) = 0;
  }
  return;
}


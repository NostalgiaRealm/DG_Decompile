/*
 * FUN_18000bb38 at 18000bb38
 * undefined FUN_18000bb38(void)
 * Address ranges: 18000bb38-18000bc6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000bb38(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  iVar2 = *(int *)((longlong)puVar3 + 0x104) + -1;
  *(int *)((longlong)puVar3 + 0x104) = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0;
    if (*(int *)(puVar3 + 0x10) != 0) {
      do {
        (**(code **)(**(longlong **)(puVar3[0xf] + uVar4 * 8) + 0x20))();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(puVar3 + 0x10));
    }
    thunk_FUN_180102fc0(puVar3[0xf]);
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    if ((*(uint *)(puVar3 + 9) >> 3 & 1) == 0) {
      FUN_180023590(puVar3,puVar3[0x1f],*(int *)(puVar3 + 3) * 0x40 + 0xfffU & 0xfffff000);
    }
    if (puVar3[0x17] != 0) {
      (*__imp_GDI32_dll_DeleteObject)();
      puVar3[0x17] = 0;
      puVar3[0x1c] = 0;
    }
    if (((*(int *)((longlong)puVar3 + 0x94) == 0) && (*(int *)(puVar3 + 0x13) == 0)) &&
       ((longlong *)puVar3[0xe] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)puVar3[0xe] + 0x20))();
    }
    if (puVar3[0x1f] - 1 < 0xfffffffffffffffe) {
      (*__imp_KERNEL32_dll_CloseHandle)();
    }
    puVar3[0x1f] = 0xffffffffffffffff;
    *puVar3 = &PTR_D3DPERF_GetStatus_18022a8e0;
    thunk_FUN_180102fc0(puVar3[0xf]);
    FUN_180102fc0(puVar3,0x108);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_180103118(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


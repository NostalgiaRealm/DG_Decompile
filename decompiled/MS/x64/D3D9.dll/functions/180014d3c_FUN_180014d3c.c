/*
 * FUN_180014d3c at 180014d3c
 * undefined __fastcall FUN_180014d3c(longlong param_1)
 * Address ranges: 180014d3c-180014e84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014d3c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  piVar1 = (int *)((longlong)puVar2 + 0x104);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar4 = 0;
    if (*(int *)(puVar2 + 0x10) != 0) {
      do {
        (**(code **)(**(longlong **)(puVar2[0xf] + uVar4 * 8) + 0x20))();
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(puVar2 + 0x10));
    }
    FUN_1800fbcf0((LPVOID)puVar2[0xf]);
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    if ((*(byte *)(puVar2 + 9) & 8) == 0) {
      FUN_180031abc((longlong)puVar2,puVar2[0x1f],
                    (ulonglong)(*(int *)(puVar2 + 3) * 0x40 + 0xfffU & 0xfffff000));
    }
    if ((HGDIOBJ)puVar2[0x17] != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)puVar2[0x17]);
      puVar2[0x17] = 0;
      puVar2[0x1c] = 0;
    }
    if (((*(int *)((longlong)puVar2 + 0x94) == 0) && (*(int *)(puVar2 + 0x13) == 0)) &&
       ((longlong *)puVar2[0xe] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)puVar2[0xe] + 0x20))();
    }
    if ((longlong)puVar2[0x1f] - 1U < 0xfffffffffffffffe) {
      CloseHandle((HANDLE)puVar2[0x1f]);
    }
    *puVar2 = &PTR_D3DPERF_GetStatus_180101678;
    puVar2[0x1f] = 0xffffffffffffffff;
    FUN_1800fbcf0((LPVOID)puVar2[0xf]);
    FUN_1800fbcf0(puVar2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1800fbdd4(*(LPVOID *)(*(longlong *)(param_1 + 0x40) + -8));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


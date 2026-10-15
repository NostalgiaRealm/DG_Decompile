/*
 * FUN_180116d28 at 180116d28
 * undefined FUN_180116d28(void)
 * Address ranges: 180116d28-180116e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180116d28(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  iVar1 = *(int *)((longlong)puVar3 + 0x104) + -1;
  *(int *)((longlong)puVar3 + 0x104) = iVar1;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (iVar1 == 0) {
    uVar4 = 0;
    if (*(int *)(puVar3 + 0x10) != 0) {
      do {
        (*(code *)puVar2)();
        (*extraout_x11)();
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(puVar3 + 0x10));
    }
    FUN_1802229d8(puVar3[0xf]);
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    if ((*(uint *)(puVar3 + 9) >> 3 & 1) == 0) {
      FUN_18012fda0(puVar3,puVar3[0x1f],*(int *)(puVar3 + 3) * 0x40 + 0xfffU & 0xfffff000);
    }
    if (puVar3[0x17] != 0) {
      thunk_FUN_180224288();
      puVar3[0x17] = 0;
      puVar3[0x1c] = 0;
    }
    if (((*(int *)((longlong)puVar3 + 0x94) == 0) && (*(int *)(puVar3 + 0x13) == 0)) &&
       (puVar3[0xe] != 0)) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)();
    }
    if (puVar3[0x1f] - 1 < 0xfffffffffffffffe) {
      thunk_FUN_180223824();
    }
    puVar3[0x1f] = 0xffffffffffffffff;
    *puVar3 = &PTR_D3DPERF_GetStatus_native_18022a8e0;
    FUN_1802229d8(puVar3[0xf]);
    FUN_1802229d8(puVar3,0x108);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + -8));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


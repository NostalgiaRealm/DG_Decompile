/*
 * FUN_1001d4a0 at 1001d4a0
 * undefined FUN_1001d4a0(void)
 * Address ranges: 1001d4a0-1001d697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d4a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar2 = puVar1[0x2f] + -1;
  puVar1[0x2f] = iVar2;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar2 == 0) {
    uVar5 = 0;
    if (puVar1[0x16] != 0) {
      do {
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)puVar1[0x16]);
    }
    FUN_101322d0(puVar1[0x15]);
    *(undefined8 *)(puVar1 + 0x15) = 0;
    puVar1[0x17] = 0;
    if (((uint)puVar1[0xd] >> 3 & 1) == 0) {
      FUN_1003f210(puVar1,puVar1[0x2d],puVar1[4] * 0x40 + 0xfffU & 0xfffff000);
    }
    iVar2 = puVar1[0x24];
    if (iVar2 != 0) {
      (*(code *)PTR_FUN_1016c018)(iVar2);
      puVar1[0x24] = 0;
      puVar1[0x29] = 0;
    }
    if (((puVar1[0x1b] == 0) && (puVar1[0x1c] == 0)) && (puVar1[0x14] != 0)) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_00)(uVar4);
    }
    iVar2 = puVar1[0x2d];
    if (iVar2 - 1U < 0xfffffffe) {
      (*(code *)PTR_FUN_1016c048)(iVar2);
    }
    puVar1[0x2d] = -1;
    *puVar1 = &PTR_D3DPERF_GetStatus_native_1015e83c;
    FUN_101322d0(puVar1[0x15]);
    FUN_10132260(puVar1,0xc0);
  }
  *(int *)(param_1 + 4) = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 0) {
    FUN_10132440(*(undefined4 *)(iVar2 + -4));
  }
  *(int *)(param_1 + 0x24) = 0;
  return;
}


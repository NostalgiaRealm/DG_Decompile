/*
 * FUN_1000ac8e at 1000ac8e
 * uint __fastcall FUN_1000ac8e(int param_1)
 * Address ranges: 1000ac8e-1000ad13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000ac8e(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_128 [73];
  
  uVar3 = 1;
  uVar1 = *(uint *)(param_1 + 0xcc);
  puVar4 = (undefined4 *)(param_1 + 0x3700);
  puVar5 = local_128;
  for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (1 < uVar1) {
    do {
      puVar4 = (undefined4 *)(param_1 + 0x3700 + uVar3 * 0x120);
      puVar5 = (undefined4 *)(param_1 + 0x35e0 + uVar3 * 0x120);
      for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar1 = *(uint *)(param_1 + 0xcc);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  puVar4 = local_128;
  puVar5 = (undefined4 *)(uVar1 * 0x120 + 0x35e0 + param_1);
  for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *(int *)(param_1 + 0x36e0) + 1;
  *(uint *)(param_1 + 0x36e0) = uVar1 % *(uint *)(param_1 + 0xcc);
  return uVar1 / *(uint *)(param_1 + 0xcc);
}


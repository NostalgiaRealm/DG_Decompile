/*
 * FUN_1000b4f2 at 1000b4f2
 * uint __fastcall FUN_1000b4f2(int param_1)
 * Address ranges: 1000b4f2-1000b574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000b4f2(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_128 [73];
  
  uVar3 = 1;
  uVar1 = *(uint *)(param_1 + 0xcc);
  puVar4 = (undefined4 *)(param_1 + 0x3a80);
  puVar5 = local_128;
  for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (1 < uVar1) {
    do {
      puVar4 = (undefined4 *)(param_1 + 0x3a80 + uVar3 * 0x120);
      puVar5 = (undefined4 *)(param_1 + 0x3960 + uVar3 * 0x120);
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
  puVar5 = (undefined4 *)((uVar1 + 0x33) * 0x120 + param_1);
  for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *(int *)(param_1 + 0x3a60) + 1;
  *(uint *)(param_1 + 0x3a60) = uVar1 % *(uint *)(param_1 + 0xcc);
  return uVar1 / *(uint *)(param_1 + 0xcc);
}


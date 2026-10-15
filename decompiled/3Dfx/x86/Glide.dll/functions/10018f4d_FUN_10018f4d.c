/*
 * FUN_10018f4d at 10018f4d
 * uint __fastcall FUN_10018f4d(int param_1)
 * Address ranges: 10018f4d-10018fd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10018f4d(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_108 [65];
  
  uVar3 = 1;
  uVar1 = *(uint *)(param_1 + 0xcc);
  puVar4 = (undefined4 *)(param_1 + 0x33f4);
  puVar5 = local_108;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (1 < uVar1) {
    do {
      puVar4 = (undefined4 *)(param_1 + 0x33f4 + uVar3 * 0x104);
      puVar5 = (undefined4 *)(param_1 + 0x32f0 + uVar3 * 0x104);
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar1 = *(uint *)(param_1 + 0xcc);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  puVar4 = local_108;
  puVar5 = (undefined4 *)(uVar1 * 0x104 + 0x32f0 + param_1);
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *(int *)(param_1 + 0x33d8) + 1;
  *(uint *)(param_1 + 0x33d8) = uVar1 % *(uint *)(param_1 + 0xcc);
  return uVar1 / *(uint *)(param_1 + 0xcc);
}


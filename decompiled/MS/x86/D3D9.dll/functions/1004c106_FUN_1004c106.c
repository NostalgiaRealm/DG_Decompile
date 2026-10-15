/*
 * FUN_1004c106 at 1004c106
 * undefined4 __fastcall FUN_1004c106(int param_1)
 * Address ranges: 1004c106-1004c154
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004c106(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = *(int *)(param_1 + 0x34) != 1;
  iVar3 = 0;
  if ((*(int *)(param_1 + 8) == 9) || (iVar3 = *(int *)(param_1 + 8) + -0xb, iVar3 == 0)) {
    if (*(int *)(param_1 + 0x34) != 1) {
      FUN_1004c049(param_1);
      puVar1 = (uint *)(param_1 + 0x20);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      iVar3 = *(int *)(param_1 + 0x24) + (uint)(0xfffffffe < uVar2);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(param_1 + 0x24) = iVar3;
      *(undefined4 *)(param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    bVar4 = false;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),bVar4);
}


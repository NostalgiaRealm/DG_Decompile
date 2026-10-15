/*
 * FUN_1004c155 at 1004c155
 * bool __fastcall FUN_1004c155(int param_1)
 * Address ranges: 1004c155-1004c1bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1004c155(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if ((iVar3 == 8) || ((iVar3 != 9 && ((iVar3 == 10 || (iVar3 != 0xb)))))) {
    FUN_1004c049(param_1);
    puVar1 = (uint *)(param_1 + 0x20);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    bVar4 = true;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)(0xfffffffe < uVar2);
    *(undefined4 *)(param_1 + 0x34) = 2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  else {
    bVar4 = *(int *)(param_1 + 0x34) == 1;
    if (bVar4) {
      FUN_1004c049(param_1);
      *(undefined4 *)(param_1 + 0x34) = 2;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  return bVar4;
}


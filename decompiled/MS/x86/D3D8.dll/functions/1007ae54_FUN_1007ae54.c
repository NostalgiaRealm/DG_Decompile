/*
 * FUN_1007ae54 at 1007ae54
 * undefined __fastcall FUN_1007ae54(int param_1)
 * Address ranges: 1007ae54-1007af77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007ae54(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar3 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0xf94 + uVar3 * 4) != 0) {
      (**(code **)(*(int *)*puVar1 + 0x6c))(uVar3,0,0,0,0,0,0);
      iVar2 = *(int *)(param_1 + 0xf94 + uVar3 * 4);
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) & ~(1 << (uVar3 & 0x1f));
      (**(code **)(**(int **)(param_1 + 0xf94 + uVar3 * 4) + 8))();
      *(undefined4 *)(param_1 + 0xf94 + uVar3 * 4) = 0;
      *(uint *)(param_1 + 0x58a4) = *(uint *)(param_1 + 0x58a4) & ~(1 << (uVar3 & 0x1f));
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + 0x57bc + uVar3 * 4) != 0) {
      (**(code **)(*(int *)*puVar1 + 0xb0))(uVar3,0,0,0);
      FUN_10081bdb(*(int **)(param_1 + 0x57bc + uVar3 * 4));
      *(undefined4 *)(param_1 + 0x57bc + uVar3 * 4) = 0;
    }
    *(undefined4 *)(param_1 + 0x57fc + uVar3 * 4) = 0;
    *(undefined4 *)(param_1 + 0x583c + uVar3 * 4) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  if (*(int *)(param_1 + 0x57b8) != 0) {
    (**(code **)(*(int *)*puVar1 + 0xb4))(0,0);
    FUN_10080e28(*(LPVOID *)(param_1 + 0x57b8));
    *(undefined4 *)(param_1 + 0x57b8) = 0;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(*(int *)*puVar1 + 0x44))(1,1,&local_1c,&local_10);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_10005800(*(int **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10005800(*(int **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


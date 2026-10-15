/*
 * FUN_1003cdb1 at 1003cdb1
 * undefined __fastcall FUN_1003cdb1(int param_1)
 * Address ranges: 1003cdb1-1003cde6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003cdb1(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x8e8);
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x68))(*(int **)(param_1 + 0x638),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0x8ec) = 0;
  }
  return;
}


/*
 * FUN_1003f506 at 1003f506
 * undefined __fastcall FUN_1003f506(int param_1)
 * Address ranges: 1003f506-1003f53b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f506(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x8e8);
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x68))(*(int **)(param_1 + 0x638),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0x8ec) = 0;
  }
  return;
}


/*
 * FUN_100524c7 at 100524c7
 * undefined __fastcall FUN_100524c7(int param_1)
 * Address ranges: 100524c7-100524fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100524c7(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x8ec);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x8e8);
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x68))(*(int **)(param_1 + 0x638),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0x8ec) = 0;
  }
  return;
}


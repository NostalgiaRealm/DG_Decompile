/*
 * FUN_10009cc4 at 10009cc4
 * bool __fastcall FUN_10009cc4(int param_1)
 * Address ranges: 10009cc4-10009d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10009cc4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x3308) + 0x1304);
  iVar3 = *(int *)(iVar2 + 0x948);
  *(int *)(iVar2 + 0x948) = param_1;
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3308) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  if (param_1 != iVar3) {
    FUN_1003fbe9(*(void **)(*(int *)(param_1 + 0x3308) + 0x1304),*(undefined4 *)(param_1 + 0x333c));
    FUN_1004008d(*(int *)(*(int *)(param_1 + 0x3308) + 0x1304),*(int *)(param_1 + 0x333c));
  }
  return param_1 != iVar3;
}


/*
 * FUN_100164e8 at 100164e8
 * bool __fastcall FUN_100164e8(int param_1)
 * Address ranges: 100164e8-10016553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_100164e8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x3188) + 0x1304);
  iVar3 = *(int *)(iVar2 + 0x948);
  *(int *)(iVar2 + 0x948) = param_1;
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3188) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  if (param_1 != iVar3) {
    FUN_1003d494(*(void **)(*(int *)(param_1 + 0x3188) + 0x1304),*(undefined4 *)(param_1 + 0x31bc));
    FUN_1003d938(*(int *)(*(int *)(param_1 + 0x3188) + 0x1304),*(int *)(param_1 + 0x31bc));
  }
  return param_1 != iVar3;
}


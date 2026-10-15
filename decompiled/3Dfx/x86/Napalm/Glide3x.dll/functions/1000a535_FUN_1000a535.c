/*
 * FUN_1000a535 at 1000a535
 * bool __fastcall FUN_1000a535(int param_1)
 * Address ranges: 1000a535-1000a5a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1000a535(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x3688) + 0x1304);
  iVar3 = *(int *)(iVar2 + 0x948);
  *(int *)(iVar2 + 0x948) = param_1;
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3688) + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  if (param_1 != iVar3) {
    FUN_10042ff2(*(void **)(*(int *)(param_1 + 0x3688) + 0x1304),*(undefined4 *)(param_1 + 0x36bc));
    FUN_10043496(*(int *)(*(int *)(param_1 + 0x3688) + 0x1304),*(int *)(param_1 + 0x36bc));
  }
  return param_1 != iVar3;
}


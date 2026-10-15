/*
 * FUN_180019880 at 180019880
 * bool __fastcall FUN_180019880(longlong param_1)
 * Address ranges: 180019880-18001990a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180019880(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
  lVar3 = *(longlong *)(lVar2 + 0xb88);
  *(longlong *)(lVar2 + 0xb88) = param_1;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508) + 0x684);
  *piVar1 = *piVar1 + 1;
  if (param_1 != lVar3) {
    FUN_180047ed8(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(param_1 + 0x3228));
    FUN_18004841c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 0x3228));
  }
  return param_1 != lVar3;
}


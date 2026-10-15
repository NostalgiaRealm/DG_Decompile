/*
 * FUN_1800193e0 at 1800193e0
 * bool __fastcall FUN_1800193e0(longlong param_1)
 * Address ranges: 1800193e0-18001946a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800193e0(longlong param_1)

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
    FUN_180047a30(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(param_1 + 0x3228));
    FUN_180047f74(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                  *(longlong *)(param_1 + 0x3228));
  }
  return param_1 != lVar3;
}


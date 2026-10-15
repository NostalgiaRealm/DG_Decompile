/*
 * FUN_180017e24 at 180017e24
 * undefined __fastcall FUN_180017e24(longlong param_1, int param_2, char param_3)
 * Address ranges: 180017e24-180017e69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017e24(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = (longlong)param_2 * 0x41;
  FUN_180017344(param_1,param_2,*(uint *)(lVar2 + 400 + lVar1),*(uint *)(lVar2 + 0x194 + lVar1),
                *(uint *)(lVar2 + 0x198 + lVar1),*(uint *)(lVar2 + 0x19c + lVar1),param_3);
  return;
}


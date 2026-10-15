/*
 * FUN_180006824 at 180006824
 * undefined __fastcall FUN_180006824(longlong param_1, int param_2, char param_3)
 * Address ranges: 180006824-180006869
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006824(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = (longlong)param_2 * 0x55;
  FUN_1800088e8(param_1,param_2,*(int *)(lVar2 + 0x1e2 + lVar1),*(uint *)(lVar2 + 0x1e6 + lVar1),
                *(int *)(lVar2 + 0x1ea + lVar1),*(uint *)(lVar2 + 0x1ee + lVar1),param_3);
  return;
}


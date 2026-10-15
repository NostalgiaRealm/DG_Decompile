/*
 * FUN_1800b09d8 at 1800b09d8
 * undefined __fastcall FUN_1800b09d8(longlong param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 1800b09d8-1800b0a60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b09d8(longlong param_1,uint param_2,int param_3,uint param_4)

{
  longlong lVar1;
  
  if (param_2 < 0x100) {
    lVar1 = (ulonglong)param_2 * 0xe + (longlong)param_3;
    if (*(uint *)(param_1 + 0x6ad0 + lVar1 * 4) != param_4) {
      FUN_1800b0a64(param_1,param_2,param_3,(ulonglong)param_4);
      *(uint *)(param_1 + 0x6ad0 + lVar1 * 4) = param_4;
    }
  }
  else {
    lVar1 = (ulonglong)(param_2 - 0x100) * 0xe + (longlong)param_3;
    if ((*(uint *)(param_1 + 0x6e50 + lVar1 * 4) != param_4) &&
       ((param_4 != 3 || (2 < param_3 - 5U)))) {
      FUN_1800b0a64(param_1,param_2,param_3,(ulonglong)param_4);
      *(uint *)(param_1 + 0x6e50 + lVar1 * 4) = param_4;
    }
  }
  return;
}


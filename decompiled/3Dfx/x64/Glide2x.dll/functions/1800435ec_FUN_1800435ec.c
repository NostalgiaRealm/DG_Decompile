/*
 * FUN_1800435ec at 1800435ec
 * undefined4 __fastcall FUN_1800435ec(longlong * param_1, ulonglong param_2, undefined8 param_3, uint param_4)
 * Address ranges: 1800435ec-18004367a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800435ec(longlong *param_1,ulonglong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong local_res10;
  uint local_res20 [2];
  uint local_18 [4];
  
  local_18[0] = 0;
  local_res10 = param_2;
  local_res20[0] = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  lVar1 = FUN_18004379c(param_1,&local_res10);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar1 = lVar1 + 8;
    lVar2 = FUN_18004381c(lVar1,local_18);
    if (lVar2 == 0) {
      local_res20[0] = 0xffffffff;
      lVar2 = FUN_18004381c(lVar1,local_res20);
      uVar3 = 0;
      if (lVar2 == 0) goto LAB_18004365f;
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x14);
  }
LAB_18004365f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar3;
}


/*
 * FUN_180043a94 at 180043a94
 * undefined4 __fastcall FUN_180043a94(longlong * param_1, ulonglong param_2, undefined8 param_3, uint param_4)
 * Address ranges: 180043a94-180043b22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180043a94(longlong *param_1,ulonglong param_2,undefined8 param_3,uint param_4)

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
  lVar1 = FUN_180043c44(param_1,&local_res10);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar1 = lVar1 + 8;
    lVar2 = FUN_180043cc4(lVar1,local_18);
    if (lVar2 == 0) {
      local_res20[0] = 0xffffffff;
      lVar2 = FUN_180043cc4(lVar1,local_res20);
      uVar3 = 0;
      if (lVar2 == 0) goto LAB_180043b07;
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x14);
  }
LAB_180043b07:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar3;
}


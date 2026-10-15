/*
 * FUN_1800eaac0 at 1800eaac0
 * undefined4 __fastcall FUN_1800eaac0(longlong * param_1, ulonglong param_2, undefined8 param_3, uint param_4)
 * Address ranges: 1800eaac0-1800eab4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800eaac0(longlong *param_1,ulonglong param_2,undefined8 param_3,uint param_4)

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
  lVar1 = FUN_1800eae18(param_1,&local_res10);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar1 = lVar1 + 8;
    lVar2 = FUN_1800eae98(lVar1,local_18);
    if (lVar2 == 0) {
      local_res20[0] = 0xffffffff;
      lVar2 = FUN_1800eae98(lVar1,local_res20);
      uVar3 = 0;
      if (lVar2 == 0) goto LAB_1800eab33;
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x14);
  }
LAB_1800eab33:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar3;
}


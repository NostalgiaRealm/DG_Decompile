/*
 * FUN_180045cec at 180045cec
 * undefined1 __fastcall FUN_180045cec(longlong * param_1, ulonglong param_2, uint param_3)
 * Address ranges: 180045cec-180045da6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180045cec(longlong *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  ulonglong local_res10;
  uint local_res18 [2];
  uint local_18 [4];
  
  local_18[0] = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  uVar4 = 1;
  lVar1 = FUN_180045da8(param_1,&local_res10);
  if (lVar1 != 0) {
    lVar1 = lVar1 + 8;
    plVar2 = (longlong *)FUN_180045e28(lVar1,local_18);
    if (plVar2 == (longlong *)0x0) {
      local_res18[0] = 0xffffffff;
      plVar2 = (longlong *)FUN_180045e28(lVar1,local_res18);
      if (plVar2 == (longlong *)0x0) goto LAB_180045d8b;
    }
    if ((*(int *)((longlong)plVar2 + 0x14) == 0) || (*(int *)(*plVar2 + 0x30) == 3)) {
      uVar3 = (**(code **)(**(longlong **)(*plVar2 + 0x18) + 0x40))();
      if ((ulonglong)plVar2[3] <= uVar3) goto LAB_180045d8b;
    }
    uVar4 = 0;
  }
LAB_180045d8b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar4;
}


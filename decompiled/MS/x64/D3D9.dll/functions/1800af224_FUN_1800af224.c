/*
 * FUN_1800af224 at 1800af224
 * undefined __fastcall FUN_1800af224(undefined8 param_1, int param_2, longlong param_3)
 * Address ranges: 1800af224-1800af332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800af224(undefined8 param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  LPCRITICAL_SECTION p_Var2;
  RECT *pRVar3;
  char local_res20 [8];
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_18002db9c(local_res20);
  FUN_1800fa780(local_38);
  uVar1 = FUN_1800adabc(param_2);
  pRVar3 = (RECT *)0x0;
  if (uVar1 != 0) {
    local_18 = *(undefined4 *)(param_3 + 0x24);
    local_28 = *(undefined4 *)(uVar1 + 0xb0);
    local_24 = *(uint *)(uVar1 + 0xb4);
    local_14 = *(undefined4 *)(param_3 + 0x28);
    local_20 = 0;
    local_30 = 0;
    if (*(char *)(uVar1 + 0x101) == '\0') {
      pRVar3 = (RECT *)(&DAT_180112aa4 + (ulonglong)*(uint *)(uVar1 + 0xf0) * 600);
    }
    FUN_180015fb4((longlong *)(uVar1 + 8),param_3,(ulonglong)local_24,(longlong *)(uVar1 + 8),
                  local_28,local_24,(tagPOINT)&local_20,&local_30,0,0,0,pRVar3);
  }
  FUN_1800fa7bc();
  p_Var2 = DAT_1801123a8;
  if (local_res20[0] == '\0') {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  else {
    LeaveCriticalSection(DAT_1801123a8);
    p_Var2 = DAT_1801123a8;
  }
  LOCK();
  p_Var2[1].LockCount = p_Var2[1].LockCount + -1;
  UNLOCK();
  return;
}


/*
 * FUN_1800e0d7c at 1800e0d7c
 * undefined __fastcall FUN_1800e0d7c(longlong * param_1, undefined8 * param_2, char param_3)
 * Address ranges: 1800e0d7c-1800e0e06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e0d7c(longlong *param_1,undefined8 *param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined8 uVar2;
  LPCRITICAL_SECTION p_Var3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc4);
  p_Var3 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  uVar2 = FUN_1800df678((ulonglong)p_Var3,(longlong)param_2);
  cVar1 = (char)uVar2;
  if ((*(char *)((longlong)param_2 + 0xd6e) != '\0') ||
     (cVar1 != *(char *)((longlong)param_2 + 0xd6d))) {
    if (cVar1 == '\0') {
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
    }
    FUN_1800df83c(param_1,param_2,(longlong *)0x0,param_3);
    *(char *)((longlong)param_2 + 0xd6d) = cVar1;
    *(undefined1 *)((longlong)param_2 + 0xd6e) = 0;
    (**(code **)(*param_1 + 0x70))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001800e0e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}


/*
 * FUN_100222d0 at 100222d0
 * undefined __fastcall FUN_100222d0(char * param_1)
 * Address ranges: 100222d0-100222f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100222d0(char *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  p_Var1 = DAT_100ba2e4;
  if (*param_1 == '\0') {
    DAT_100ba2e4[1].LockCount = 0;
  }
  else {
    LeaveCriticalSection(DAT_100ba2e4);
    p_Var1 = DAT_100ba2e4;
  }
  LOCK();
  p_Var1[1].RecursionCount = p_Var1[1].RecursionCount + -1;
  UNLOCK();
  return;
}


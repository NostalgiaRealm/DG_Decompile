/*
 * FUN_10029968 at 10029968
 * undefined __fastcall FUN_10029968(char * param_1)
 * Address ranges: 10029968-10029990
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10029968(char *param_1)

{
  LPCRITICAL_SECTION p_Var1;
  
  p_Var1 = DAT_100deaa4;
  if (*param_1 == '\0') {
    DAT_100deaa4[1].LockCount = 0;
  }
  else {
    LeaveCriticalSection(DAT_100deaa4);
    p_Var1 = DAT_100deaa4;
  }
  LOCK();
  p_Var1[1].RecursionCount = p_Var1[1].RecursionCount + -1;
  UNLOCK();
  return;
}


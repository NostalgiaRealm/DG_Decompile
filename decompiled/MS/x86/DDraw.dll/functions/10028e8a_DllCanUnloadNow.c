/*
 * DllCanUnloadNow at 10028e8a
 * HRESULT __stdcall DllCanUnloadNow(void)
 * Address ranges: 10028e8a-10028ea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HRESULT DllCanUnloadNow(void)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* 0x28e8a  13  DllCanUnloadNow */
  UNRECOVERED_JUMPTABLE = FUN_10023885("DllCanUnloadNow");
  if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  return (uint)(DAT_1006c23c == 0);
}


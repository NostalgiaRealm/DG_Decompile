/*
 * DllGetClassObject at 10028e63
 * HRESULT __stdcall DllGetClassObject(IID * rclsid, IID * riid, LPVOID * ppv)
 * Address ranges: 10028e63-10028e89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  int iVar1;
  HRESULT HVar2;
  
                    /* 0x28e63  14  DllGetClassObject */
  UNRECOVERED_JUMPTABLE = FUN_10023885("DllGetClassObject");
  if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  HVar2 = FUN_100292f1(&rclsid->Data1,(int)riid,ppv);
  return HVar2;
}


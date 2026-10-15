/*
 * FUN_180042470 at 180042470
 * undefined8 * __cdecl FUN_180042470(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 180042470-18004256f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180042470(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  DWORD DVar1;
  HRSRC pHVar2;
  undefined8 *puVar3;
  HGLOBAL hResData;
  undefined8 *puVar4;
  
  pHVar2 = FindResourceW(param_1,param_2,param_3);
  if (pHVar2 != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,pHVar2);
    if (DVar1 != 0) {
      puVar3 = (undefined8 *)thunk_FUN_18005fb88((ulonglong)DVar1);
      pHVar2 = FindResourceW(param_1,param_2,param_3);
      if (pHVar2 != (HRSRC)0x0) {
        DVar1 = SizeofResource(param_1,pHVar2);
        if (((DVar1 != 0) && (hResData = LoadResource(param_1,pHVar2), hResData != (HGLOBAL)0x0)) &&
           (puVar4 = LockResource(hResData), puVar4 != (undefined8 *)0x0)) {
          thunk_FUN_180001218(puVar3,puVar4,(ulonglong)DVar1);
          return puVar3;
        }
      }
      thunk_FUN_18005fbc8(puVar3);
    }
  }
  return (undefined8 *)0x0;
}


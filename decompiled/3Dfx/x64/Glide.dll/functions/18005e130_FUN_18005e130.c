/*
 * FUN_18005e130 at 18005e130
 * undefined8 * __fastcall FUN_18005e130(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 18005e130-18005e1df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005e130(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

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
      puVar3 = (undefined8 *)thunk_FUN_18005db9c((ulonglong)DVar1);
      pHVar2 = FindResourceW(param_1,param_2,param_3);
      if (pHVar2 != (HRSRC)0x0) {
        DVar1 = SizeofResource(param_1,pHVar2);
        if (DVar1 != 0) {
          hResData = LoadResource(param_1,pHVar2);
          if (hResData != (HGLOBAL)0x0) {
            puVar4 = LockResource(hResData);
            if (puVar4 != (undefined8 *)0x0) {
              FUN_18005f1b0(puVar3,puVar4,(ulonglong)DVar1);
              return puVar3;
            }
          }
        }
      }
      FUN_18005dbc0(puVar3);
    }
  }
  return (undefined8 *)0x0;
}


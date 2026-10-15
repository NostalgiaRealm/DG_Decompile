/*
 * FUN_10052070 at 10052070
 * undefined4 * __fastcall FUN_10052070(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 10052070-10052102
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10052070(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  HRSRC pHVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  HGLOBAL hResData;
  undefined4 *puVar4;
  
  pHVar1 = FindResourceW(param_1,param_2,param_3);
  if (pHVar1 != (HRSRC)0x0) {
    DVar2 = SizeofResource(param_1,pHVar1);
    if (DVar2 != 0) {
      puVar3 = (undefined4 *)FUN_10052293(DVar2);
      pHVar1 = FindResourceW(param_1,param_2,param_3);
      if (pHVar1 != (HRSRC)0x0) {
        DVar2 = SizeofResource(param_1,pHVar1);
        if (DVar2 != 0) {
          hResData = LoadResource(param_1,pHVar1);
          if (hResData != (HGLOBAL)0x0) {
            puVar4 = LockResource(hResData);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_10052930(puVar3,puVar4,DVar2);
              return puVar3;
            }
          }
        }
      }
      thunk_FUN_10052276(puVar3);
    }
  }
  return (undefined4 *)0x0;
}


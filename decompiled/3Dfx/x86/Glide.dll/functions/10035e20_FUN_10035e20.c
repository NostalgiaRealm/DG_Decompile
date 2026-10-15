/*
 * FUN_10035e20 at 10035e20
 * undefined4 * __fastcall FUN_10035e20(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3)
 * Address ranges: 10035e20-10035eb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10035e20(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3)

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
      puVar3 = (undefined4 *)FUN_1004f9d3(DVar2);
      pHVar1 = FindResourceW(param_1,param_2,param_3);
      if (pHVar1 != (HRSRC)0x0) {
        DVar2 = SizeofResource(param_1,pHVar1);
        if (DVar2 != 0) {
          hResData = LoadResource(param_1,pHVar1);
          if (hResData != (HGLOBAL)0x0) {
            puVar4 = LockResource(hResData);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_100500b0(puVar3,puVar4,DVar2);
              return puVar3;
            }
          }
        }
      }
      thunk_FUN_1004f9b6(puVar3);
    }
  }
  return (undefined4 *)0x0;
}


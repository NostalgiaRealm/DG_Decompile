/*
 * FUN_1005c3d0 at 1005c3d0
 * undefined4 * __fastcall FUN_1005c3d0(HMODULE param_1, LPCWSTR param_2)
 * Address ranges: 1005c3d0-1005c463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1005c3d0(HMODULE param_1,LPCWSTR param_2)

{
  HRSRC pHVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  HGLOBAL hResData;
  undefined4 *puVar4;
  
  pHVar1 = FindResourceW(param_1,param_2,L"RT_CUSTOM");
  if (pHVar1 != (HRSRC)0x0) {
    DVar2 = SizeofResource(param_1,pHVar1);
    if (DVar2 != 0) {
      puVar3 = (undefined4 *)FUN_1005c789(DVar2);
      pHVar1 = FindResourceW(param_1,param_2,L"RT_CUSTOM");
      if (pHVar1 != (HRSRC)0x0) {
        DVar2 = SizeofResource(param_1,pHVar1);
        if (DVar2 != 0) {
          hResData = LoadResource(param_1,pHVar1);
          if (hResData != (HGLOBAL)0x0) {
            puVar4 = LockResource(hResData);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_1005ca00(puVar3,puVar4,DVar2);
              return puVar3;
            }
          }
        }
      }
      thunk_FUN_1005c76c(puVar3);
    }
  }
  return (undefined4 *)0x0;
}


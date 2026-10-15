/*
 * FUN_10035a30 at 10035a30
 * undefined4 __fastcall FUN_10035a30(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3, undefined4 * param_4)
 * Address ranges: 10035a30-10035a88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_10035a30(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3,undefined4 *param_4)

{
  HRSRC hResInfo;
  DWORD DVar1;
  HGLOBAL hResData;
  undefined4 *puVar2;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  if (hResInfo != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,hResInfo);
    if (DVar1 != 0) {
      hResData = LoadResource(param_1,hResInfo);
      if (hResData != (HGLOBAL)0x0) {
        puVar2 = LockResource(hResData);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2 = FUN_1004fd20(param_4,puVar2,DVar1);
          return CONCAT31((int3)((uint)puVar2 >> 8),1);
        }
      }
    }
  }
  return 0;
}


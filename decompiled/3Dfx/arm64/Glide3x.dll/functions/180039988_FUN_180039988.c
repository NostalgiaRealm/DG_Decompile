/*
 * FUN_180039988 at 180039988
 * undefined8 __cdecl FUN_180039988(undefined8 param_1, HMODULE param_2, LPCWSTR param_3, LPCWSTR param_4, undefined8 * param_5)
 * Address ranges: 180039988-180039a27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180039988(undefined8 param_1,HMODULE param_2,LPCWSTR param_3,LPCWSTR param_4,undefined8 *param_5
             )

{
  DWORD DVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined8 *puVar2;
  
  hResInfo = FindResourceW(param_2,param_3,param_4);
  if (hResInfo != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_2,hResInfo);
    if (((DVar1 != 0) && (hResData = LoadResource(param_2,hResInfo), hResData != (HGLOBAL)0x0)) &&
       (puVar2 = LockResource(hResData), puVar2 != (undefined8 *)0x0)) {
      thunk_FUN_1800010d8(param_5,puVar2,(ulonglong)DVar1);
      return 1;
    }
  }
  return 0;
}


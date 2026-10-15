/*
 * FUN_18005e1e0 at 18005e1e0
 * undefined8 __fastcall FUN_18005e1e0(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3, undefined8 * param_4)
 * Address ranges: 18005e1e0-18005e251
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005e1e0(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3,undefined8 *param_4)

{
  DWORD DVar1;
  HRSRC hResInfo;
  undefined4 extraout_var;
  HGLOBAL hResData;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  hResInfo = FindResourceW(param_1,param_2,param_3);
  uVar3 = 0;
  if (hResInfo != (HRSRC)0x0) {
    DVar1 = SizeofResource(param_1,hResInfo);
    uVar3 = CONCAT44(extraout_var,DVar1);
    if (DVar1 != 0) {
      hResData = LoadResource(param_1,hResInfo);
      uVar3 = 0;
      if (hResData != (HGLOBAL)0x0) {
        puVar2 = LockResource(hResData);
        uVar3 = 0;
        if (puVar2 != (undefined8 *)0x0) {
          puVar2 = FUN_18005f1b0(param_4,puVar2,(ulonglong)DVar1);
          return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


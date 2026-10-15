/*
 * FUN_1800fba30 at 1800fba30
 * undefined8 __fastcall FUN_1800fba30(HMODULE param_1, LPCWSTR param_2, LPCWSTR param_3, undefined8 * param_4)
 * Address ranges: 1800fba30-1800fbaa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fba30(HMODULE param_1,LPCWSTR param_2,LPCWSTR param_3,undefined8 *param_4)

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
          puVar2 = FUN_1800fbec0(param_4,puVar2,(ulonglong)DVar1);
          return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


/*
 * FUN_140023f20 at 140023f20
 * undefined8 * __fastcall FUN_140023f20(undefined8 * param_1, LPCSTR param_2, char param_3)
 * Address ranges: 140023f20-140023f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140023f20(undefined8 *param_1,LPCSTR param_2,char param_3)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_140026360;
  *(undefined1 *)(param_1 + 2) = 1;
  if (param_3 != '\0') {
    pvVar1 = CreateFileA(param_2,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    param_1[1] = pvVar1;
    return param_1;
  }
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  param_1[1] = pvVar1;
  return param_1;
}


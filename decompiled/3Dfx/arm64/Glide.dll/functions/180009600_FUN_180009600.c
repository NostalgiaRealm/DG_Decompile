/*
 * FUN_180009600 at 180009600
 * undefined8 * __cdecl FUN_180009600(undefined8 * param_1, LPCSTR param_2)
 * Address ranges: 180009600-18000965f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180009600(undefined8 *param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  
  *param_1 = &PTR_FUN_180062a40;
  *(undefined1 *)(param_1 + 2) = 1;
  pvVar1 = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  param_1[1] = pvVar1;
  return param_1;
}


/*
 * FUN_14000ac78 at 14000ac78
 * undefined8 __cdecl FUN_14000ac78(undefined8 param_1, undefined2 * param_2, undefined2 * param_3)
 * Address ranges: 14000ac78-14000ad2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14000ac78(undefined8 param_1,undefined2 *param_2,undefined2 *param_3)

{
  LPWSTR pWVar1;
  LPWSTR pWVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  pWVar1 = CharUpperW((LPWSTR)*param_2);
  pWVar2 = CharUpperW((LPWSTR)*param_3);
  if (pWVar1 == pWVar2) {
    do {
      if (param_2[uVar4] == 0) break;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      pWVar1 = CharUpperW((LPWSTR)param_2[uVar4]);
      pWVar2 = CharUpperW((LPWSTR)param_3[uVar4]);
    } while (pWVar1 == pWVar2);
  }
  if ((param_2[uVar4] == 0) && (param_3[uVar4] == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


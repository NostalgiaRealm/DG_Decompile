/*
 * FUN_1800ec360 at 1800ec360
 * longlong * __fastcall FUN_1800ec360(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800ec360-1800ec41e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800ec360(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  HANDLE pvVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_1800fbccc(0x38);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    *(undefined4 *)(plVar1 + 1) = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    *(undefined4 *)(plVar1 + 5) = 0x400;
    plVar1[6] = 0;
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    plVar1[6] = (longlong)pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      *plVar1 = param_1;
      *(undefined4 *)(plVar1 + 1) = param_2;
      *(undefined4 *)((longlong)plVar1 + 0x24) = param_3;
      uVar3 = FUN_1800ec0c4(plVar1);
      if ((char)uVar3 != '\0') {
        return plVar1;
      }
      CloseHandle((HANDLE)plVar1[6]);
      plVar1[6] = 0;
    }
    FUN_1800ebfe8((longlong)plVar1);
    FUN_1800fbcf0(plVar1);
  }
  return (longlong *)0x0;
}


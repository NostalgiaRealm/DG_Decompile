/*
 * FUN_180047880 at 180047880
 * longlong * __cdecl FUN_180047880(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 180047880-18004790b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180047880(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_1800636c0(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
    plVar1[4] = 0;
    plVar1[5] = 1;
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *(undefined4 *)(plVar1 + 6) = param_3;
    plVar1[7] = param_4;
    uVar2 = FUN_180047758(plVar1);
    if ((uVar2 & 1) != 0) {
      return plVar1;
    }
    FUN_180047710((longlong)plVar1);
    FUN_180063700(plVar1);
  }
  return (longlong *)0x0;
}


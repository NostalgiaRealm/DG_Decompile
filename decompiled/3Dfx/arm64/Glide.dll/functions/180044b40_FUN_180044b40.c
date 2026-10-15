/*
 * FUN_180044b40 at 180044b40
 * longlong * __cdecl FUN_180044b40(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 180044b40-180044bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180044b40(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FUN_1800609d8(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
    plVar1[4] = 0;
    plVar1[5] = 1;
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *(undefined4 *)(plVar1 + 6) = param_3;
    plVar1[7] = param_4;
    uVar2 = FUN_180044a18(plVar1);
    if ((uVar2 & 1) != 0) {
      return plVar1;
    }
    FUN_1800449d0((longlong)plVar1);
    FUN_180060a18(plVar1);
  }
  return (longlong *)0x0;
}


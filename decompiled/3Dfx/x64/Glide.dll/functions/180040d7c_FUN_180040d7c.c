/*
 * FUN_180040d7c at 180040d7c
 * longlong * __fastcall FUN_180040d7c(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 180040d7c-180040e03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180040d7c(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_18005db9c(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 1;
    *(undefined4 *)(plVar1 + 6) = param_3;
    plVar1[7] = param_4;
    uVar2 = FUN_180040c84(plVar1);
    if ((char)uVar2 != '\0') {
      return plVar1;
    }
    FUN_180040c48((longlong)plVar1);
    FUN_18005dbc0(plVar1);
  }
  return (longlong *)0x0;
}


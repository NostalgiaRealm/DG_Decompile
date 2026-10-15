/*
 * FUN_1800408d4 at 1800408d4
 * longlong * __fastcall FUN_1800408d4(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 1800408d4-18004095b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800408d4(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_18005d6fc(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 1;
    *(undefined4 *)(plVar1 + 6) = param_3;
    plVar1[7] = param_4;
    uVar2 = FUN_1800407dc(plVar1);
    if ((char)uVar2 != '\0') {
      return plVar1;
    }
    FUN_1800407a0((longlong)plVar1);
    FUN_18005d720(plVar1);
  }
  return (longlong *)0x0;
}


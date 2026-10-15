/*
 * FUN_180042ee0 at 180042ee0
 * longlong * __fastcall FUN_180042ee0(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 180042ee0-180042f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_180042ee0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_180060a9c(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 1;
    *(undefined4 *)(plVar1 + 6) = param_3;
    plVar1[7] = param_4;
    uVar2 = FUN_180042de8(plVar1);
    if ((char)uVar2 != '\0') {
      return plVar1;
    }
    FUN_180042dac((longlong)plVar1);
    FUN_180060ac0(plVar1);
  }
  return (longlong *)0x0;
}


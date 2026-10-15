/*
 * FUN_1800e7f68 at 1800e7f68
 * longlong * __fastcall FUN_1800e7f68(longlong param_1, undefined4 param_2, undefined4 param_3, longlong param_4)
 * Address ranges: 1800e7f68-1800e7fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800e7f68(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1800fbccc(0x40);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = param_2;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 1;
    *(undefined4 *)(plVar1 + 6) = param_3;
    plVar1[7] = param_4;
    uVar2 = FUN_1800e7e70(plVar1);
    if ((char)uVar2 != '\0') {
      return plVar1;
    }
    FUN_1800e7e34((longlong)plVar1);
    FUN_1800fbcf0(plVar1);
  }
  return (longlong *)0x0;
}


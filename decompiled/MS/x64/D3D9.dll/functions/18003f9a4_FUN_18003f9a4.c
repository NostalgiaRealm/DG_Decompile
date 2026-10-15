/*
 * FUN_18003f9a4 at 18003f9a4
 * undefined8 __fastcall FUN_18003f9a4(longlong param_1)
 * Address ranges: 18003f9a4-18003fa65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18003f9a4(longlong param_1)

{
  char cVar1;
  uint7 extraout_var;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  uint7 uVar2;
  longlong lVar3;
  
  lVar3 = param_1;
  cVar1 = FUN_1800e6384(param_1,DAT_1801123b0,0x12,0x18010f360,param_1 + 8);
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_1800e6384(lVar3,DAT_1801123b0,6,0x18010f328,param_1 + 0x120);
    if (((cVar1 != '\0') &&
        (cVar1 = FUN_1800e6384(lVar3,DAT_1801123b0,0x11,0x18010f338,param_1 + 0x98), cVar1 != '\0'))
       && (cVar1 = FUN_1800e6384(lVar3,DAT_1801123b0,1,0x18010f324,param_1 + 0x160), cVar1 != '\0'))
    {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18003fa68(param_1);
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}


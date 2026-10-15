/*
 * FUN_1800072bc at 1800072bc
 * longlong __fastcall FUN_1800072bc(longlong param_1, byte * param_2)
 * Address ranges: 1800072bc-18000734b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800072bc(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18005f7f0(param_2,&DAT_180060468,0x10);
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x28;
  }
  else {
    iVar1 = FUN_18005f7f0(param_2,&DAT_180060478,0x10);
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
    }
    else {
      iVar1 = FUN_18005f7f0(param_2,&DAT_180060488,0x10);
      if (iVar1 == 0) {
        lVar2 = param_1 + 0x48;
      }
      else {
        lVar2 = 0;
        iVar1 = FUN_18005f7f0(param_2,&DAT_180060498,0x10);
        if (iVar1 == 0) {
          lVar2 = param_1 + 0x58;
        }
      }
    }
  }
  return lVar2;
}


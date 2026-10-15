/*
 * _grLfbGetWritePtr@4 at 180002724
 * longlong __fastcall _grLfbGetWritePtr@4(int param_1)
 * Address ranges: 180002724-1800027cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong _grLfbGetWritePtr_4(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  longlong lVar3;
  undefined4 local_48 [2];
  longlong local_40;
  
  if (param_1 < 3) {
    lVar3 = (&DAT_18006c8b0)[param_1];
    DAT_18006c8e4 = param_1;
    if (lVar3 == 0) {
      local_48[0] = 0x20;
      puVar2 = FUN_180015384();
      bVar1 = FUN_1800167d8((longlong)puVar2,1,param_1,(ulonglong)DAT_18006c8a4,DAT_18006c8a8,
                            DAT_18006c8a0,local_48);
      if ((int)CONCAT71(extraout_var,bVar1) != 0) {
        (&DAT_18006c8b0)[param_1] = local_40;
        lVar3 = local_40;
        if (DAT_18006c8e8 == '\0') {
          puVar2 = FUN_180015384();
          FUN_18001683c((longlong)puVar2,1,param_1);
        }
      }
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


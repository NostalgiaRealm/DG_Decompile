/*
 * _grLfbGetWritePtr@4 at 180004400
 * longlong __cdecl _grLfbGetWritePtr@4(uint param_1)
 * Address ranges: 180004400-180004497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong _grLfbGetWritePtr_4(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_40 [2];
  longlong local_38;
  
                    /* 0x4400  58  _grLfbGetWritePtr@4
                       0x4400  219  grLfbGetWritePtr */
  if ((int)param_1 < 3) {
    lVar3 = (&DAT_18006c890)[(int)param_1];
    DAT_18006c8c0._4_4_ = param_1;
    if (lVar3 == 0) {
      local_40[0] = 0x20;
      lVar2 = FUN_180017788();
      bVar1 = FUN_1800188e8(lVar2,1,param_1,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
      if ((bVar1) &&
         ((&DAT_18006c890)[(int)param_1] = local_38, lVar3 = local_38, DAT_18006c8c8 == '\0')) {
        lVar2 = FUN_180017788();
        FUN_180018990(lVar2,1,param_1);
      }
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


/*
 * _grLfbGetReadPtr@4 at 180004368
 * longlong __cdecl _grLfbGetReadPtr@4(uint param_1)
 * Address ranges: 180004368-1800043ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong _grLfbGetReadPtr_4(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_40 [2];
  longlong local_38;
  
                    /* 0x4368  57  _grLfbGetReadPtr@4
                       0x4368  218  grLfbGetReadPtr */
  if ((int)param_1 < 3) {
    lVar3 = (&DAT_18006c8a8)[(int)param_1];
    DAT_18006c8c0._0_4_ = param_1;
    if (lVar3 == 0) {
      local_40[0] = 0x20;
      lVar2 = FUN_180017788();
      bVar1 = FUN_1800188e8(lVar2,0,param_1,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
      if ((bVar1) &&
         ((&DAT_18006c8a8)[(int)param_1] = local_38, lVar3 = local_38, DAT_18006c8c8 == '\0')) {
        lVar2 = FUN_180017788();
        FUN_180018990(lVar2,0,param_1);
      }
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}


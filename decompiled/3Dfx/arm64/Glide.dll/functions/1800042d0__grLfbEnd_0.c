/*
 * _grLfbEnd@0 at 1800042d0
 * ulonglong __cdecl _grLfbEnd@0(ulonglong param_1)
 * Address ranges: 1800042d0-180004367
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong _grLfbEnd_0(ulonglong param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
                    /* 0x42d0  56  _grLfbEnd@0
                       0x42d0  217  grLfbEnd */
  if (DAT_18006c8c8 != '\0') {
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if ((&DAT_18006c8a8)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_180018990(lVar2,0,uVar3);
        param_1 = (ulonglong)bVar1;
        if ((uint)DAT_18006c8c0 != uVar3) {
          (&DAT_18006c8a8)[uVar4] = 0;
        }
      }
      if ((&DAT_18006c890)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_180018990(lVar2,1,uVar3);
        param_1 = (ulonglong)bVar1;
        if (DAT_18006c8c0._4_4_ != uVar3) {
          (&DAT_18006c890)[uVar4] = 0;
        }
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < 3);
    DAT_18006c8c8 = '\0';
  }
  return param_1;
}


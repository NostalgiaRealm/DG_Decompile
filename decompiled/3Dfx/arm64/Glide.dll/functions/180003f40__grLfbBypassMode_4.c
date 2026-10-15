/*
 * _grLfbBypassMode@4 at 180003f40
 * ulonglong __cdecl _grLfbBypassMode@4(ulonglong param_1)
 * Address ranges: 180003f40-180004033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong _grLfbBypassMode_4(ulonglong param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_40 [2];
  undefined8 local_38;
  
                    /* 0x3f40  53  _grLfbBypassMode@4
                       0x3f40  214  grLfbBypassMode */
  uVar3 = (uint)((int)param_1 != 1);
  if ((DAT_18006c880 != uVar3) && (DAT_18006c880 = uVar3, DAT_18006c8c8 != '\0')) {
    local_40[0] = 0x20;
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if ((&DAT_18006c8a8)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_180018990(lVar2,0,uVar3);
        param_1 = (ulonglong)bVar1;
      }
      if ((&DAT_18006c890)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_180018990(lVar2,1,uVar3);
        param_1 = (ulonglong)bVar1;
      }
      if ((&DAT_18006c8a8)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_1800188e8(lVar2,0,uVar3,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
        param_1 = (ulonglong)bVar1;
        if (bVar1) {
          (&DAT_18006c8a8)[uVar4] = local_38;
        }
      }
      if ((&DAT_18006c890)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_1800188e8(lVar2,1,uVar3,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
        param_1 = (ulonglong)bVar1;
        if (bVar1) {
          (&DAT_18006c890)[uVar4] = local_38;
        }
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < 3);
  }
  return param_1;
}


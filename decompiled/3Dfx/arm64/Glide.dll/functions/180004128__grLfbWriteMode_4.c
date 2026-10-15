/*
 * _grLfbWriteMode@4 at 180004128
 * ulonglong __cdecl _grLfbWriteMode@4(ulonglong param_1)
 * Address ranges: 180004128-180004213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong _grLfbWriteMode_4(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  iVar2 = (int)param_1;
                    /* 0x4128  63  _grLfbWriteMode@4
                       0x4128  224  grLfbWriteMode */
  if ((DAT_18006c884 != iVar2) && (DAT_18006c884 = iVar2, DAT_18006c8c8 != '\0')) {
    local_40[0] = 0x20;
    uVar5 = 0;
    do {
      uVar4 = (uint)uVar5;
      if ((&DAT_18006c8a8)[uVar5] != 0) {
        lVar3 = FUN_180017788();
        bVar1 = FUN_180018990(lVar3,0,uVar4);
        param_1 = (ulonglong)bVar1;
      }
      if ((&DAT_18006c890)[uVar5] != 0) {
        lVar3 = FUN_180017788();
        bVar1 = FUN_180018990(lVar3,1,uVar4);
        param_1 = (ulonglong)bVar1;
      }
      if ((&DAT_18006c8a8)[uVar5] != 0) {
        lVar3 = FUN_180017788();
        bVar1 = FUN_1800188e8(lVar3,0,uVar4,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
        param_1 = (ulonglong)bVar1;
        if (bVar1) {
          (&DAT_18006c8a8)[uVar5] = local_38;
        }
      }
      if ((&DAT_18006c890)[uVar5] != 0) {
        lVar3 = FUN_180017788();
        bVar1 = FUN_1800188e8(lVar3,1,uVar4,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
        param_1 = (ulonglong)bVar1;
        if (bVar1) {
          (&DAT_18006c890)[uVar5] = local_38;
        }
      }
      uVar5 = (ulonglong)(uVar4 + 1);
    } while (uVar4 + 1 < 3);
  }
  return param_1;
}


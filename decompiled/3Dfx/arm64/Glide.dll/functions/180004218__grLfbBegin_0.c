/*
 * _grLfbBegin@0 at 180004218
 * undefined __cdecl _grLfbBegin@0(void)
 * Address ranges: 180004218-1800042cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbBegin_0(void)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_40 [2];
  undefined8 local_38;
  
                    /* 0x4218  52  _grLfbBegin@0
                       0x4218  213  grLfbBegin */
  if (DAT_18006c8c8 == '\0') {
    local_40[0] = 0x20;
    uVar4 = 0;
    do {
      iVar3 = (int)uVar4;
      if ((&DAT_18006c8a8)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_1800188e8(lVar2,0,iVar3,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
        if (bVar1) {
          (&DAT_18006c8a8)[uVar4] = local_38;
        }
      }
      if ((&DAT_18006c890)[uVar4] != 0) {
        lVar2 = FUN_180017788();
        bVar1 = FUN_1800188e8(lVar2,1,iVar3,DAT_18006c884,DAT_18006c888,DAT_18006c880,local_40);
        if (bVar1) {
          (&DAT_18006c890)[uVar4] = local_38;
        }
      }
      uVar4 = (ulonglong)(iVar3 + 1U);
    } while (iVar3 + 1U < 3);
    DAT_18006c8c8 = '\x01';
  }
  return;
}


/*
 * FUN_180062ac8 at 180062ac8
 * undefined __cdecl FUN_180062ac8(uint * param_1, undefined1 * param_2, uint param_3)
 * Address ranges: 180062ac8-180062ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180062ac8(uint *param_1,undefined1 *param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int local_70 [16];
  
  uVar4 = *param_1;
  uVar5 = uVar4 + param_3 * 8;
  if (uVar5 < uVar4) {
    param_1[1] = param_1[1] + 1;
  }
  *param_1 = uVar5;
  param_1[1] = param_1[1] + (param_3 >> 0x1d);
  if (param_3 != 0) {
    uVar5 = uVar4 >> 3 & 0x3f;
    do {
      param_3 = param_3 - 1;
      *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar5 + 0x18) = *param_2;
      if (uVar5 == 0x3f) {
        uVar5 = 0;
        lVar6 = 0;
        do {
          uVar4 = uVar5 + 3;
          uVar2 = uVar5 + 2;
          uVar3 = uVar5 + 1;
          uVar1 = (ulonglong)uVar5;
          uVar5 = uVar5 + 4;
          local_70[lVar6] =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           ((longlong)param_1 + (ulonglong)uVar4 + 0x18),
                                          *(undefined1 *)
                                           ((longlong)param_1 + (ulonglong)uVar2 + 0x18)),
                                 *(undefined1 *)((longlong)param_1 + (ulonglong)uVar3 + 0x18)),
                        *(undefined1 *)((longlong)param_1 + uVar1 + 0x18));
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x10);
        FUN_1800620d8((int *)(param_1 + 2),local_70);
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + 1;
      }
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


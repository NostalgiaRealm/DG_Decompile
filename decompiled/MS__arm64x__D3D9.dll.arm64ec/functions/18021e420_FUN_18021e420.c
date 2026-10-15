/*
 * FUN_18021e420 at 18021e420
 * undefined FUN_18021e420(void)
 * Address ranges: 18021e420-18021e4ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021e420(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 local_70 [16];
  
  uVar1 = *param_1;
  uVar3 = uVar1 + param_3 * 8;
  if (uVar3 < uVar1) {
    param_1[1] = param_1[1] + 1;
  }
  *param_1 = uVar3;
  param_1[1] = param_1[1] + (param_3 >> 0x1d);
  if (param_3 != 0) {
    uVar3 = uVar1 >> 3 & 0x3f;
    do {
      param_3 = param_3 - 1;
      *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar3 + 0x18) = *param_2;
      if (uVar3 == 0x3f) {
        uVar5 = 0;
        lVar6 = 0;
        do {
          iVar4 = (int)uVar5;
          lVar2 = uVar5 + 0x18;
          uVar5 = (ulonglong)(iVar4 + 4);
          local_70[lVar6] =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           ((longlong)param_1 + (ulonglong)(iVar4 + 3) + 0x18),
                                          *(undefined1 *)
                                           ((longlong)param_1 + (ulonglong)(iVar4 + 2) + 0x18)),
                                 *(undefined1 *)((longlong)param_1 + (ulonglong)(iVar4 + 1) + 0x18))
                        ,*(undefined1 *)((longlong)param_1 + lVar2));
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x10);
        FUN_18021d9f8(param_1 + 2,local_70);
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + 1;
      }
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


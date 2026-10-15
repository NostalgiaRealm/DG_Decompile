/*
 * FUN_18005ede8 at 18005ede8
 * undefined __fastcall FUN_18005ede8(uint * param_1, undefined1 * param_2, ulonglong param_3)
 * Address ranges: 18005ede8-18005ee9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ede8(uint *param_1,undefined1 *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int local_68 [18];
  
  uVar7 = *param_1;
  uVar5 = param_3 & 0xffffffff;
  uVar4 = uVar7 + (int)param_3 * 8;
  if (uVar4 < uVar7) {
    param_1[1] = param_1[1] + 1;
  }
  *param_1 = uVar4;
  param_1[1] = param_1[1] + ((uint)(param_3 >> 0x1d) & 7);
  if ((int)param_3 != 0) {
    uVar7 = uVar7 >> 3 & 0x3f;
    do {
      uVar1 = *param_2;
      uVar4 = (int)uVar5 - 1;
      uVar5 = (ulonglong)uVar4;
      param_2 = param_2 + 1;
      *(undefined1 *)((longlong)param_1 + (longlong)(int)uVar7 + 0x18) = uVar1;
      if (uVar7 == 0x3f) {
        uVar6 = 0;
        lVar8 = 0;
        do {
          lVar3 = uVar6 + 0x18;
          iVar2 = (int)uVar6;
          uVar6 = (ulonglong)(iVar2 + 4);
          local_68[lVar8] =
               CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                           ((longlong)param_1 + (ulonglong)(iVar2 + 3) + 0x18),
                                          *(undefined1 *)
                                           ((longlong)param_1 + (ulonglong)(iVar2 + 2) + 0x18)),
                                 *(undefined1 *)((longlong)param_1 + (ulonglong)(iVar2 + 1) + 0x18))
                        ,*(undefined1 *)((longlong)param_1 + lVar3));
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x10);
        FUN_18005e570((int *)(param_1 + 2),local_68);
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + 1;
      }
    } while (uVar4 != 0);
  }
  return;
}


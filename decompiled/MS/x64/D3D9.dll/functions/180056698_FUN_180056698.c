/*
 * FUN_180056698 at 180056698
 * undefined __fastcall FUN_180056698(longlong * param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 180056698-18005678b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056698(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar4 = 0;
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 != 0) {
    lVar2 = param_1[1];
    uVar6 = 0;
    uVar8 = uVar1;
    do {
      uVar4 = uVar8 + uVar6 >> 1;
      lVar9 = (ulonglong)uVar4 * 0x40 + lVar2;
      uVar7 = 0;
      do {
        uVar3 = *(ulonglong *)(lVar9 + uVar7 * 8);
        if (uVar3 != param_2[uVar7]) {
          uVar5 = uVar4;
          if ((ulonglong)param_2[uVar7] < uVar3) goto LAB_18005670d;
          break;
        }
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < 7);
      uVar7 = 0;
      while (uVar3 = *(ulonglong *)(lVar9 + uVar7 * 8), uVar3 == param_2[uVar7]) {
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        if (6 < uVar6) goto LAB_180056712;
      }
      if ((ulonglong)param_2[uVar7] <= uVar3) break;
      uVar6 = uVar4 + 1;
      uVar5 = uVar8;
      uVar4 = uVar6;
LAB_18005670d:
      uVar8 = uVar5;
    } while (uVar8 != uVar6);
LAB_180056712:
    if (((((uVar4 != uVar1) &&
          (lVar9 = (ulonglong)uVar4 * 0x40, *(longlong *)(lVar9 + lVar2) == *param_2)) &&
         (*(longlong *)(lVar9 + 8 + lVar2) == param_2[1])) &&
        ((*(longlong *)(lVar9 + 0x10 + lVar2) == param_2[2] &&
         (*(longlong *)(lVar9 + 0x18 + lVar2) == param_2[3])))) &&
       ((*(longlong *)(lVar9 + 0x20 + lVar2) == param_2[4] &&
        ((*(longlong *)(lVar9 + 0x28 + lVar2) == param_2[5] &&
         (*(longlong *)(lVar9 + 0x30 + lVar2) == param_2[6])))))) {
      *(undefined8 *)(lVar9 + 0x38 + lVar2) = *param_3;
      return;
    }
  }
  FUN_18003dc20(param_1,uVar4,param_2,param_3);
  return;
}


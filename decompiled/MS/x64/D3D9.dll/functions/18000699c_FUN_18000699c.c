/*
 * FUN_18000699c at 18000699c
 * ulonglong __fastcall FUN_18000699c(ulonglong * param_1, uint param_2)
 * Address ranges: 18000699c-180006a47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000699c(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  
  uVar4 = (ulonglong)param_2;
  uVar1 = *param_1;
  uVar3 = 0;
  lVar2 = *(longlong *)(uVar1 + 0x1338 + uVar4 * 8);
  if ((*(int *)(lVar2 + 0x20) == 3) || (*(int *)(lVar2 + 0x20) == 5)) {
    uVar3 = *(ulonglong *)(lVar2 + 0x58);
  }
  if (uVar3 != 0) {
    if ((((uVar3 == param_1[1]) || (uVar3 == param_1[2])) || (uVar3 == param_1[3])) ||
       ((uVar3 == param_1[4] || (cVar5 = '\0', uVar3 == param_1[5])))) {
      cVar5 = '\x01';
    }
    if (*(char *)(uVar4 + 0xcd0 + uVar1) != cVar5) {
      (**(code **)(**(longlong **)(uVar1 + 0x28) + 0xd8))();
      uVar3 = *param_1;
      *(char *)(uVar4 + 0xcd0 + uVar3) = cVar5;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}


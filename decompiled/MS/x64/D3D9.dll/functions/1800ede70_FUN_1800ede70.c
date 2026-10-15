/*
 * FUN_1800ede70 at 1800ede70
 * ulonglong __fastcall FUN_1800ede70(longlong * param_1, byte * param_2)
 * Address ranges: 1800ede70-1800edec1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ede70(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  lVar1 = *param_1;
  while ((lVar1 != 0 && (iVar2 = FUN_1800fc514(param_2,(byte *)param_1[uVar3]), iVar2 != 0))) {
    uVar3 = (ulonglong)((int)uVar3 + 1);
    lVar1 = param_1[uVar3];
  }
  if (param_1[uVar3] == 0) {
    param_1[uVar3] = (longlong)param_2;
  }
  return uVar3;
}


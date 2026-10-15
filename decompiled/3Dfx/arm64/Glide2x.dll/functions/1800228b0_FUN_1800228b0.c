/*
 * FUN_1800228b0 at 1800228b0
 * undefined __cdecl FUN_1800228b0(longlong * param_1)
 * Address ranges: 1800228b0-18002291b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800228b0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180022ca0(param_1,*(int *)(param_1[1] + 0x2984));
  if ((((int)uVar1 != -1) &&
      (lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar1 & 0xffffffff),
      (*(byte *)(lVar2 + 0x9a) & 1) != 0)) && (*(char *)(lVar2 + 0x95) != '\0')) {
    (**(code **)(*param_1 + 0x50))(param_1,0,0);
  }
  return;
}


/*
 * FUN_18002102c at 18002102c
 * undefined __fastcall FUN_18002102c(longlong * param_1)
 * Address ranges: 18002102c-18002108b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002102c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1[1] + 0x2984);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = 1;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    uVar3 = 2;
  }
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar3);
  if (((*(byte *)(lVar2 + 0x9a) & 1) != 0) && (*(char *)(lVar2 + 0x95) != '\0')) {
    (**(code **)(*param_1 + 0x50))(param_1,0,0);
  }
  return;
}


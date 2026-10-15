/*
 * FUN_1800144d0 at 1800144d0
 * undefined __fastcall FUN_1800144d0(longlong * param_1)
 * Address ranges: 1800144d0-18001451e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800144d0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180014854(param_1,*(int *)(param_1[1] + 0x29fc));
  if (uVar1 != 0xffffffff) {
    lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar1);
    if (((*(byte *)(lVar2 + 0x9a) & 1) != 0) && (*(char *)(lVar2 + 0x95) != '\0')) {
      (**(code **)(*param_1 + 0x50))(param_1,0,0);
    }
  }
  return;
}


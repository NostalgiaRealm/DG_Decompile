/*
 * FUN_180016b90 at 180016b90
 * undefined __cdecl FUN_180016b90(longlong * param_1)
 * Address ranges: 180016b90-180016bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016b90(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180016f80(param_1,*(int *)(param_1[1] + 0x29fc));
  if (((uVar1 != 0xffffffff) &&
      (lVar2 = (**(code **)(*param_1 + 0x58))(param_1,uVar1), (*(byte *)(lVar2 + 0x9a) & 1) != 0))
     && (*(char *)(lVar2 + 0x95) != '\0')) {
    (**(code **)(*param_1 + 0x50))(param_1,0,0);
  }
  return;
}


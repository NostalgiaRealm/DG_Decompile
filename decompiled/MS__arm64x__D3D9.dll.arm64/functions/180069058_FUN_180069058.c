/*
 * FUN_180069058 at 180069058
 * undefined FUN_180069058(void)
 * Address ranges: 180069058-1800690df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180069058(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*param_1 + 0x4f8);
  if (iVar1 != 0) {
    *(undefined1 *)(*param_1 + (ulonglong)(iVar1 - 1) + 0x50c) = 1;
    lVar3 = *param_1;
    if (*(char *)(*(longlong *)(lVar3 + 0x100) + 0x148) != '\0') {
      if (*(int *)(lVar3 + 0x304) == 0) {
        uVar2 = FUN_1800f42d0(lVar3,4,1);
        *(undefined4 *)(*param_1 + 0x304) = uVar2;
      }
      lVar3 = *param_1;
      FUN_1800f5730(lVar3,param_1[1],0x36,*(undefined4 *)(lVar3 + 0x304),0xf,
                    *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(lVar3 + 0x4f8) - 1) * 4 + 0x2e4),
                    0xe4,0);
    }
  }
  return;
}


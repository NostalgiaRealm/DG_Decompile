/*
 * FUN_180012390 at 180012390
 * undefined FUN_180012390(void)
 * Address ranges: 180012390-180012403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012390(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xce4) == '\0') {
    FUN_180012320();
    lVar4 = *(longlong *)(param_1 + 0xe10);
    uVar3 = 0;
    do {
      uVar5 = 0;
      do {
        iVar1 = uVar5 * 4;
        uVar2 = uVar5 + uVar3 * 4;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar4 + 0x8500 + (ulonglong)uVar2 * 4) =
             *(undefined4 *)(lVar4 + 0x8640 + (ulonglong)(uVar3 + iVar1) * 4);
      } while (uVar5 < 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    *(undefined1 *)(param_1 + 0xce4) = 1;
  }
  return;
}


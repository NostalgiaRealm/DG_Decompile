/*
 * FUN_18001e670 at 18001e670
 * undefined __fastcall FUN_18001e670(longlong param_1)
 * Address ranges: 18001e670-18001e6d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e670(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xce4) == '\0') {
    FUN_18001e5e0(param_1);
    lVar3 = *(longlong *)(param_1 + 0xe10);
    uVar4 = 0;
    do {
      uVar5 = 0;
      do {
        iVar1 = uVar5 * 4;
        uVar2 = uVar4 * 4 + uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar3 + 0x8500 + (ulonglong)uVar2 * 4) =
             *(undefined4 *)(lVar3 + 0x8640 + (ulonglong)(uVar4 + iVar1) * 4);
      } while (uVar5 < 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    *(undefined1 *)(param_1 + 0xce4) = 1;
  }
  return;
}


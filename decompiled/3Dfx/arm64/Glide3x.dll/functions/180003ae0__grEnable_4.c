/*
 * _grEnable@4 at 180003ae0
 * undefined __cdecl _grEnable@4(int param_1)
 * Address ranges: 180003ae0-180003bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grEnable_4(int param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
                    /* 0x3ae0  33  _grEnable@4
                       0x3ae0  133  grEnable */
  lVar4 = FUN_180008ce0();
  bVar2 = FUN_180008d50(lVar4);
  if ((bVar2) && (2 < param_1 - 1U)) {
    if (param_1 == 4) {
      *(undefined1 *)(lVar4 + 0x98) = 1;
    }
    else if ((((param_1 == 6) &&
              (uVar3 = FUN_18000a930(lVar4), (&DAT_18006f279)[(ulonglong)uVar3 * 0x20] != '\0')) &&
             (*(longlong *)(lVar4 + 0x18) != 0)) &&
            (iVar5 = 0, 0 < *(int *)(*(longlong *)(lVar4 + 0x30) + 0x833))) {
      do {
        *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar5 * 0x4e8 + 0x330) = 0;
        lVar1 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        *(int *)(*(longlong *)(lVar4 + 0x18) + lVar1 * 0x4e8 + 0x334) =
             *(int *)(*(longlong *)(lVar4 + 0x30) + 0x833) *
             *(int *)(*(longlong *)(lVar4 + 0x30) + 0x82f);
      } while (iVar5 < *(int *)(*(longlong *)(lVar4 + 0x30) + 0x833));
    }
  }
  return;
}


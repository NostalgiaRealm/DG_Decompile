/*
 * FUN_180023590 at 180023590
 * undefined FUN_180023590(void)
 * Address ranges: 180023590-1800236ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023590(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if ((*plVar1 != 0) && ((*(uint *)(param_1 + 0x48) >> 3 & 1) == 0)) {
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x30));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
    if (param_2 == 0) {
      (*__imp_KERNEL32_dll_VirtualFree)(*plVar1 - (param_3 & 0xffffffff),0,0x8000);
    }
    else {
      (*__imp_KERNEL32_dll_UnmapViewOfFile)();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar4 = 0;
  if (DAT_180253848 != 0) {
    do {
      uVar3 = (uint)uVar4;
      if (*(longlong *)(DAT_180253840 + uVar4 * 8) == param_1) {
        if ((uVar3 != 0xffffffff) && (uVar3 < DAT_180253848)) {
          uVar3 = uVar3 + 1;
          if (uVar3 < DAT_180253848) {
            do {
              uVar4 = (ulonglong)uVar3;
              uVar2 = uVar3 - 1;
              uVar3 = uVar3 + 1;
              *(undefined8 *)(DAT_180253840 + (ulonglong)uVar2 * 8) =
                   *(undefined8 *)(DAT_180253840 + uVar4 * 8);
            } while (uVar3 < DAT_180253848);
          }
          DAT_180253848 = DAT_180253848 - 1;
        }
        break;
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < DAT_180253848);
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffce;
  return;
}


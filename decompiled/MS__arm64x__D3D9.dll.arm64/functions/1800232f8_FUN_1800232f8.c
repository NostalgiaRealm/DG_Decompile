/*
 * FUN_1800232f8 at 1800232f8
 * undefined FUN_1800232f8(void)
 * Address ranges: 1800232f8-180023587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1800232f8(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  ulonglong param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [36];
  uint local_54;
  
  cVar2 = *(char *)(DAT_18024de60 + 0x888);
  bVar5 = true;
  iVar3 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
  iVar1 = iVar3 + param_3 * 2;
  if (param_2 == 0) {
    lVar6 = (*__imp_KERNEL32_dll_VirtualAlloc)(0,iVar1,0x3000,4);
  }
  else {
    lVar6 = (*__imp_KERNEL32_dll_MapViewOfFile)(param_2,0xf001f,0,0,iVar1);
  }
  if (lVar6 != 0) {
    *(ulonglong *)(param_1 + 0x28) = lVar6 + (ulonglong)param_3;
    if (param_2 == 0) {
      func_0x000180222c50(lVar6 + (ulonglong)param_3,0,iVar3);
    }
    bVar5 = *(longlong *)(param_1 + 0x28) != 0;
    if ((cVar2 != '\0') && ((param_5 & 1) != 0)) {
      iVar1 = ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff >> 0xf) + 1;
      *(int *)(param_1 + 0x40) = iVar1;
      lVar6 = thunk_FUN_180102f80(iVar1);
      *(longlong *)(param_1 + 0x30) = lVar6;
      if (lVar6 != 0) {
        lVar6 = thunk_FUN_180102f80(*(undefined4 *)(param_1 + 0x40));
        *(longlong *)(param_1 + 0x38) = lVar6;
        if (lVar6 == 0) {
          thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        else {
          func_0x000180222c50(*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x40));
          func_0x000180222c50(*(undefined8 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x40));
        }
      }
      if (((*(longlong *)(param_1 + 0x28) != 0) &&
          ((((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0 || (*(longlong *)(param_1 + 0x30) != 0)) &&
           ((*(uint *)(param_1 + 0x48) >> 3 & 1) == 0)))) &&
         (lVar6 = (*__imp_KERNEL32_dll_VirtualQuery)(*(longlong *)(param_1 + 0x28),auStack_78,0x30),
         lVar6 != 0)) {
        (*__imp_KERNEL32_dll_VirtualProtect)
                  (*(undefined8 *)(param_1 + 0x28),
                   (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c),local_54 | 0x100,
                   auStack_80);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar7 = *(uint *)(param_1 + 0x48) | 2;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0x48) & 0xfffffffd;
        }
        *(uint *)(param_1 + 0x48) = uVar7;
      }
    }
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffe7;
    uVar8 = 0;
    if (DAT_180253848 != 0) {
      do {
        if (*(longlong *)(DAT_180253840 + uVar8 * 8) == param_1) {
          if ((int)uVar8 != -1) goto LAB_180023554;
          break;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < DAT_180253848);
    }
    if (DAT_180253848 == _DAT_18025384c) {
      if (_DAT_18025384c == 0) {
        uVar8 = 0x10;
      }
      else {
        uVar8 = (ulonglong)(_DAT_18025384c << 1);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      lVar6 = uVar8 << 3;
      if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
        lVar6 = -1;
      }
      lVar6 = thunk_FUN_180102f80(lVar6);
      if (lVar6 == 0) goto LAB_180023554;
      thunk_FUN_180001218(lVar6,DAT_180253840,(ulonglong)_DAT_18025384c << 3);
      thunk_FUN_180102fc0(DAT_180253840);
      _DAT_18025384c = (uint)uVar8;
      DAT_180253840 = lVar6;
    }
    *(longlong *)(DAT_180253840 + (ulonglong)DAT_180253848 * 8) = param_1;
    DAT_180253848 = DAT_180253848 + 1;
  }
LAB_180023554:
  uVar7 = *(uint *)(param_1 + 0x48) & 0xffffffdf;
  if (bVar5 != false) {
    uVar7 = *(uint *)(param_1 + 0x48) | 0x20;
  }
  *(uint *)(param_1 + 0x48) = uVar7;
  return bVar5;
}


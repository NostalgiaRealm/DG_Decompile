/*
 * FUN_18012fb28 at 18012fb28
 * undefined FUN_18012fb28(void)
 * Address ranges: 18012fb28-18012fd3f;18012fd54-18012fd97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18012fb28(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
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
  
  cVar2 = *(char *)(DAT_18024d928 + 0x888);
  bVar5 = true;
  iVar3 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
  iVar1 = iVar3 + param_3 * 2;
  if (param_2 == 0) {
    lVar6 = thunk_FUN_180223734(0,iVar1,0x3000,4);
  }
  else {
    lVar6 = thunk_FUN_1802237fc(param_2,0xf001f,0,0,iVar1);
  }
  if (lVar6 != 0) {
    *(ulonglong *)(param_1 + 0x28) = lVar6 + (ulonglong)param_3;
    if (param_2 == 0) {
      FUN_180222c50(lVar6 + (ulonglong)param_3,0,iVar3);
    }
    bVar5 = *(longlong *)(param_1 + 0x28) != 0;
    if ((cVar2 != '\0') && ((param_5 & 1) != 0)) {
      iVar1 = ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff >> 0xf) + 1;
      *(int *)(param_1 + 0x40) = iVar1;
      lVar6 = FUN_1802229a8(iVar1);
      *(longlong *)(param_1 + 0x30) = lVar6;
      if (lVar6 != 0) {
        lVar6 = FUN_1802229a8(*(undefined4 *)(param_1 + 0x40));
        *(longlong *)(param_1 + 0x38) = lVar6;
        if (lVar6 == 0) {
          FUN_1802229d8(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        else {
          FUN_180222c50(*(undefined8 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x40));
          FUN_180222c50(*(undefined8 *)(param_1 + 0x38),0,*(undefined4 *)(param_1 + 0x40));
        }
      }
      if (((*(longlong *)(param_1 + 0x28) != 0) &&
          ((((*(uint *)(param_1 + 0x48) >> 1 & 1) == 0 || (*(longlong *)(param_1 + 0x30) != 0)) &&
           ((*(uint *)(param_1 + 0x48) >> 3 & 1) == 0)))) &&
         (lVar6 = thunk_FUN_180223810(*(longlong *)(param_1 + 0x28),auStack_78,0x30), lVar6 != 0)) {
        thunk_FUN_1802237d4(*(undefined8 *)(param_1 + 0x28),
                            (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c),
                            local_54 | 0x100,auStack_80);
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
    if (DAT_18024e838 != 0) {
      do {
        if (*(longlong *)(DAT_18024e830 + uVar8 * 8) == param_1) {
          if ((int)uVar8 != -1) goto LAB_18012fd64;
          break;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < DAT_18024e838);
    }
    if (DAT_18024e838 == _DAT_18024e83c) {
      if (_DAT_18024e83c == 0) {
        uVar8 = 0x10;
      }
      else {
        uVar8 = (ulonglong)(_DAT_18024e83c << 1);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      lVar6 = uVar8 << 3;
      if (SUB168(auVar4 * ZEXT816(8),8) != 0) {
        lVar6 = -1;
      }
      lVar6 = FUN_1802229a8(lVar6);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar6,DAT_18024e830,(ulonglong)_DAT_18024e83c << 3);
      }
    }
    else {
      *(longlong *)(DAT_18024e830 + (ulonglong)DAT_18024e838 * 8) = param_1;
      DAT_18024e838 = DAT_18024e838 + 1;
    }
  }
LAB_18012fd64:
  uVar7 = *(uint *)(param_1 + 0x48) & 0xffffffdf;
  if (bVar5 != false) {
    uVar7 = *(uint *)(param_1 + 0x48) | 0x20;
  }
  *(uint *)(param_1 + 0x48) = uVar7;
  return bVar5;
}


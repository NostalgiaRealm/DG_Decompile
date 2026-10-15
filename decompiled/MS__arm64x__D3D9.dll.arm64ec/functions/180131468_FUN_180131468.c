/*
 * FUN_180131468 at 180131468
 * undefined FUN_180131468(void)
 * Address ranges: 180131468-1801316e3;1801316f8-18013173b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180131468(longlong param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [36];
  uint local_54;
  
  lVar10 = *(longlong *)(param_1 + 0xf8);
  if (lVar10 == -1) {
    if ((*(uint *)(param_1 + 0x18) & 3) == 0) {
      lVar10 = thunk_FUN_180223838(0xffffffffffffffff,0,0x8000004,0,
                                   (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) +
                                   (*(uint *)(param_1 + 0x18) * 0x40 + 0xfff & 0xfffff000) * 2,0);
      *(longlong *)(param_1 + 0xf8) = lVar10;
    }
    else {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      lVar10 = 0;
    }
  }
  bVar6 = true;
  cVar2 = *(char *)(param_1 + 0x60);
  uVar8 = *(int *)(param_1 + 0x18) * 0x40 + 0xfffU & 0xfffff000;
  cVar3 = *(char *)(DAT_18024d928 + 0x888);
  iVar4 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
  iVar1 = iVar4 + uVar8 * 2;
  if (lVar10 == 0) {
    lVar7 = thunk_FUN_180223734(0,iVar1,0x3000,4);
  }
  else {
    lVar7 = thunk_FUN_1802237fc(lVar10,0xf001f,0,0,iVar1);
  }
  if (lVar7 != 0) {
    lVar7 = lVar7 + (ulonglong)uVar8;
    *(longlong *)(param_1 + 0x28) = lVar7;
    if (lVar10 == 0) {
      FUN_180222c50(lVar7,0,iVar4);
    }
    bVar6 = *(longlong *)(param_1 + 0x28) != 0;
    if ((cVar3 != '\0') && (cVar2 == '\0')) {
      iVar1 = ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff >> 0xf) + 1;
      *(int *)(param_1 + 0x40) = iVar1;
      lVar10 = FUN_1802229a8(iVar1);
      *(longlong *)(param_1 + 0x30) = lVar10;
      if (lVar10 != 0) {
        lVar10 = FUN_1802229a8(*(undefined4 *)(param_1 + 0x40));
        *(longlong *)(param_1 + 0x38) = lVar10;
        if (lVar10 == 0) {
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
         (lVar10 = thunk_FUN_180223810(*(longlong *)(param_1 + 0x28),auStack_78,0x30), lVar10 != 0))
      {
        thunk_FUN_1802237d4(*(undefined8 *)(param_1 + 0x28),
                            (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c),
                            local_54 | 0x100,auStack_80);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar8 = *(uint *)(param_1 + 0x48) | 2;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x48) & 0xfffffffd;
        }
        *(uint *)(param_1 + 0x48) = uVar8;
      }
    }
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffe7;
    uVar9 = 0;
    if (DAT_18024e838 != 0) {
      do {
        if (*(longlong *)(DAT_18024e830 + uVar9 * 8) == param_1) {
          if ((int)uVar9 != -1) goto LAB_180131708;
          break;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < DAT_18024e838);
    }
    if (DAT_18024e838 == _DAT_18024e83c) {
      if (_DAT_18024e83c == 0) {
        uVar9 = 0x10;
      }
      else {
        uVar9 = (ulonglong)(_DAT_18024e83c << 1);
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      lVar10 = uVar9 << 3;
      if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
        lVar10 = -1;
      }
      lVar10 = FUN_1802229a8(lVar10);
      if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar10,DAT_18024e830,(ulonglong)_DAT_18024e83c << 3);
      }
    }
    else {
      *(longlong *)(DAT_18024e830 + (ulonglong)DAT_18024e838 * 8) = param_1;
      DAT_18024e838 = DAT_18024e838 + 1;
    }
  }
LAB_180131708:
  uVar8 = *(uint *)(param_1 + 0x48) & 0xffffffdf;
  if (bVar6 != false) {
    uVar8 = *(uint *)(param_1 + 0x48) | 0x20;
  }
  *(uint *)(param_1 + 0x48) = uVar8;
  return bVar6;
}


/*
 * FUN_1801e0338 at 1801e0338
 * undefined FUN_1801e0338(void)
 * Address ranges: 1801e0338-1801e0733;1801e0738-1801e075b;1801e077c-1801e07bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801e0338(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  byte bVar9;
  code *extraout_x11;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined1 auStack_498 [12];
  undefined4 local_48c;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  if (*(int *)(param_1 + -0x2c) == 3) {
    return 0x8876086c;
  }
  if (((*(int *)(param_1 + -0x2c) == 0) && ((*(uint *)(param_1 + -0x30) >> 9 & 1) == 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + -0x78) + 0x100) >> 10 & 1) == 0)) {
    return 0x8876086c;
  }
  lVar11 = *(longlong *)(param_1 + -0x78);
  if ((*(uint *)(lVar11 + 0x100) >> 0xb & 1) != 0) {
    return 0x8876086c;
  }
  uVar1 = *(uint *)(param_1 + -0x38);
  if ((uVar1 < 0x21) && ((0x102200000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((2 < uVar1 - 0x16 && uVar1 != 0x14) && (!bVar2)) {
    return 0x8876086c;
  }
  lVar12 = *(longlong *)(lVar11 + 0xf8);
  if (lVar12 == -1) {
    if ((*(uint *)(lVar11 + 0x18) & 3) == 0) {
      lVar12 = thunk_FUN_180223838(0xffffffffffffffff,0,0x8000004,0,
                                   (uint)*(ushort *)(lVar11 + 0x14) * *(int *)(lVar11 + 0x1c) +
                                   (*(uint *)(lVar11 + 0x18) * 0x40 + 0xfff & 0xfffff000) * 2,0);
      *(longlong *)(lVar11 + 0xf8) = lVar12;
    }
    else {
      *(undefined8 *)(lVar11 + 0xf8) = 0;
      lVar12 = 0;
    }
  }
  lVar10 = *(longlong *)(lVar11 + 0xb8);
  lVar5 = lVar10;
  if ((lVar10 == 0) || ((*(int *)(lVar11 + 0xa8) == 8 && (*(char *)(lVar11 + 0xef) != '\0')))) {
    iVar4 = *(int *)(lVar11 + 0x18);
    uStack_468 = 0;
    local_470 = 0;
    uStack_458 = 0;
    local_460 = 0;
    local_450 = 0;
    if (*(int *)(lVar11 + 0xa8) == 8) {
      local_448 = 0;
      if (lVar10 == 0) {
        lVar8 = 0;
      }
      else {
        uVar6 = thunk_FUN_180224238(0);
        local_4a8 = thunk_FUN_180224260(uVar6,*(undefined8 *)(lVar11 + 0xb8));
        thunk_FUN_1802242ec(uVar6,0,0x100,&local_448);
        thunk_FUN_180224260(uVar6,local_4a8);
        thunk_FUN_1802242c4(uVar6);
        lVar8 = *(longlong *)(lVar11 + 0xb8);
        lVar5 = *(longlong *)(lVar11 + 0xb8);
      }
    }
    else {
      local_448 = *(undefined4 *)(lVar11 + 0xac);
      uStack_444 = *(undefined4 *)(lVar11 + 0xb0);
      local_440 = *(undefined4 *)(lVar11 + 0xb4);
      lVar8 = lVar10;
    }
    if (lVar8 == 0) {
      local_470 = CONCAT44(*(undefined4 *)(lVar11 + 0x8c),0x28);
      uStack_468 = CONCAT26((short)*(int *)(lVar11 + 0xa8),CONCAT24(1,-*(int *)(lVar11 + 0x90)));
      uVar7 = 0;
      if ((*(int *)(lVar11 + 0xa8) - 0x10U & 0xffffffef) == 0) {
        uVar7 = 3;
      }
      local_460 = CONCAT44(local_460._4_4_,uVar7);
      lVar5 = thunk_FUN_180224224(0,&local_470,0,lVar11 + 0xe0,lVar12,
                                  iVar4 * 0x40 + 0xfffU & 0xfffff000);
      *(longlong *)(lVar11 + 0xb8) = lVar5;
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        thunk_FUN_18022424c(lVar5,0x20,auStack_498);
        lVar5 = *(longlong *)(lVar11 + 0xb8);
        *(undefined4 *)(lVar11 + 0xe8) = local_48c;
        *(bool *)(lVar11 + 0xec) = lVar12 != 0;
      }
      *(undefined2 *)(lVar11 + 0xed) = 0;
    }
  }
  *(undefined1 *)(lVar11 + 0xef) = 0;
  if ((*(longlong *)(lVar11 + 0xf8) == 0) && ((*(uint *)(lVar11 + 0x48) >> 5 & 1) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((lVar10 == 0) && (lVar5 != 0)) && (bVar2)) {
    uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar3 = (*extraout_x11)(uVar6,*(undefined4 *)(lVar11 + 0x94),*(undefined4 *)(lVar11 + 0x98));
    if (cVar3 == '\0') {
      bVar9 = 1;
      goto LAB_1801e05f8;
    }
  }
  bVar9 = 0;
LAB_1801e05f8:
  *(byte *)(lVar11 + 0xee) = *(byte *)(lVar11 + 0xee) | bVar9;
  if (lVar5 != 0) {
    lVar12 = *(longlong *)(param_1 + -0x78);
    lVar11 = thunk_FUN_180224238(0);
    *(longlong *)(lVar12 + 0xc0) = lVar11;
    if (lVar11 != 0) {
      uVar6 = thunk_FUN_180224260(lVar11,*(undefined8 *)(lVar12 + 0xb8));
      *(undefined8 *)(lVar12 + 200) = uVar6;
      if ((*(int *)(param_1 + -0x18) == 0) || ((*(uint *)(param_1 + -0x30) >> 10 & 1) == 0)) {
        if (((*(uint *)(*(longlong *)(param_1 + -0x58) + 0xe78) >> 2 & 1) == 0) &&
           (*(int *)(DAT_180258900 + 0x30) == 0)) {
          bVar2 = false;
          *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
        }
        else {
          bVar2 = true;
          iVar4 = thunk_FUN_1802236e4(DAT_180258900);
          if (iVar4 == 0) {
            FUN_1801085c8();
          }
        }
        iVar4 = FUN_180117448(param_1 + -0x80,&local_4a8,0,0,1,1);
        if (bVar2) {
          thunk_FUN_18022370c(DAT_180258900);
        }
        else {
          *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
        }
        if (-1 < iVar4) {
          lVar11 = *(longlong *)(param_1 + -0x78);
          *(undefined4 *)(lVar11 + 0xd8) = (undefined4)local_4a8;
          *(longlong *)(lVar11 + 0xd0) = local_4a0;
          *param_2 = *(undefined8 *)(lVar12 + 0xc0);
          if (local_4a0 != 0) {
            lVar11 = *(longlong *)(param_1 + -0x78);
            if ((*(char *)(lVar11 + 0xee) == '\0') && (*(char *)(lVar11 + 0xec) == '\0')) {
              if (*(int *)(lVar11 + 0xe8) == *(int *)(lVar11 + 0xd8)) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(*(undefined8 *)(lVar11 + 0xe0),*(undefined8 *)(lVar11 + 0xd0),
                                    (*(uint *)(lVar11 + 0xa8) >> 3) * *(int *)(lVar11 + 0x90) *
                                    *(int *)(lVar11 + 0x8c));
              }
              if (*(int *)(lVar11 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_180104c48(*(undefined8 *)(lVar11 + 0xe0),*(undefined8 *)(lVar11 + 0xd0),
                                    (uint)(*(int *)(lVar11 + 0xa8) * *(int *)(lVar11 + 0x8c)) >> 3);
              }
            }
            *(undefined1 *)(lVar11 + 0xee) = 1;
          }
          return 0;
        }
      }
      thunk_FUN_180224260(*(undefined8 *)(lVar12 + 0xc0),*(undefined8 *)(lVar12 + 200));
      thunk_FUN_1802242c4(*(undefined8 *)(lVar12 + 0xc0));
      *(undefined8 *)(lVar12 + 0xc0) = 0;
    }
  }
  return 0x8876086c;
}


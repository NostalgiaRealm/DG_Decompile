/*
 * FUN_1801fec48 at 1801fec48
 * undefined FUN_1801fec48(void)
 * Address ranges: 1801fec48-1801feec3;1801fef1c-1801fef7f;1801fef98-1801fefdb;1801fefec-1801ff00f;1801ff064-1801ff1db;1801ff1f4-1801ff23b;1801ff240-1801ff26b;1801ff2c0-1801ff3a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fec48(longlong param_1,ulonglong param_2,int *param_3,int *param_4,int param_5,
                  ulonglong param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar15;
  ulonglong uVar16;
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  iVar8 = *param_3;
  iVar2 = param_3[1];
  if ((param_6 & 1) != 0) {
    uVar15 = 0;
    uVar16 = 0x20;
    if (param_3[0x1a] == 0) {
      uVar16 = 0;
    }
    uVar3 = *(uint *)(param_1 + 0xc44);
    uVar16 = ((ulonglong)
              (param_3[0x14] & 0x1fU |
              (param_3[0x15] & 7U |
              (param_3[0x16] & 0x1fU | (param_3[0x17] & 0x1fU | (param_3[0x18] & 7U) << 5) << 5) <<
              3) << 5) << 5 |
              ((ulonglong)(uint)param_3[0x1b] & 0x1f |
              ((ulonglong)(uint)param_3[0x1c] & 0x1f |
              ((ulonglong)(uint)param_3[0x1d] & 7 |
              ((ulonglong)(uint)param_3[0x1e] & 0x1f |
              ((ulonglong)(uint)param_3[0x1f] & 0x1f | ((ulonglong)(uint)param_3[0x20] & 7) << 5) <<
              5) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[0x13] & 0x1f) +
             ((ulonglong)
              (param_3[4] & 0x1fU |
              (param_3[5] & 7U |
              (param_3[6] & 0x1fU | (param_3[7] & 0x1fU | (param_3[8] & 7U) << 5) << 5) << 3) << 5)
              << 5 | ((ulonglong)(uint)param_3[0xb] & 0x1f |
                     ((ulonglong)(uint)param_3[0xc] & 0x1f |
                     ((ulonglong)(uint)param_3[0xd] & 7 |
                     ((ulonglong)(uint)param_3[0xe] & 0x1f |
                     ((ulonglong)(uint)param_3[0xf] & 0x1f |
                     ((ulonglong)(uint)param_3[0x10] & 7) << 5) << 5) << 3) << 5) << 5) << 0x20 |
             (ulonglong)(uint)param_3[3] & 0x1f) +
             (uVar16 | ((ulonglong)*(byte *)(param_3 + 9) & 0xf |
                       ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
                       ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
                       ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 0x22 |
              (ulonglong)(param_3[0x12] != 0) << 4 | (ulonglong)(param_3[10] != 0) << 3 |
              (ulonglong)(param_3[2] != 0) << 2 | (ulonglong)(iVar8 != 0) |
             (ulonglong)(iVar2 != 0) << 1);
    if (uVar3 != 0) {
      uVar14 = 0;
      uVar12 = uVar3;
      do {
        uVar15 = uVar12 + uVar14 >> 1;
        uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xc38) + (ulonglong)uVar15 * 0x118);
        uVar7 = uVar15;
        if (uVar10 <= uVar16) {
          if (uVar16 <= uVar10) break;
          uVar14 = uVar15 + 1;
          uVar15 = uVar15 + 1;
          uVar7 = uVar12;
        }
        uVar12 = uVar7;
      } while (uVar12 != uVar14);
      if (uVar15 != uVar3) {
        lVar13 = (ulonglong)uVar15 * 0x118;
        lVar11 = *(longlong *)(param_1 + 0xc38) + lVar13;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xc38) + lVar13) == uVar16) {
          if ((((iVar8 != *(int *)(lVar11 + 8)) || (iVar2 != *(int *)(lVar11 + 0xc))) ||
              (iVar8 = FUN_180222c00(param_3 + 2,lVar11 + 0x10,0x20), iVar8 != 0)) ||
             (((iVar8 = FUN_180222c00(param_3 + 10,lVar11 + 0x30,0x20), iVar8 != 0 ||
               (iVar8 = FUN_180222c00(param_3 + 0x12,lVar11 + 0x50,0x20), iVar8 != 0)) ||
              (iVar8 = FUN_180222c00(param_3 + 0x1a,lVar11 + 0x70,0x20), iVar8 != 0)))) {
            (*(code *)puVar6)(0x180224000);
            (*extraout_x11)();
            *(ulonglong *)(*(longlong *)(param_1 + 0xc38) + lVar13) = uVar16;
                    /* WARNING: Subroutine does not return */
            thunk_FUN_180104c48(lVar13 + *(longlong *)(param_1 + 0xc38) + 8,param_3,0x108);
          }
          lVar11 = *(longlong *)(param_1 + 0xc38);
          goto LAB_1801ff2c8;
        }
      }
    }
    plVar1 = (longlong *)(param_1 + 0xc38);
    if (uVar3 == *(uint *)(param_1 + 0xc40)) {
      uVar10 = CONCAT44(0,*(uint *)(param_1 + 0xc40) << 1);
      lVar11 = uVar10 * 0x118;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar10;
      if (SUB168(auVar4 * ZEXT816(0x118),8) != 0) {
        lVar11 = -1;
      }
      lVar11 = FUN_1802229a8(lVar11);
      if (lVar11 != 0) {
        if (*(int *)(param_1 + 0xc40) != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(lVar11,*(undefined8 *)(param_1 + 0xc38),0x118);
        }
        FUN_1802229d8(*plVar1);
        *plVar1 = lVar11;
        *(int *)(param_1 + 0xc40) = *(int *)(param_1 + 0xc40) << 1;
      }
    }
    uVar3 = *(uint *)(param_1 + 0xc44);
    if (uVar15 < uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(*plVar1 + (ulonglong)uVar3 * 0x118,
                          *plVar1 + (ulonglong)(uVar3 - 1) * 0x118,0x118);
    }
    *(ulonglong *)(*plVar1 + (ulonglong)uVar15 * 0x118) = uVar16;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48((ulonglong)uVar15 * 0x118 + *plVar1 + 8,param_3,0x108);
  }
  uVar15 = 0;
  uVar16 = (ulonglong)
           (param_3[3] & 0x1fU |
           (param_3[4] & 0x1fU |
           (param_3[5] & 7U | (param_3[6] & 0x1fU | (param_3[7] & 0x1fU) << 5) << 3) << 5) << 5) <<
           6 | ((ulonglong)(uint)param_3[8] & 7 |
               ((ulonglong)*(byte *)(param_3 + 9) & 0xffffffffffff000f |
               ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
               ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
               ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 5) << 0x1d |
           (ulonglong)(param_3[0x1a] != 0) << 5 | (ulonglong)(param_3[0x12] != 0) << 4 |
           (ulonglong)(param_3[10] != 0) << 3 | (ulonglong)(param_3[2] != 0) << 2 |
           (ulonglong)(iVar8 != 0) | (ulonglong)(iVar2 != 0) << 1;
  uVar3 = *(uint *)(param_1 + 0xc24);
  if (uVar3 != 0) {
    uVar14 = 0;
    uVar12 = uVar3;
    do {
      uVar15 = uVar12 + uVar14 >> 1;
      uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xc18) + (ulonglong)uVar15 * 0x118);
      uVar7 = uVar15;
      if (uVar10 <= uVar16) {
        if (uVar16 <= uVar10) break;
        uVar14 = uVar15 + 1;
        uVar15 = uVar15 + 1;
        uVar7 = uVar12;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar14);
    if ((uVar15 != uVar3) &&
       (lVar13 = (ulonglong)uVar15 * 0x118,
       *(ulonglong *)(*(longlong *)(param_1 + 0xc18) + lVar13) == uVar16)) {
      lVar11 = *(longlong *)(param_1 + 0xc18);
LAB_1801ff2c8:
      lVar11 = *(longlong *)(lVar13 + lVar11 + 0x110);
      if (((lVar11 != *(longlong *)(param_1 + 0x6e0)) || (param_5 != *(int *)(param_1 + 0x6f4))) ||
         ((param_4 != (int *)0x0 &&
          ((((*param_4 != *(int *)(param_1 + 0x6f8) || (param_4[1] != *(int *)(param_1 + 0x6fc))) ||
            (param_4[2] != *(int *)(param_1 + 0x700))) || (param_4[3] != *(int *)(param_1 + 0x704)))
          )))) {
        uVar9 = (*(code *)puVar6)(0x180224000);
        (*extraout_x11_00)(uVar9,lVar11,param_4,param_5);
        *(longlong *)(param_1 + 0x6e0) = lVar11;
        *(int *)(param_1 + 0x6f4) = param_5;
        if (param_4 != (int *)0x0) {
          *(int *)(param_1 + 0x6f8) = *param_4;
          *(int *)(param_1 + 0x6fc) = param_4[4];
          *(int *)(param_1 + 0x700) = param_4[8];
          *(int *)(param_1 + 0x704) = param_4[0xc];
        }
      }
      return;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0xc20)) {
    uVar10 = CONCAT44(0,*(uint *)(param_1 + 0xc20) << 1);
    lVar11 = uVar10 * 0x118;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    if (SUB168(auVar5 * ZEXT816(0x118),8) != 0) {
      lVar11 = -1;
    }
    lVar11 = FUN_1802229a8(lVar11);
    if (lVar11 != 0) {
      if (*(int *)(param_1 + 0xc20) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar11,*(undefined8 *)(param_1 + 0xc18),0x118);
      }
      FUN_1802229d8(*(longlong *)(param_1 + 0xc18));
      *(longlong *)(param_1 + 0xc18) = lVar11;
      *(int *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) << 1;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xc24);
  lVar11 = *(longlong *)(param_1 + 0xc18);
  if (uVar3 <= uVar15) {
    *(ulonglong *)(lVar11 + (ulonglong)uVar15 * 0x118) = uVar16;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48((ulonglong)uVar15 * 0x118 + *(longlong *)(param_1 + 0xc18) + 8,param_3,0x108
                       );
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_180104c48(lVar11 + (ulonglong)uVar3 * 0x118,lVar11 + (ulonglong)(uVar3 - 1) * 0x118,
                      0x118);
}


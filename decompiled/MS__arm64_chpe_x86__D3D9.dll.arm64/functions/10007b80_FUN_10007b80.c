/*
 * FUN_10007b80 at 10007b80
 * undefined FUN_10007b80(void)
 * Address ranges: 10007b80-10007f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007b80(int param_1,uint param_2,int param_3,int param_4,undefined8 param_5,
                undefined1 param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 extraout_x1;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [4];
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  int local_94;
  int iStack_90;
  undefined1 local_43;
  
  iVar5 = 0;
  local_c0 = 0;
  uVar10 = 0;
  local_b8 = 0;
  uVar9 = 0;
  do {
    if (param_2 <= uVar9) break;
    puVar1 = (undefined4 *)(param_3 + uVar9 * 0x40);
    local_ac = 0;
    uStack_a4 = 0;
    local_9c = 0;
    uVar12 = uVar9;
    if ((*(uint *)(param_1 + 0xdd0) & 0x200) == 0) {
      uVar12 = 0xffffffff;
    }
    iVar5 = FUN_10007b30(param_1,*puVar1,puVar1 + 1,0,auStack_b0,uVar12);
    if (uVar10 < (uint)(iStack_90 * local_94)) {
      *(undefined8 *)(param_1 + 0xda8) = uStack_a4;
      *(undefined8 *)(param_1 + 0xda0) = local_ac;
      *(undefined8 *)(param_1 + 0xdb0) = local_9c;
      *(int *)(param_1 + 0xdb8) = local_94;
      *(int *)(param_1 + 0xdbc) = iStack_90;
      *(undefined1 *)(param_1 + 0xdc0) = local_43;
      uVar10 = iStack_90 * local_94;
    }
    if (-1 < iVar5) {
      if ((*(uint *)(param_1 + 0xdd0) >> 9 & 1) == 0) {
LAB_10007d98:
        cVar4 = FUN_1000fda0(&local_c0,auStack_b0);
        if (cVar4 == '\0') {
          iVar5 = -0x7fffbffb;
        }
      }
      else {
        iVar5 = -0x7789f794;
        if (puVar1[9] == 0) {
          uVar12 = 0;
          if (uVar9 != 0) {
            do {
              iVar11 = *(int *)(param_1 + 0xdcc);
              iVar5 = *(int *)(param_3 + 0x20 + uVar12 * 0x40);
              iVar6 = (*(code *)PTR_FUN_1016c1cc)();
              if (iVar5 == iVar6 || iVar5 == 0) {
                iVar5 = iVar11;
              }
              iVar11 = puVar1[8];
              iVar6 = *(int *)(param_1 + 0xdcc);
              iVar7 = (*(code *)PTR_FUN_1016c1cc)();
              if (iVar11 == iVar7 || iVar11 == 0) {
                iVar11 = iVar6;
              }
              if (iVar5 == iVar11) {
                iVar5 = -0x7789f794;
                goto LAB_10007dc0;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar9);
          }
          iVar5 = -0x7789f794;
          if (((uVar12 == uVar9) && (*(int *)(param_3 + 0x28) == puVar1[10])) &&
             ((puVar1[10] == 0 ||
              ((((*(int *)(param_3 + 0x2c) == puVar1[0xb] && (*(int *)(param_3 + 0xc) == puVar1[3]))
                && (*(int *)(param_3 + 4) == puVar1[1])) && (*(int *)(param_3 + 8) == puVar1[2])))))
             ) {
            iVar5 = 0;
            goto LAB_10007d98;
          }
        }
      }
    }
LAB_10007dc0:
    uVar9 = uVar9 + 1;
  } while (-1 < iVar5);
  uVar3 = local_c0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = (int)local_c0;
  iVar11 = 0;
  if (-1 < iVar5) {
    do {
      if ((int)param_2 <= iVar11) goto LAB_10007f40;
      if (*(int *)(param_1 + 0xdc8) == 1) {
        uVar8 = FUN_1001fb30(iVar6 + iVar11 * 0x70);
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        uVar8 = 0;
      }
      iVar5 = -0x7789fe84;
      if (uVar8 <= (ulonglong)(&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45]) {
        (*pcVar2)(0x8876017c,iVar6 + iVar11 * 0x70);
        iVar5 = (*extraout_w11)(param_1,extraout_x1,*extraout_w8,uVar8 & 0xffffffff,param_6);
      }
      iVar11 = iVar11 + 1;
    } while (-1 < iVar5);
  }
  iVar11 = iVar11 + -1;
  if (0 < iVar11) {
    do {
      puVar1 = (undefined4 *)(param_4 + -4 + iVar11 * 4);
      (*pcVar2)();
      (*extraout_w11_00)(param_1,*puVar1,0);
      iVar11 = iVar11 + -1;
      *puVar1 = 0;
    } while (0 < iVar11);
  }
LAB_10007f40:
  FUN_101322d0(uVar3 & 0xffffffff);
  return iVar5;
}


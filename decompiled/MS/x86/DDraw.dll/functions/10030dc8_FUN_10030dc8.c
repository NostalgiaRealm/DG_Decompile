/*
 * FUN_10030dc8 at 10030dc8
 * undefined4 __thiscall FUN_10030dc8(void * this, int param_1, uint param_2, uint param_3)
 * Address ranges: 10030dc8-100310b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10030dc8(void *this,int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int extraout_EDX;
  uint uVar7;
  int iVar8;
  LONG *pLVar9;
  int iStack_e0;
  int local_dc;
  uint local_cc;
  uint uStack_c4;
  LONG aLStack_b8 [4];
  tagRECT tStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  uint local_88 [33];
  
  iVar8 = 0;
  local_88[0] = 0;
  uVar4 = 1;
  local_88[1] = 1;
  uVar6 = uVar4;
  if (1 < param_2) {
    do {
      iVar5 = *(int *)(param_1 + -4 + uVar6 * 4);
      if (((*(int *)(iVar5 + 0x15c) == *(int *)(*(int *)(param_1 + uVar6 * 4) + 0x15c) * 2) &&
          (*(int *)(iVar5 + 0x158) == *(int *)(*(int *)(param_1 + uVar6 * 4) + 0x158) * 2)) &&
         (uVar6 != param_3)) {
        local_88[iVar8 * 2 + 1] = local_88[iVar8 * 2 + 1] + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        local_88[iVar8 * 2] = 0;
        local_88[iVar8 * 2 + 1] = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
  }
  iStack_e0 = 0;
  local_dc = 0;
  local_cc = 0;
  if (iVar8 != -1) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + local_dc * 4) + 4);
      if ((*(int *)(iVar5 + 0x6c) == 0) &&
         (uVar6 = (**(code **)(**(int **)(iVar5 + 0x50) + 0x24))(),
         uVar6 == local_88[local_cc * 2 + 1])) {
        local_88[local_cc * 2] = 0;
      }
      else {
        piVar1 = *(int **)(*(int *)((int)this + 4) + 0x4c);
        uVar6 = local_88[local_cc * 2 + 1];
        uVar4 = *(uint *)((int)this + 0x1b8) >> 0xb & 1 |
                -(uint)((*(uint *)((int)this + 0x1bc) & 0x20010) != 0) & 2;
        uVar3 = FUN_100321a7((int)this + 0x150);
        uVar4 = (**(code **)(*piVar1 + 0x2c))
                          (*(undefined4 *)(extraout_EDX + 0x15c),
                           *(undefined4 *)(extraout_EDX + 0x158),
                           *(undefined4 *)(extraout_EDX + 0x1cc),local_88[local_cc * 2 + 1],uVar3,
                           uVar4);
        local_88[local_cc * 2] = uVar4;
        iStack_e0 = 0;
        if (uVar4 != 0) {
          iStack_e0 = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 1;
          pLVar9 = aLStack_b8;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *pLVar9 = 0;
            pLVar9 = pLVar9 + 1;
          }
          uStack_c4 = 0;
          if (uVar6 != 0) {
            do {
              iVar5 = local_dc * 4 + uStack_c4 * 4;
              iVar2 = *(int *)(param_1 + iVar5);
              SetRect(&tStack_a8,0,0,*(int *)(iVar2 + 0x15c),*(int *)(iVar2 + 0x158));
              aLStack_b8[0] = tStack_a8.left;
              aLStack_b8[1] = tStack_a8.top;
              aLStack_b8[2] = tStack_a8.right;
              aLStack_b8[3] = tStack_a8.bottom;
              iVar5 = *(int *)(*(int *)(param_1 + iVar5) + 4);
              iStack_e0 = (**(code **)(**(int **)(*(int *)((int)this + 4) + 0x4c) + 0x84))
                                    (uStack_c4,0,*(undefined4 *)(iVar5 + 0x6c),0,uVar4,
                                     *(undefined4 *)(iVar5 + 0x50),aLStack_b8);
              if ((char)iStack_e0 == '\0') {
                iStack_e0 = (**(code **)(*(int *)local_88[local_cc * 2] + 0x10))();
                local_88[local_cc * 2] = 0;
                break;
              }
              uStack_c4 = uStack_c4 + 1;
            } while (uStack_c4 < uVar6);
          }
        }
        if (local_88[local_cc * 2] == 0) {
          uVar6 = 0;
          if (local_cc != 0) {
            do {
              if ((int *)local_88[uVar6 * 2] != (int *)0x0) {
                iStack_e0 = (**(code **)(*(int *)local_88[uVar6 * 2] + 0x10))();
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_cc);
          }
          uVar4 = 0;
          goto LAB_100310ad;
        }
      }
      local_dc = local_dc + local_88[local_cc * 2 + 1];
      local_cc = local_cc + 1;
    } while (local_cc < iVar8 + 1U);
    uVar6 = 0;
    iStack_e0 = 0;
    do {
      if ((local_88[uVar6 * 2] != 0) && (uVar4 = 0, local_88[uVar6 * 2 + 1] != 0)) {
        uVar7 = local_88[uVar6 * 2];
        do {
          iVar5 = *(int *)(*(int *)(param_1 + iStack_e0 * 4 + uVar4 * 4) + 4);
          if (*(int *)(iVar5 + 0x6c) == 0) {
            (**(code **)(**(int **)(iVar5 + 0x50) + 0x10))();
            uVar7 = local_88[uVar6 * 2];
          }
          iVar5 = *(int *)(param_1 + iStack_e0 * 4 + uVar4 * 4);
          *(uint *)(*(int *)(iVar5 + 4) + 0x50) = uVar7;
          *(uint *)(*(int *)(iVar5 + 4) + 0x6c) = uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_88[uVar6 * 2 + 1]);
      }
      iStack_e0 = iStack_e0 + local_88[uVar6 * 2 + 1];
      uVar6 = uVar6 + 1;
    } while (uVar6 < iVar8 + 1U);
    uVar4 = 1;
  }
LAB_100310ad:
  return CONCAT31((int3)((uint)iStack_e0 >> 8),(char)uVar4);
}


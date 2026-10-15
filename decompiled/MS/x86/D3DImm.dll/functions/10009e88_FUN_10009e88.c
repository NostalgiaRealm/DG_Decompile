/*
 * FUN_10009e88 at 10009e88
 * undefined __thiscall FUN_10009e88(void * this, int param_1, uint * param_2, int param_3, uint param_4, uint * param_5, int param_6)
 * Address ranges: 10009e88-1000afba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10009e88(void *this,int param_1,uint *param_2,int param_3,uint param_4,uint *param_5,int param_6
            )

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  
  iVar8 = *(int *)((int)this + 0x4c0);
  local_20 = param_5;
  if (*(int *)((int)this + 0x350) == 0) {
    if (iVar8 == 1) {
      fVar17 = 1.0;
      local_14 = param_5;
      local_1c = param_2;
      local_20 = (uint *)0x0;
      fVar11 = **(float **)((int)this + 0x9c8);
      iVar8 = *(int *)((int)this + 0x9cc);
      pfVar6 = (float *)(iVar8 + 0x20);
      if (param_4 >> 1 != 0) {
        do {
          uVar5 = *param_2;
          uVar3 = *(uint *)((int)param_2 + param_3);
          param_2 = (uint *)((int)param_2 + param_3 * 2);
          pfVar2 = (float *)((int)local_20 * 0x40 + param_1);
          pfVar1 = (float *)((int)local_20 * 0x40 + 0x20 + param_1);
          fVar13 = (pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
                   pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar11;
          iVar9 = (int)fVar13;
          iVar7 = *(int *)((int)this + 0x960);
          fVar13 = *(float *)(*(int *)((int)this + 0x95c) +
                             (int)((fVar13 - (float)iVar9) * 1024.0) * 4);
          if (iVar9 < 0) {
            fVar13 = fVar13 / *(float *)(iVar7 + iVar9 * -4);
          }
          else {
            fVar13 = fVar13 * *(float *)(iVar7 + iVar9 * 4);
          }
          fVar18 = (pfVar1[3] * *(float *)(iVar8 + 0x2c) + pfVar1[1] * *(float *)(iVar8 + 0x24) +
                   pfVar1[2] * *(float *)(iVar8 + 0x28) + *pfVar1 * *pfVar6) * fVar11;
          iVar9 = (int)fVar18;
          fVar18 = *(float *)(*(int *)((int)this + 0x95c) +
                             (int)((fVar18 - (float)iVar9) * 1024.0) * 4);
          if (iVar9 < 0) {
            fVar18 = fVar18 / *(float *)(iVar7 + iVar9 * -4);
          }
          else {
            fVar18 = fVar18 * *(float *)(iVar7 + iVar9 * 4);
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (1.0 <= fVar13) {
            fVar13 = fVar17;
          }
          if (1.0 <= fVar18) {
            fVar18 = fVar17;
          }
          *local_14 = (int)(fVar13 * 255.0) << 0x18 | uVar5 & 0xffffff;
          *(uint *)((int)local_14 + param_6) = (int)(fVar18 * 255.0) << 0x18 | uVar3 & 0xffffff;
          local_14 = (uint *)((int)local_14 + param_6 * 2);
          local_20 = (uint *)((int)local_20 + 1);
          local_1c = param_2;
        } while (local_20 < param_4 >> 1);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      pfVar2 = (float *)(param_4 * 0x20 + -0x20 + param_1);
      fVar11 = (pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
               pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar11;
      iVar8 = (int)fVar11;
      fVar11 = *(float *)(*(int *)((int)this + 0x95c) + (int)((fVar11 - (float)iVar8) * 1024.0) * 4)
      ;
      if (iVar8 < 0) {
        fVar11 = fVar11 / *(float *)(*(int *)((int)this + 0x960) + iVar8 * -4);
      }
      else {
        fVar11 = fVar11 * *(float *)(iVar8 * 4 + *(int *)((int)this + 0x960));
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = fVar17;
      }
      uVar5 = (int)(fVar11 * 255.0) << 0x18 | *local_1c & 0xffffff;
      local_20 = local_14;
    }
    else if (iVar8 == 2) {
      local_1c = param_2;
      local_14 = param_5;
      local_24 = (uint *)0x0;
      fVar11 = **(float **)((int)this + 0x9c8);
      iVar8 = *(int *)((int)this + 0x9cc);
      pfVar6 = (float *)(iVar8 + 0x20);
      if (param_4 >> 1 != 0) {
        do {
          uVar5 = *local_1c;
          uVar3 = *(uint *)((int)local_1c + param_3);
          local_1c = (uint *)((int)local_1c + param_3 * 2);
          pfVar2 = (float *)((int)local_24 * 0x40 + param_1);
          pfVar1 = (float *)((int)local_24 * 0x40 + 0x20 + param_1);
          fVar17 = (pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
                   pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar11;
          fVar17 = fVar17 * fVar17;
          iVar9 = (int)fVar17;
          fVar13 = (pfVar1[3] * *(float *)(iVar8 + 0x2c) + pfVar1[1] * *(float *)(iVar8 + 0x24) +
                   pfVar1[2] * *(float *)(iVar8 + 0x28) + *pfVar1 * *pfVar6) * fVar11;
          iVar7 = *(int *)((int)this + 0x960);
          fVar17 = *(float *)(*(int *)((int)this + 0x95c) +
                             (int)((fVar17 - (float)iVar9) * 1024.0) * 4);
          if (iVar9 < 0) {
            fVar17 = fVar17 / *(float *)(iVar7 + iVar9 * -4);
          }
          else {
            fVar17 = fVar17 * *(float *)(iVar7 + iVar9 * 4);
          }
          fVar13 = fVar13 * fVar13;
          iVar9 = (int)fVar13;
          fVar13 = *(float *)(*(int *)((int)this + 0x95c) +
                             (int)((fVar13 - (float)iVar9) * 1024.0) * 4);
          if (iVar9 < 0) {
            fVar13 = fVar13 / *(float *)(iVar7 + iVar9 * -4);
          }
          else {
            fVar13 = fVar13 * *(float *)(iVar7 + iVar9 * 4);
          }
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (1.0 <= fVar17) {
            fVar17 = 1.0;
          }
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
          *local_14 = (int)(fVar17 * 255.0) << 0x18 | uVar5 & 0xffffff;
          *(uint *)((int)local_14 + param_6) = (int)(fVar13 * 255.0) << 0x18 | uVar3 & 0xffffff;
          local_14 = (uint *)((int)local_14 + param_6 * 2);
          local_24 = (uint *)((int)local_24 + 1);
        } while (local_24 < param_4 >> 1);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      pfVar2 = (float *)(param_4 * 0x20 + -0x20 + param_1);
      fVar11 = (pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
               pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar11;
      fVar11 = fVar11 * fVar11;
      iVar8 = (int)fVar11;
      iVar7 = (int)((fVar11 - (float)iVar8) * 1024.0);
      if (iVar8 < 0) {
        fVar11 = *(float *)(*(int *)((int)this + 0x95c) + iVar7 * 4) /
                 *(float *)(*(int *)((int)this + 0x960) + iVar8 * -4);
      }
      else {
        fVar11 = *(float *)(*(int *)((int)this + 0x95c) + iVar7 * 4) *
                 *(float *)(iVar8 * 4 + *(int *)((int)this + 0x960));
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      uVar5 = (int)(fVar11 * 255.0) << 0x18 | *local_1c & 0xffffff;
      local_20 = local_14;
    }
    else {
      if (iVar8 == 3) {
        fVar17 = 1.0;
        fVar11 = **(float **)((int)this + 0x9c4);
        iVar8 = *(int *)((int)this + 0x9cc);
        local_18 = param_2;
        pfVar6 = (float *)(iVar8 + 0x20);
        local_1c = (uint *)0x0;
        fVar13 = fVar11 - **(float **)((int)this + 0x9c0);
        if (param_4 >> 1 != 0) {
          do {
            uVar5 = *local_18;
            uVar3 = *(uint *)((int)local_18 + param_3);
            local_18 = (uint *)((int)local_18 + param_3 * 2);
            pfVar2 = (float *)((int)local_1c * 0x40 + param_1);
            pfVar1 = (float *)((int)local_1c * 0x40 + 0x20 + param_1);
            fVar18 = *pfVar1;
            fVar19 = pfVar1[1];
            fVar20 = pfVar1[2];
            fVar10 = pfVar1[3];
            fVar12 = *pfVar6;
            fVar4 = *(float *)(iVar8 + 0x24);
            fVar15 = *(float *)(iVar8 + 0x28);
            fVar14 = *(float *)(iVar8 + 0x2c);
            fVar16 = (fVar11 - (pfVar2[3] * *(float *)(iVar8 + 0x2c) +
                                pfVar2[1] * *(float *)(iVar8 + 0x24) +
                               pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6)) / fVar13;
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            if (1.0 <= fVar16) {
              fVar16 = fVar17;
            }
            *local_20 = (int)(fVar16 * 255.0) << 0x18 | uVar5 & 0xffffff;
            fVar18 = (fVar11 - (fVar10 * fVar14 + fVar19 * fVar4 + fVar20 * fVar15 + fVar18 * fVar12
                               )) / fVar13;
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
            if (1.0 <= fVar18) {
              fVar18 = fVar17;
            }
            *(uint *)((int)local_20 + param_6) = (int)(fVar18 * 255.0) << 0x18 | uVar3 & 0xffffff;
            param_5 = (uint *)((int)local_20 + param_6 * 2);
            local_1c = (uint *)((int)local_1c + 1);
            local_20 = param_5;
          } while (local_1c < param_4 >> 1);
        }
        if ((param_4 & 1) == 0) {
          return;
        }
        pfVar2 = (float *)(param_4 * 0x20 + -0x20 + param_1);
        uVar5 = *local_18;
        fVar13 = (fVar11 - (pfVar2[3] * *(float *)(iVar8 + 0x2c) +
                            pfVar2[1] * *(float *)(iVar8 + 0x24) +
                           pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6)) / fVar13;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (1.0 <= fVar13) {
          fVar13 = fVar17;
        }
        goto LAB_1000aaad;
      }
      local_28 = param_4 >> 1;
      local_18 = param_5;
      local_14 = param_2;
      if (local_28 != 0) {
        do {
          uVar5 = *(uint *)((int)local_14 + param_3);
          param_2 = (uint *)((int)local_14 + param_3 * 2);
          local_28 = local_28 - 1;
          *local_18 = *local_14 | 0xff000000;
          *(uint *)((int)local_18 + param_6) = uVar5 | 0xff000000;
          local_20 = (uint *)((int)local_18 + param_6 * 2);
          local_18 = local_20;
          local_14 = param_2;
        } while (local_28 != 0);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      uVar5 = *param_2 | 0xff000000;
    }
  }
  else if (iVar8 == 1) {
    local_1c = param_5;
    local_14 = param_2;
    local_24 = (uint *)0x0;
    fVar11 = **(float **)((int)this + 0x9c8);
    if (param_4 >> 1 != 0) {
      do {
        uVar5 = *local_14;
        uVar3 = *(uint *)((int)local_14 + param_3);
        local_14 = (uint *)((int)local_14 + param_3 * 2);
        pfVar2 = *(float **)((int)this + 0x9cc);
        pfVar6 = (float *)((int)local_24 * 0x40 + param_1);
        fVar17 = *pfVar6;
        fVar13 = pfVar6[1];
        fVar18 = pfVar6[2];
        fVar19 = pfVar6[3];
        pfVar6 = (float *)((int)local_24 * 0x40 + 0x20 + param_1);
        fVar20 = *pfVar6;
        fVar10 = pfVar6[1];
        fVar12 = pfVar6[2];
        fVar4 = pfVar6[3];
        fVar15 = fVar19 * pfVar2[3] + fVar13 * pfVar2[1] + fVar18 * pfVar2[2] + fVar17 * *pfVar2;
        fVar14 = pfVar2[7] * fVar19 + pfVar2[5] * fVar13 + pfVar2[6] * fVar18 + pfVar2[4] * fVar17;
        fVar17 = pfVar2[0xb] * fVar19 + pfVar2[9] * fVar13 +
                 pfVar2[10] * fVar18 + pfVar2[8] * fVar17;
        fVar13 = fVar4 * pfVar2[3] + fVar10 * pfVar2[1] + fVar12 * pfVar2[2] + fVar20 * *pfVar2;
        fVar18 = pfVar2[7] * fVar4 + pfVar2[5] * fVar10 + pfVar2[6] * fVar12 + pfVar2[4] * fVar20;
        fVar19 = pfVar2[0xb] * fVar4 + pfVar2[9] * fVar10 + pfVar2[10] * fVar12 + pfVar2[8] * fVar20
        ;
        fVar17 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar14 * fVar14) * fVar11;
        iVar7 = (int)fVar17;
        iVar8 = *(int *)((int)this + 0x960);
        fVar17 = *(float *)(*(int *)((int)this + 0x95c) +
                           (int)((fVar17 - (float)iVar7) * 1024.0) * 4);
        if (iVar7 < 0) {
          fVar17 = fVar17 / *(float *)(iVar8 + iVar7 * -4);
        }
        else {
          fVar17 = fVar17 * *(float *)(iVar8 + iVar7 * 4);
        }
        fVar13 = SQRT(fVar13 * fVar13 + fVar19 * fVar19 + fVar18 * fVar18) * fVar11;
        iVar7 = (int)fVar13;
        fVar13 = *(float *)(*(int *)((int)this + 0x95c) +
                           (int)((fVar13 - (float)iVar7) * 1024.0) * 4);
        if (iVar7 < 0) {
          fVar13 = fVar13 / *(float *)(iVar8 + iVar7 * -4);
        }
        else {
          fVar13 = fVar13 * *(float *)(iVar8 + iVar7 * 4);
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (1.0 <= fVar17) {
          fVar17 = 1.0;
        }
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
        *local_1c = (int)(fVar17 * 255.0) << 0x18 | uVar5 & 0xffffff;
        *(uint *)((int)local_1c + param_6) = (int)(fVar13 * 255.0) << 0x18 | uVar3 & 0xffffff;
        local_1c = (uint *)((int)local_1c + param_6 * 2);
        local_24 = (uint *)((int)local_24 + 1);
      } while (local_24 < param_4 >> 1);
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    pfVar2 = *(float **)((int)this + 0x9cc);
    pfVar6 = (float *)(param_4 * 0x20 + -0x20 + param_1);
    fVar17 = *pfVar6;
    fVar13 = pfVar6[1];
    fVar18 = pfVar6[2];
    fVar19 = pfVar6[3];
    fVar20 = fVar19 * pfVar2[3] + fVar13 * pfVar2[1] + fVar18 * pfVar2[2] + fVar17 * *pfVar2;
    fVar10 = fVar19 * pfVar2[7] + fVar13 * pfVar2[5] + fVar18 * pfVar2[6] + fVar17 * pfVar2[4];
    fVar17 = fVar19 * pfVar2[0xb] + fVar13 * pfVar2[9] + fVar18 * pfVar2[10] + fVar17 * pfVar2[8];
    fVar11 = SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar10 * fVar10) * fVar11;
    iVar8 = (int)fVar11;
    fVar11 = *(float *)(*(int *)((int)this + 0x95c) + (int)((fVar11 - (float)iVar8) * 1024.0) * 4);
    if (iVar8 < 0) {
      fVar11 = fVar11 / *(float *)(*(int *)((int)this + 0x960) + iVar8 * -4);
    }
    else {
      fVar11 = fVar11 * *(float *)(iVar8 * 4 + *(int *)((int)this + 0x960));
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    uVar5 = (int)(fVar11 * 255.0) << 0x18 | *local_14 & 0xffffff;
    local_20 = local_1c;
  }
  else if (iVar8 == 2) {
    local_14 = param_2;
    local_28 = 0;
    fVar11 = **(float **)((int)this + 0x9c8);
    if (param_4 >> 1 != 0) {
      do {
        uVar5 = *local_14;
        uVar3 = *(uint *)((int)local_14 + param_3);
        local_14 = (uint *)((int)local_14 + param_3 * 2);
        pfVar2 = *(float **)((int)this + 0x9cc);
        pfVar6 = (float *)(local_28 * 0x40 + param_1);
        fVar17 = *pfVar6;
        fVar13 = pfVar6[1];
        fVar18 = pfVar6[2];
        fVar19 = pfVar6[3];
        pfVar6 = (float *)(local_28 * 0x40 + 0x20 + param_1);
        fVar20 = *pfVar6;
        fVar10 = pfVar6[1];
        fVar12 = pfVar6[2];
        fVar4 = pfVar6[3];
        fVar15 = pfVar2[3] * fVar19 + pfVar2[1] * fVar13 + pfVar2[2] * fVar18 + *pfVar2 * fVar17;
        fVar14 = pfVar2[7] * fVar19 + pfVar2[5] * fVar13 + pfVar2[6] * fVar18 + pfVar2[4] * fVar17;
        fVar17 = pfVar2[0xb] * fVar19 + pfVar2[9] * fVar13 +
                 pfVar2[10] * fVar18 + pfVar2[8] * fVar17;
        fVar13 = fVar4 * pfVar2[3] + fVar10 * pfVar2[1] + fVar12 * pfVar2[2] + fVar20 * *pfVar2;
        fVar18 = pfVar2[7] * fVar4 + pfVar2[5] * fVar10 + pfVar2[6] * fVar12 + pfVar2[4] * fVar20;
        fVar19 = pfVar2[0xb] * fVar4 + pfVar2[9] * fVar10 + pfVar2[10] * fVar12 + pfVar2[8] * fVar20
        ;
        fVar17 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar14 * fVar14) * fVar11;
        fVar17 = fVar17 * fVar17;
        iVar7 = (int)fVar17;
        fVar13 = SQRT(fVar13 * fVar13 + fVar19 * fVar19 + fVar18 * fVar18) * fVar11;
        iVar8 = *(int *)((int)this + 0x960);
        fVar17 = *(float *)(*(int *)((int)this + 0x95c) +
                           (int)((fVar17 - (float)iVar7) * 1024.0) * 4);
        if (iVar7 < 0) {
          fVar17 = fVar17 / *(float *)(iVar8 + iVar7 * -4);
        }
        else {
          fVar17 = fVar17 * *(float *)(iVar8 + iVar7 * 4);
        }
        fVar13 = fVar13 * fVar13;
        iVar7 = (int)fVar13;
        fVar13 = *(float *)(*(int *)((int)this + 0x95c) +
                           (int)((fVar13 - (float)iVar7) * 1024.0) * 4);
        if (iVar7 < 0) {
          fVar13 = fVar13 / *(float *)(iVar8 + iVar7 * -4);
        }
        else {
          fVar13 = fVar13 * *(float *)(iVar8 + iVar7 * 4);
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (1.0 <= fVar17) {
          fVar17 = 1.0;
        }
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
        *local_20 = (int)(fVar17 * 255.0) << 0x18 | uVar5 & 0xffffff;
        *(uint *)((int)local_20 + param_6) = (int)(fVar13 * 255.0) << 0x18 | uVar3 & 0xffffff;
        local_20 = (uint *)((int)local_20 + param_6 * 2);
        local_28 = local_28 + 1;
      } while (local_28 < param_4 >> 1);
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    pfVar2 = *(float **)((int)this + 0x9cc);
    pfVar6 = (float *)(param_4 * 0x20 + -0x20 + param_1);
    fVar17 = *pfVar6;
    fVar13 = pfVar6[1];
    fVar18 = pfVar6[2];
    fVar19 = pfVar6[3];
    fVar20 = fVar19 * pfVar2[3] + fVar13 * pfVar2[1] + fVar18 * pfVar2[2] + fVar17 * *pfVar2;
    fVar10 = fVar19 * pfVar2[7] + fVar13 * pfVar2[5] + fVar18 * pfVar2[6] + fVar17 * pfVar2[4];
    fVar17 = fVar19 * pfVar2[0xb] + fVar13 * pfVar2[9] + fVar18 * pfVar2[10] + fVar17 * pfVar2[8];
    fVar11 = SQRT(fVar20 * fVar20 + fVar17 * fVar17 + fVar10 * fVar10) * fVar11;
    fVar11 = fVar11 * fVar11;
    iVar8 = (int)fVar11;
    fVar11 = *(float *)(*(int *)((int)this + 0x95c) + (int)((fVar11 - (float)iVar8) * 1024.0) * 4);
    if (iVar8 < 0) {
      fVar11 = fVar11 / *(float *)(*(int *)((int)this + 0x960) + iVar8 * -4);
    }
    else {
      fVar11 = fVar11 * *(float *)(iVar8 * 4 + *(int *)((int)this + 0x960));
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    uVar5 = (int)(fVar11 * 255.0) << 0x18 | *local_14 & 0xffffff;
  }
  else {
    if (iVar8 == 3) {
      fVar11 = **(float **)((int)this + 0x9c4);
      fVar13 = fVar11 - **(float **)((int)this + 0x9c0);
      local_24 = param_5;
      local_14 = param_2;
      local_1c = (uint *)0x0;
      if (param_4 >> 1 != 0) {
        do {
          param_2 = (uint *)((int)local_14 + param_3 * 2);
          pfVar2 = *(float **)((int)this + 0x9cc);
          uVar5 = *(uint *)((int)local_14 + param_3);
          pfVar6 = (float *)((int)local_1c * 0x40 + param_1);
          fVar17 = *pfVar6;
          fVar18 = pfVar6[1];
          fVar19 = pfVar6[2];
          fVar20 = pfVar6[3];
          pfVar6 = (float *)((int)local_1c * 0x40 + 0x20 + param_1);
          fVar10 = *pfVar6;
          fVar12 = pfVar6[1];
          fVar4 = pfVar6[2];
          fVar15 = pfVar6[3];
          fVar14 = pfVar2[3] * fVar20 + pfVar2[1] * fVar18 + pfVar2[2] * fVar19 + *pfVar2 * fVar17;
          fVar16 = pfVar2[7] * fVar20 + pfVar2[5] * fVar18 + pfVar2[6] * fVar19 + pfVar2[4] * fVar17
          ;
          fVar17 = pfVar2[0xb] * fVar20 + pfVar2[9] * fVar18 +
                   pfVar2[10] * fVar19 + pfVar2[8] * fVar17;
          fVar18 = pfVar2[3] * fVar15 + pfVar2[1] * fVar12 + pfVar2[2] * fVar4 + *pfVar2 * fVar10;
          fVar19 = pfVar2[7] * fVar15 + pfVar2[5] * fVar12 + pfVar2[6] * fVar4 + pfVar2[4] * fVar10;
          fVar20 = pfVar2[0xb] * fVar15 + pfVar2[9] * fVar12 +
                   pfVar2[10] * fVar4 + pfVar2[8] * fVar10;
          fVar17 = (fVar11 - SQRT(fVar14 * fVar14 + fVar17 * fVar17 + fVar16 * fVar16)) / fVar13;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
          if (1.0 <= fVar17) {
            fVar17 = 1.0;
          }
          fVar18 = (fVar11 - SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar19 * fVar19)) / fVar13;
          *local_24 = (int)(fVar17 * 255.0) << 0x18 | *local_14 & 0xffffff;
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          *(uint *)((int)local_24 + param_6) = (int)(fVar18 * 255.0) << 0x18 | uVar5 & 0xffffff;
          param_5 = (uint *)((int)local_24 + param_6 * 2);
          local_1c = (uint *)((int)local_1c + 1);
          local_24 = param_5;
          local_14 = param_2;
        } while (local_1c < param_4 >> 1);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      pfVar2 = *(float **)((int)this + 0x9cc);
      pfVar6 = (float *)(param_4 * 0x20 + -0x20 + param_1);
      fVar17 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar19 = pfVar6[2];
      fVar20 = pfVar6[3];
      uVar5 = *param_2;
      fVar10 = fVar20 * pfVar2[3] + fVar18 * pfVar2[1] + fVar19 * pfVar2[2] + fVar17 * *pfVar2;
      fVar12 = fVar20 * pfVar2[7] + fVar18 * pfVar2[5] + fVar19 * pfVar2[6] + fVar17 * pfVar2[4];
      fVar17 = fVar20 * pfVar2[0xb] + fVar18 * pfVar2[9] + fVar19 * pfVar2[10] + fVar17 * pfVar2[8];
      fVar13 = (fVar11 - SQRT(fVar10 * fVar10 + fVar17 * fVar17 + fVar12 * fVar12)) / fVar13;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
LAB_1000aaad:
      *param_5 = (int)(fVar13 * 255.0) << 0x18 | uVar5 & 0xffffff;
      return;
    }
    local_24 = (uint *)(param_4 >> 1);
    local_14 = param_2;
    if (local_24 != (uint *)0x0) {
      do {
        param_2 = (uint *)((int)local_14 + param_3 * 2);
        uVar5 = *(uint *)((int)local_14 + param_3);
        *param_5 = *local_14 | 0xff000000;
        *(uint *)((int)param_5 + param_6) = uVar5 | 0xff000000;
        local_20 = (uint *)((int)param_5 + param_6 * 2);
        local_24 = (uint *)((int)local_24 - 1);
        param_5 = local_20;
        local_14 = param_2;
      } while (local_24 != (uint *)0x0);
    }
    if ((param_4 & 1) == 0) {
      return;
    }
    uVar5 = *param_2 | 0xff000000;
  }
  *local_20 = uVar5;
  return;
}


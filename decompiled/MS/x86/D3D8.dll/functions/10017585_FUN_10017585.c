/*
 * FUN_10017585 at 10017585
 * undefined __thiscall FUN_10017585(void * this, int param_1, uint * param_2, int param_3, uint param_4, uint * param_5, int param_6)
 * Address ranges: 10017585-1001869e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10017585(void *this,int param_1,uint *param_2,int param_3,uint param_4,uint *param_5,int param_6
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
  int iVar10;
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
  float fVar21;
  uint local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  
  iVar8 = *(int *)((int)this + 0x4bc);
  local_1c = param_5;
  if (*(int *)((int)this + 0x34c) == 0) {
    if (iVar8 == 1) {
      local_14 = param_5;
      local_18 = param_2;
      local_1c = (uint *)0x0;
      fVar12 = **(float **)((int)this + 0xab8);
      iVar8 = *(int *)((int)this + 0xabc);
      pfVar6 = (float *)(iVar8 + 0x20);
      if (param_4 >> 1 != 0) {
        do {
          uVar5 = *local_18;
          uVar3 = *(uint *)((int)local_18 + param_3);
          local_18 = (uint *)((int)local_18 + param_3 * 2);
          pfVar2 = (float *)((int)local_1c * 0x40 + param_1);
          pfVar1 = (float *)((int)local_1c * 0x40 + 0x20 + param_1);
          fVar18 = ABS(pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
                       pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar12;
          iVar9 = (int)fVar18;
          iVar7 = *(int *)((int)this + 0xa50);
          iVar10 = (int)((fVar18 - (float)iVar9) * 1024.0);
          if (iVar9 < 0) {
            fVar18 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) /
                     *(float *)(iVar7 + iVar9 * -4);
          }
          else {
            fVar18 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) *
                     *(float *)(iVar7 + iVar9 * 4);
          }
          fVar14 = ABS(pfVar1[3] * *(float *)(iVar8 + 0x2c) + pfVar1[1] * *(float *)(iVar8 + 0x24) +
                       pfVar1[2] * *(float *)(iVar8 + 0x28) + *pfVar1 * *pfVar6) * fVar12;
          iVar9 = (int)fVar14;
          iVar10 = (int)((fVar14 - (float)iVar9) * 1024.0);
          if (iVar9 < 0) {
            fVar14 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) /
                     *(float *)(iVar7 + iVar9 * -4);
          }
          else {
            fVar14 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) *
                     *(float *)(iVar7 + iVar9 * 4);
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
          *local_14 = (int)(fVar18 * 255.0) << 0x18 | uVar5 & 0xffffff;
          *(uint *)((int)local_14 + param_6) = (int)(fVar14 * 255.0) << 0x18 | uVar3 & 0xffffff;
          local_14 = (uint *)((int)local_14 + param_6 * 2);
          local_1c = (uint *)((int)local_1c + 1);
        } while (local_1c < param_4 >> 1);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      pfVar2 = (float *)(param_4 * 0x20 + -0x20 + param_1);
      fVar12 = (pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
               pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar12;
      iVar8 = (int)fVar12;
      fVar12 = *(float *)(*(int *)((int)this + 0xa4c) + (int)((fVar12 - (float)iVar8) * 1024.0) * 4)
      ;
      if (iVar8 < 0) {
        fVar12 = fVar12 / *(float *)(*(int *)((int)this + 0xa50) + iVar8 * -4);
      }
      else {
        fVar12 = fVar12 * *(float *)(*(int *)((int)this + 0xa50) + iVar8 * 4);
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      uVar5 = (int)(fVar12 * 255.0) << 0x18 | *local_18 & 0xffffff;
      local_1c = local_14;
    }
    else {
      if (iVar8 == 2) {
        fVar18 = 1.0;
        local_18 = param_2;
        local_14 = param_5;
        local_24 = (uint *)0x0;
        fVar12 = **(float **)((int)this + 0xab8);
        iVar8 = *(int *)((int)this + 0xabc);
        pfVar6 = (float *)(iVar8 + 0x20);
        if (param_4 >> 1 != 0) {
          do {
            uVar5 = *local_18;
            uVar3 = *(uint *)((int)local_18 + param_3);
            local_18 = (uint *)((int)local_18 + param_3 * 2);
            pfVar2 = (float *)((int)local_24 * 0x40 + param_1);
            pfVar1 = (float *)((int)local_24 * 0x40 + 0x20 + param_1);
            fVar19 = ABS(pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24)
                         + pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar12;
            fVar19 = fVar19 * fVar19;
            iVar9 = (int)fVar19;
            fVar14 = ABS(pfVar1[3] * *(float *)(iVar8 + 0x2c) + pfVar1[1] * *(float *)(iVar8 + 0x24)
                         + pfVar1[2] * *(float *)(iVar8 + 0x28) + *pfVar1 * *pfVar6) * fVar12;
            iVar7 = *(int *)((int)this + 0xa50);
            iVar10 = (int)((fVar19 - (float)iVar9) * 1024.0);
            if (iVar9 < 0) {
              fVar19 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) /
                       *(float *)(iVar7 + iVar9 * -4);
            }
            else {
              fVar19 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) *
                       *(float *)(iVar7 + iVar9 * 4);
            }
            fVar14 = fVar14 * fVar14;
            iVar9 = (int)fVar14;
            iVar10 = (int)((fVar14 - (float)iVar9) * 1024.0);
            if (iVar9 < 0) {
              fVar14 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) /
                       *(float *)(iVar7 + iVar9 * -4);
            }
            else {
              fVar14 = *(float *)(*(int *)((int)this + 0xa4c) + iVar10 * 4) *
                       *(float *)(iVar7 + iVar9 * 4);
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
            if (1.0 <= fVar19) {
              fVar19 = fVar18;
            }
            if (1.0 <= fVar14) {
              fVar14 = fVar18;
            }
            *local_14 = (int)(fVar19 * 255.0) << 0x18 | uVar5 & 0xffffff;
            *(uint *)((int)local_14 + param_6) = (int)(fVar14 * 255.0) << 0x18 | uVar3 & 0xffffff;
            local_14 = (uint *)((int)local_14 + param_6 * 2);
            local_24 = (uint *)((int)local_24 + 1);
          } while (local_24 < param_4 >> 1);
        }
        if ((param_4 & 1) == 0) {
          return;
        }
        pfVar2 = (float *)(param_4 * 0x20 + -0x20 + param_1);
        fVar12 = (pfVar2[3] * *(float *)(iVar8 + 0x2c) + pfVar2[1] * *(float *)(iVar8 + 0x24) +
                 pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6) * fVar12;
        fVar12 = fVar12 * fVar12;
        iVar8 = (int)fVar12;
        iVar7 = (int)((fVar12 - (float)iVar8) * 1024.0);
        if (iVar8 < 0) {
          fVar12 = *(float *)(*(int *)((int)this + 0xa4c) + iVar7 * 4) /
                   *(float *)(*(int *)((int)this + 0xa50) + iVar8 * -4);
        }
        else {
          fVar12 = *(float *)(*(int *)((int)this + 0xa4c) + iVar7 * 4) *
                   *(float *)(iVar8 * 4 + *(int *)((int)this + 0xa50));
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (1.0 <= fVar12) {
          fVar12 = fVar18;
        }
        *local_14 = (int)(fVar12 * 255.0) << 0x18 | *local_18 & 0xffffff;
        return;
      }
      local_18 = param_2;
      if (iVar8 == 3) {
        fVar12 = **(float **)((int)this + 0xab4);
        iVar8 = *(int *)((int)this + 0xabc);
        fVar14 = fVar12 - **(float **)((int)this + 0xab0);
        pfVar6 = (float *)(iVar8 + 0x20);
        fVar18 = 1.0;
        local_14 = (uint *)0x0;
        if (param_4 >> 1 != 0) {
          do {
            uVar5 = *local_18;
            uVar3 = *(uint *)((int)local_18 + param_3);
            local_18 = (uint *)((int)local_18 + param_3 * 2);
            pfVar2 = (float *)((int)local_14 * 0x40 + param_1);
            pfVar1 = (float *)((int)local_14 * 0x40 + 0x20 + param_1);
            fVar19 = *pfVar1;
            fVar20 = pfVar1[1];
            fVar21 = pfVar1[2];
            fVar11 = pfVar1[3];
            fVar13 = *pfVar6;
            fVar4 = *(float *)(iVar8 + 0x24);
            fVar16 = *(float *)(iVar8 + 0x28);
            fVar15 = *(float *)(iVar8 + 0x2c);
            fVar17 = (fVar12 - ABS(pfVar2[3] * *(float *)(iVar8 + 0x2c) +
                                   pfVar2[1] * *(float *)(iVar8 + 0x24) +
                                   pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6)) /
                     fVar14;
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            if (1.0 <= fVar17) {
              fVar17 = fVar18;
            }
            *local_1c = (int)(fVar17 * 255.0) << 0x18 | uVar5 & 0xffffff;
            fVar19 = (fVar12 - ABS(fVar11 * fVar15 + fVar20 * fVar4 +
                                   fVar21 * fVar16 + fVar19 * fVar13)) / fVar14;
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            if (1.0 <= fVar19) {
              fVar19 = fVar18;
            }
            *(uint *)((int)local_1c + param_6) = (int)(fVar19 * 255.0) << 0x18 | uVar3 & 0xffffff;
            param_5 = (uint *)((int)local_1c + param_6 * 2);
            local_14 = (uint *)((int)local_14 + 1);
            local_1c = param_5;
          } while (local_14 < param_4 >> 1);
        }
        if ((param_4 & 1) == 0) {
          return;
        }
        pfVar2 = (float *)(param_4 * 0x20 + -0x20 + param_1);
        uVar5 = *local_18;
        fVar14 = (fVar12 - (pfVar2[3] * *(float *)(iVar8 + 0x2c) +
                            pfVar2[1] * *(float *)(iVar8 + 0x24) +
                           pfVar2[2] * *(float *)(iVar8 + 0x28) + *pfVar2 * *pfVar6)) / fVar14;
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        if (1.0 <= fVar14) {
          fVar14 = fVar18;
        }
LAB_1001814d:
        *param_5 = (int)(fVar14 * 255.0) << 0x18 | uVar5 & 0xffffff;
        return;
      }
      local_28 = param_4 >> 1;
      local_14 = param_5;
      if (local_28 != 0) {
        do {
          uVar5 = *(uint *)((int)local_18 + param_3);
          param_2 = (uint *)((int)local_18 + param_3 * 2);
          local_28 = local_28 - 1;
          *local_14 = *local_18 | 0xff000000;
          *(uint *)((int)local_14 + param_6) = uVar5 | 0xff000000;
          local_1c = (uint *)((int)local_14 + param_6 * 2);
          local_18 = param_2;
          local_14 = local_1c;
        } while (local_28 != 0);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      uVar5 = *param_2 | 0xff000000;
    }
  }
  else {
    if (iVar8 == 1) {
      local_14 = param_2;
      local_20 = 0;
      fVar12 = **(float **)((int)this + 0xab8);
      if (param_4 >> 1 != 0) {
        do {
          uVar5 = *local_14;
          uVar3 = *(uint *)((int)local_14 + param_3);
          local_14 = (uint *)((int)local_14 + param_3 * 2);
          pfVar2 = *(float **)((int)this + 0xabc);
          pfVar6 = (float *)(local_20 * 0x40 + param_1);
          fVar18 = *pfVar6;
          fVar14 = pfVar6[1];
          fVar19 = pfVar6[2];
          fVar20 = pfVar6[3];
          pfVar6 = (float *)(local_20 * 0x40 + 0x20 + param_1);
          fVar21 = *pfVar6;
          fVar11 = pfVar6[1];
          fVar13 = pfVar6[2];
          fVar4 = pfVar6[3];
          fVar16 = fVar20 * pfVar2[3] + fVar14 * pfVar2[1] + fVar19 * pfVar2[2] + fVar18 * *pfVar2;
          fVar15 = pfVar2[7] * fVar20 + pfVar2[5] * fVar14 + pfVar2[6] * fVar19 + pfVar2[4] * fVar18
          ;
          fVar18 = pfVar2[0xb] * fVar20 + pfVar2[9] * fVar14 +
                   pfVar2[10] * fVar19 + pfVar2[8] * fVar18;
          fVar14 = fVar4 * pfVar2[3] + fVar11 * pfVar2[1] + fVar13 * pfVar2[2] + fVar21 * *pfVar2;
          fVar19 = pfVar2[7] * fVar4 + pfVar2[5] * fVar11 + pfVar2[6] * fVar13 + pfVar2[4] * fVar21;
          fVar20 = pfVar2[0xb] * fVar4 + pfVar2[9] * fVar11 +
                   pfVar2[10] * fVar13 + pfVar2[8] * fVar21;
          fVar18 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15) * fVar12;
          iVar7 = (int)fVar18;
          iVar8 = *(int *)((int)this + 0xa50);
          iVar9 = (int)((fVar18 - (float)iVar7) * 1024.0);
          if (iVar7 < 0) {
            fVar18 = *(float *)(*(int *)((int)this + 0xa4c) + iVar9 * 4) /
                     *(float *)(iVar8 + iVar7 * -4);
          }
          else {
            fVar18 = *(float *)(*(int *)((int)this + 0xa4c) + iVar9 * 4) *
                     *(float *)(iVar8 + iVar7 * 4);
          }
          fVar14 = SQRT(fVar14 * fVar14 + fVar20 * fVar20 + fVar19 * fVar19) * fVar12;
          iVar7 = (int)fVar14;
          iVar9 = (int)((fVar14 - (float)iVar7) * 1024.0);
          if (iVar7 < 0) {
            fVar14 = *(float *)(*(int *)((int)this + 0xa4c) + iVar9 * 4) /
                     *(float *)(iVar8 + iVar7 * -4);
          }
          else {
            fVar14 = *(float *)(*(int *)((int)this + 0xa4c) + iVar9 * 4) *
                     *(float *)(iVar8 + iVar7 * 4);
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
          *local_1c = (int)(fVar18 * 255.0) << 0x18 | uVar5 & 0xffffff;
          *(uint *)((int)local_1c + param_6) = (int)(fVar14 * 255.0) << 0x18 | uVar3 & 0xffffff;
          local_1c = (uint *)((int)local_1c + param_6 * 2);
          local_20 = local_20 + 1;
        } while (local_20 < param_4 >> 1);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      pfVar2 = *(float **)((int)this + 0xabc);
      pfVar6 = (float *)(param_4 * 0x20 + -0x20 + param_1);
      fVar18 = *pfVar6;
      fVar14 = pfVar6[1];
      fVar19 = pfVar6[2];
      fVar20 = pfVar6[3];
      fVar21 = fVar20 * pfVar2[3] + fVar14 * pfVar2[1] + fVar19 * pfVar2[2] + fVar18 * *pfVar2;
      fVar11 = fVar20 * pfVar2[7] + fVar14 * pfVar2[5] + fVar19 * pfVar2[6] + fVar18 * pfVar2[4];
      fVar18 = fVar20 * pfVar2[0xb] + fVar14 * pfVar2[9] + fVar19 * pfVar2[10] + fVar18 * pfVar2[8];
      fVar12 = SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar11 * fVar11) * fVar12;
    }
    else {
      if (iVar8 != 2) {
        if (iVar8 == 3) {
          fVar12 = **(float **)((int)this + 0xab4);
          fVar14 = fVar12 - **(float **)((int)this + 0xab0);
          local_24 = param_5;
          local_14 = param_2;
          local_18 = (uint *)0x0;
          if (param_4 >> 1 != 0) {
            do {
              param_2 = (uint *)((int)local_14 + param_3 * 2);
              uVar5 = *(uint *)((int)local_14 + param_3);
              pfVar6 = (float *)((int)local_18 * 0x40 + param_1);
              fVar18 = *pfVar6;
              fVar19 = pfVar6[1];
              fVar20 = pfVar6[2];
              fVar21 = pfVar6[3];
              pfVar2 = *(float **)((int)this + 0xabc);
              pfVar6 = (float *)((int)local_18 * 0x40 + 0x20 + param_1);
              fVar11 = *pfVar6;
              fVar13 = pfVar6[1];
              fVar4 = pfVar6[2];
              fVar16 = pfVar6[3];
              fVar15 = pfVar2[3] * fVar21 + pfVar2[1] * fVar19 +
                       pfVar2[2] * fVar20 + *pfVar2 * fVar18;
              fVar17 = pfVar2[7] * fVar21 + pfVar2[5] * fVar19 +
                       pfVar2[6] * fVar20 + pfVar2[4] * fVar18;
              fVar18 = pfVar2[0xb] * fVar21 + pfVar2[9] * fVar19 +
                       pfVar2[10] * fVar20 + pfVar2[8] * fVar18;
              fVar19 = pfVar2[3] * fVar16 + pfVar2[1] * fVar13 +
                       pfVar2[2] * fVar4 + *pfVar2 * fVar11;
              fVar20 = pfVar2[7] * fVar16 + pfVar2[5] * fVar13 +
                       pfVar2[6] * fVar4 + pfVar2[4] * fVar11;
              fVar21 = pfVar2[0xb] * fVar16 + pfVar2[9] * fVar13 +
                       pfVar2[10] * fVar4 + pfVar2[8] * fVar11;
              fVar18 = (fVar12 - SQRT(fVar15 * fVar15 + fVar18 * fVar18 + fVar17 * fVar17)) / fVar14
              ;
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              if (1.0 <= fVar18) {
                fVar18 = 1.0;
              }
              fVar19 = (fVar12 - SQRT(fVar19 * fVar19 + fVar21 * fVar21 + fVar20 * fVar20)) / fVar14
              ;
              *local_24 = (int)(fVar18 * 255.0) << 0x18 | *local_14 & 0xffffff;
              if (fVar19 <= 0.0) {
                fVar19 = 0.0;
              }
              if (1.0 <= fVar19) {
                fVar19 = 1.0;
              }
              *(uint *)((int)local_24 + param_6) = (int)(fVar19 * 255.0) << 0x18 | uVar5 & 0xffffff;
              param_5 = (uint *)((int)local_24 + param_6 * 2);
              local_18 = (uint *)((int)local_18 + 1);
              local_24 = param_5;
              local_14 = param_2;
            } while (local_18 < param_4 >> 1);
          }
          if ((param_4 & 1) == 0) {
            return;
          }
          pfVar2 = *(float **)((int)this + 0xabc);
          pfVar6 = (float *)(param_4 * 0x20 + -0x20 + param_1);
          fVar18 = *pfVar6;
          fVar19 = pfVar6[1];
          fVar20 = pfVar6[2];
          fVar21 = pfVar6[3];
          uVar5 = *param_2;
          fVar11 = fVar21 * pfVar2[3] + fVar19 * pfVar2[1] + fVar20 * pfVar2[2] + fVar18 * *pfVar2;
          fVar13 = fVar21 * pfVar2[7] + fVar19 * pfVar2[5] + fVar20 * pfVar2[6] + fVar18 * pfVar2[4]
          ;
          fVar18 = fVar21 * pfVar2[0xb] + fVar19 * pfVar2[9] +
                   fVar20 * pfVar2[10] + fVar18 * pfVar2[8];
          fVar14 = (fVar12 - SQRT(fVar11 * fVar11 + fVar18 * fVar18 + fVar13 * fVar13)) / fVar14;
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
          goto LAB_1001814d;
        }
        local_24 = (uint *)(param_4 >> 1);
        local_14 = param_2;
        if (local_24 != (uint *)0x0) {
          do {
            param_2 = (uint *)((int)local_14 + param_3 * 2);
            uVar5 = *(uint *)((int)local_14 + param_3);
            *param_5 = *local_14 | 0xff000000;
            *(uint *)((int)param_5 + param_6) = uVar5 | 0xff000000;
            local_1c = (uint *)((int)param_5 + param_6 * 2);
            local_24 = (uint *)((int)local_24 - 1);
            param_5 = local_1c;
            local_14 = param_2;
          } while (local_24 != (uint *)0x0);
        }
        if ((param_4 & 1) == 0) {
          return;
        }
        uVar5 = *param_2 | 0xff000000;
        goto LAB_10018692;
      }
      local_14 = param_2;
      local_20 = 0;
      fVar12 = **(float **)((int)this + 0xab8);
      if (param_4 >> 1 != 0) {
        do {
          uVar5 = *local_14;
          uVar3 = *(uint *)((int)local_14 + param_3);
          local_14 = (uint *)((int)local_14 + param_3 * 2);
          pfVar2 = *(float **)((int)this + 0xabc);
          pfVar6 = (float *)(local_20 * 0x40 + param_1);
          fVar18 = *pfVar6;
          fVar14 = pfVar6[1];
          fVar19 = pfVar6[2];
          fVar20 = pfVar6[3];
          pfVar6 = (float *)(local_20 * 0x40 + 0x20 + param_1);
          fVar21 = *pfVar6;
          fVar11 = pfVar6[1];
          fVar13 = pfVar6[2];
          fVar4 = pfVar6[3];
          fVar16 = pfVar2[3] * fVar20 + pfVar2[1] * fVar14 + pfVar2[2] * fVar19 + *pfVar2 * fVar18;
          fVar15 = pfVar2[7] * fVar20 + pfVar2[5] * fVar14 + pfVar2[6] * fVar19 + pfVar2[4] * fVar18
          ;
          fVar18 = pfVar2[0xb] * fVar20 + pfVar2[9] * fVar14 +
                   pfVar2[10] * fVar19 + pfVar2[8] * fVar18;
          fVar14 = fVar4 * pfVar2[3] + fVar11 * pfVar2[1] + fVar13 * pfVar2[2] + fVar21 * *pfVar2;
          fVar19 = pfVar2[7] * fVar4 + pfVar2[5] * fVar11 + pfVar2[6] * fVar13 + pfVar2[4] * fVar21;
          fVar20 = pfVar2[0xb] * fVar4 + pfVar2[9] * fVar11 +
                   pfVar2[10] * fVar13 + pfVar2[8] * fVar21;
          fVar18 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar15 * fVar15) * fVar12;
          fVar18 = fVar18 * fVar18;
          iVar7 = (int)fVar18;
          fVar14 = SQRT(fVar14 * fVar14 + fVar20 * fVar20 + fVar19 * fVar19) * fVar12;
          iVar8 = *(int *)((int)this + 0xa50);
          fVar18 = *(float *)(*(int *)((int)this + 0xa4c) +
                             (int)((fVar18 - (float)iVar7) * 1024.0) * 4);
          if (iVar7 < 0) {
            fVar18 = fVar18 / *(float *)(iVar8 + iVar7 * -4);
          }
          else {
            fVar18 = fVar18 * *(float *)(iVar8 + iVar7 * 4);
          }
          fVar14 = fVar14 * fVar14;
          iVar7 = (int)fVar14;
          fVar14 = *(float *)(*(int *)((int)this + 0xa4c) +
                             (int)((fVar14 - (float)iVar7) * 1024.0) * 4);
          if (iVar7 < 0) {
            fVar14 = fVar14 / *(float *)(iVar8 + iVar7 * -4);
          }
          else {
            fVar14 = fVar14 * *(float *)(iVar8 + iVar7 * 4);
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          if (1.0 <= fVar14) {
            fVar14 = 1.0;
          }
          *local_1c = (int)(fVar18 * 255.0) << 0x18 | uVar5 & 0xffffff;
          *(uint *)((int)local_1c + param_6) = (int)(fVar14 * 255.0) << 0x18 | uVar3 & 0xffffff;
          local_1c = (uint *)((int)local_1c + param_6 * 2);
          local_20 = local_20 + 1;
        } while (local_20 < param_4 >> 1);
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      pfVar2 = *(float **)((int)this + 0xabc);
      pfVar6 = (float *)(param_4 * 0x20 + -0x20 + param_1);
      fVar18 = *pfVar6;
      fVar14 = pfVar6[1];
      fVar19 = pfVar6[2];
      fVar20 = pfVar6[3];
      fVar21 = fVar20 * pfVar2[3] + fVar14 * pfVar2[1] + fVar19 * pfVar2[2] + fVar18 * *pfVar2;
      fVar11 = fVar20 * pfVar2[7] + fVar14 * pfVar2[5] + fVar19 * pfVar2[6] + fVar18 * pfVar2[4];
      fVar18 = fVar20 * pfVar2[0xb] + fVar14 * pfVar2[9] + fVar19 * pfVar2[10] + fVar18 * pfVar2[8];
      fVar12 = SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar11 * fVar11) * fVar12;
      fVar12 = fVar12 * fVar12;
    }
    iVar8 = (int)fVar12;
    fVar12 = *(float *)(*(int *)((int)this + 0xa4c) + (int)((fVar12 - (float)iVar8) * 1024.0) * 4);
    if (iVar8 < 0) {
      fVar12 = fVar12 / *(float *)(*(int *)((int)this + 0xa50) + iVar8 * -4);
    }
    else {
      fVar12 = fVar12 * *(float *)(iVar8 * 4 + *(int *)((int)this + 0xa50));
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    uVar5 = (int)(fVar12 * 255.0) << 0x18 | *local_14 & 0xffffff;
  }
LAB_10018692:
  *local_1c = uVar5;
  return;
}


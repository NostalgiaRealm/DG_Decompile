/*
 * FUN_10046825 at 10046825
 * undefined4 __thiscall FUN_10046825(void * this, int param_1, int * param_2)
 * Address ranges: 10046825-10046bb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10046825(void *this,int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  SIZE_T SVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_48;
  undefined4 local_34;
  ushort *local_24;
  uint local_20;
  byte *local_18;
  char local_11;
  
  thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1660));
  *(undefined4 *)((int)this + 0x1660) = 0;
  *(undefined4 *)((int)this + 0x1664) = 0;
  *(undefined4 *)((int)this + 0x1668) = 0;
  pbVar11 = (byte *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
  local_34 = 0;
  local_11 = '\x01';
  local_18 = pbVar11;
  do {
    if (*(uint *)(param_1 + 0x6c) <= (uint)((int)local_18 - (int)pbVar11)) {
      return local_34;
    }
    uVar5 = FUN_10046bb5(this,(int *)&local_18,'\x01',&local_11);
    pbVar4 = local_18;
    if ((char)uVar5 == '\0') {
      bVar1 = *local_18;
      if (bVar1 < 9) {
        if (((bVar1 != 8) && (bVar1 != 1)) && (bVar1 != 2)) {
          if (bVar1 == 3) {
            local_20 = 0;
            local_24 = (ushort *)(local_18 + 4);
            if (*(short *)(local_18 + 2) != 0) {
              do {
                iVar2 = *(int *)((int)this + 0x1588);
                iVar9 = (uint)local_24[1] * 0x20;
                iVar8 = (uint)*local_24 * 0x20;
                iVar10 = (uint)local_24[2] * 0x20;
                fVar19 = *(float *)(iVar2 + iVar10);
                fVar18 = *(float *)(iVar2 + iVar8) - fVar19;
                fVar17 = *(float *)(iVar2 + iVar9) - fVar19;
                fVar20 = *(float *)(iVar2 + 4 + iVar10);
                fVar15 = *(float *)(iVar2 + 4 + iVar8) - fVar20;
                fVar19 = fVar19 - (float)*param_2;
                fVar16 = *(float *)(iVar2 + 4 + iVar9) - fVar20;
                fVar20 = fVar20 - (float)param_2[1];
                fVar14 = fVar18;
                if (fVar18 < 0.0) {
                  fVar14 = -fVar18;
                }
                fVar13 = fVar15;
                if (fVar15 < 0.0) {
                  fVar13 = -fVar15;
                }
                if (fVar14 <= fVar13) {
                  if (1e-05 <= ABS(fVar15)) {
                    fVar17 = fVar17 - (fVar18 / fVar15) * fVar16;
                    if (1e-05 <= ABS(fVar17)) {
                      fVar14 = ((fVar18 / fVar15) * fVar20 - fVar19) / fVar17;
                      fVar18 = -(fVar14 * fVar16 + fVar20) / fVar15;
                      goto LAB_10046a4a;
                    }
                  }
                }
                else {
                  fVar16 = fVar16 - (fVar15 / fVar18) * fVar17;
                  if (1e-05 <= ABS(fVar16)) {
                    fVar14 = ((fVar15 / fVar18) * fVar19 - fVar20) / fVar16;
                    fVar18 = -(fVar14 * fVar17 + fVar19) / fVar18;
LAB_10046a4a:
                    if (((0.0 <= fVar18) && (0.0 <= fVar14)) &&
                       (fVar19 = (1.0 - fVar18) - fVar14, 0.0 <= fVar19)) {
                      iVar2 = *(int *)((int)this + 0x1668);
                      iVar3 = *(int *)((int)this + 0x1588);
                      local_48 = CONCAT22(local_48._2_2_,3);
                      fVar20 = *(float *)(iVar3 + 8 + iVar8);
                      fVar15 = *(float *)(iVar3 + 8 + iVar9);
                      fVar16 = *(float *)(iVar3 + 8 + iVar10);
                      if (*(int *)((int)this + 0x1664) == iVar2) {
                        if (iVar2 == 0) {
                          uVar5 = 0x10;
                        }
                        else {
                          uVar5 = iVar2 * 2;
                        }
                        SVar6 = (SIZE_T)((ulonglong)uVar5 * 0xc);
                        if ((int)((ulonglong)uVar5 * 0xc >> 0x20) != 0) {
                          SVar6 = 0xffffffff;
                        }
                        puVar7 = (undefined4 *)FUN_1005c789(SVar6);
                        if (puVar7 == (undefined4 *)0x0) goto LAB_10046b46;
                        FUN_1005ca00(puVar7,*(undefined4 **)((int)this + 0x1660),
                                     *(int *)((int)this + 0x1668) * 0xc);
                        thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1660));
                        *(undefined4 **)((int)this + 0x1660) = puVar7;
                        *(uint *)((int)this + 0x1668) = uVar5;
                      }
                      puVar7 = (undefined4 *)
                               (*(int *)((int)this + 0x1664) * 0xc + *(int *)((int)this + 0x1660));
                      *puVar7 = local_48;
                      puVar7[1] = (int)local_24 - (int)pbVar11;
                      puVar7[2] = fVar18 * fVar20 + fVar14 * fVar15 + fVar19 * fVar16;
                      *(int *)((int)this + 0x1664) = *(int *)((int)this + 0x1664) + 1;
                    }
                  }
                }
LAB_10046b46:
                local_24 = local_24 + 4;
                local_20 = local_20 + 1;
              } while (local_20 < *(ushort *)(pbVar4 + 2));
            }
          }
          else {
            bVar12 = bVar1 == 7;
LAB_10046b72:
            if (!bVar12) {
              local_34 = 0x80070057;
              goto LAB_10046b7b;
            }
          }
        }
      }
      else if (bVar1 != 10) {
        if (bVar1 != 0xb) {
          bVar12 = bVar1 == 0xd;
          goto LAB_10046b72;
        }
LAB_10046b7b:
        local_11 = '\0';
      }
      local_18 = local_18 + (uint)pbVar4[1] * (uint)*(ushort *)(pbVar4 + 2) + 4;
    }
    if (local_11 == '\0') {
      return local_34;
    }
  } while( true );
}


/*
 * FUN_180008210 at 180008210
 * int __cdecl FUN_180008210(longlong * param_1, uint * param_2)
 * Address ranges: 180008210-180008683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180008210(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong extraout_x11;
  uint extraout_w15;
  uint local_880;
  int local_87c;
  uint local_878 [2];
  ushort local_870 [16];
  ushort auStack_850 [24];
  char acStack_820 [5];
  byte abStack_81b [6];
  byte abStack_815 [1013];
  char acStack_420 [1024];
  
  local_878[0] = 0;
  local_878[1] = 0;
  local_880 = 0;
  local_87c = 0;
  uVar6 = FUN_180008008(param_1,acStack_820,acStack_420,local_878,local_878 + 1,&local_87c);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_180008188(acStack_820,"3df v",5), (uVar6 & 1) != 0)) {
    uVar4 = FUN_1800081c0(abStack_81b,(int *)&local_880);
    if ((uVar4 != 0) && (abStack_81b[uVar4] == 0x2e)) {
      uVar4 = FUN_1800081c0(abStack_81b + (ulonglong)uVar4 + 1,(int *)&local_880);
      if (((uVar4 != 0) && (abStack_81b[(ulonglong)uVar4 + (extraout_x11 & 0xffffffff) + 1] == 0))
         && (uVar6 = FUN_180008008(param_1,acStack_820,acStack_420,local_878,local_878 + 1,
                                   &local_87c), (uVar6 & 1) != 0)) {
        ppuVar9 = &PTR_DAT_180061870;
        local_880 = 0;
        uVar6 = 0;
        uVar8 = 0;
        while( true ) {
          uVar4 = (uint)uVar6;
          uVar6 = FUN_180008188(acStack_820,ppuVar9[uVar6],-1);
          if ((uVar6 & 1) != 0) break;
          local_880 = uVar4 + 1;
          uVar6 = (ulonglong)local_880;
          uVar8 = (ulonglong)local_880;
          if (0xc < local_880) {
            return 0;
          }
        }
        param_2[5] = (&DAT_180061810)[uVar8 & 0xffffffff];
        if (0xc < uVar4) {
          return 0;
        }
        uVar6 = FUN_180008008(param_1,acStack_820,acStack_420,local_878,local_878 + 1,&local_87c);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar6 = FUN_180008188(acStack_820,"lod range: ",0xb);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar4 = FUN_1800081c0(abStack_815,(int *)&local_880);
        uVar6 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          return 0;
        }
        iVar12 = 1;
        for (uVar10 = local_880; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1) {
          iVar12 = iVar12 + 1;
        }
        iVar5 = 0;
        if (uVar10 == 1) {
          iVar5 = iVar12;
        }
        if (iVar5 == 0) {
          return 0;
        }
        puVar7 = &DAT_1800617e8;
        param_2[2] = (&DAT_1800617e8)[iVar5 - 1];
        if (abStack_815[uVar4] != 0x20) {
          return 0;
        }
        uVar4 = FUN_1800081c0(abStack_815 + uVar6 + 1,(int *)&local_880);
        if ((uVar4 != 0) && (abStack_815[(ulonglong)uVar4 + (uVar6 & 0xffffffff) + 1] == 0)) {
          iVar12 = 1;
          for (uVar4 = local_880; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
            iVar12 = iVar12 + 1;
          }
          iVar5 = 0;
          if (uVar4 == 1) {
            iVar5 = iVar12;
          }
          if (iVar5 == 0) {
            return 0;
          }
          param_2[3] = puVar7[iVar5 - 1];
          uVar6 = FUN_180008008(param_1,acStack_820,acStack_420,local_878,local_878 + 1,&local_87c);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = FUN_180008188(acStack_820,"aspect ratio: ",0xe), (uVar6 & 1) != 0)) {
            ppuVar9 = &PTR_DAT_1800617b0;
            uVar6 = 0;
            do {
              uVar4 = (uint)uVar6;
              uVar8 = FUN_180008188((char *)(abStack_815 + 3),ppuVar9[uVar6],-1);
              if ((uVar8 & 1) != 0) {
                param_2[4] = (&DAT_180061848)[uVar6 & 0xffffffff];
                if (6 < uVar4) {
                  return 0;
                }
                uVar10 = param_2[4];
                uVar3 = *(uint *)(&DAT_180063bd0 + (longlong)(int)param_2[3] * 4);
                uVar4 = uVar3 >> (ulonglong)((byte)(&DAT_180063bc4)[(int)uVar10] & 0x1f);
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                uVar2 = uVar3;
                if (uVar10 - 4 < 3) {
                  uVar2 = uVar4;
                  uVar4 = uVar3;
                }
                *param_2 = (uVar4 | uVar2 << 0x10) >> 0x10;
                param_2[1] = uVar4 & 0xffff;
                uVar6 = FUN_180018a70(3,(ulonglong)param_2[2],param_2[3],uVar10,
                                      (ulonglong)param_2[5]);
                uVar4 = local_878[0];
                iVar12 = local_87c;
                local_880 = 0;
                param_2[0x108] = (int)uVar6 + 7U & 0xfffffff8;
                if ((extraout_w15 - 1 & 0xfffffff7) == 0) {
                  (**(code **)*param_1)(param_1,local_87c + local_878[0] + -0x400,0,0);
                  iVar5 = (**(code **)(*param_1 + 8))(param_1,0x50,local_870,&local_880);
                  if (local_880 != 0x50 || iVar5 != 0) {
                    return 0;
                  }
                  lVar11 = 0;
                  do {
                    *(char *)((longlong)param_2 + lVar11 + 0x18) = (char)(local_870[lVar11] >> 8);
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0x10);
                  uVar10 = 0;
                  do {
                    *(ushort *)((longlong)param_2 + (ulonglong)uVar10 * 2 + 0x28) =
                         local_870[uVar10 + 0x10] >> 8 | local_870[uVar10 + 0x10] << 8;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < 0x18);
                  local_87c = iVar12 + 0x50;
                }
                else if ((extraout_w15 < 0xf) &&
                        ((0x4020U >> (ulonglong)(extraout_w15 & 0x1f) & 1) != 0)) {
                  (**(code **)*param_1)(param_1,local_87c + local_878[0] + -0x400,0,0);
                  iVar5 = (**(code **)(*param_1 + 8))(param_1,0x400,param_2 + 6,&local_880);
                  if (local_880 != 0x400 || iVar5 != 0) {
                    return 0;
                  }
                  lVar11 = 0;
                  do {
                    lVar1 = lVar11 + 1;
                    param_2[lVar11 + 6] =
                         (uint)(CONCAT44((uint)*(byte *)((longlong)param_2 + lVar11 * 4 + 0x1a) |
                                         ((uint)*(byte *)((longlong)param_2 + lVar11 * 4 + 0x19) |
                                         (param_2[lVar11 + 6] & 0xffff) << 8) << 8,
                                         param_2[lVar11 + 6]) >> 0x18);
                    lVar11 = lVar1;
                  } while (lVar1 != 0x100);
                  local_87c = iVar12 + 0x400;
                }
                return local_87c + uVar4 + -0x400;
              }
              uVar6 = (ulonglong)(uVar4 + 1);
            } while (uVar4 + 1 < 7);
          }
        }
      }
    }
  }
  return 0;
}


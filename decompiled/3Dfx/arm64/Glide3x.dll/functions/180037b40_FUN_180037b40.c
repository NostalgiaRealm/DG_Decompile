/*
 * FUN_180037b40 at 180037b40
 * int __cdecl FUN_180037b40(longlong * param_1, uint * param_2)
 * Address ranges: 180037b40-180037fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180037b40(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong extraout_x11;
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
  uVar6 = FUN_180037938(param_1,acStack_820,acStack_420,local_878,local_878 + 1,&local_87c);
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_180037ab8(acStack_820,"3df v",5), (uVar6 & 1) != 0)) {
    uVar4 = FUN_180037af0(abStack_81b,(int *)&local_880);
    if ((uVar4 != 0) && (abStack_81b[uVar4] == 0x2e)) {
      uVar4 = FUN_180037af0(abStack_81b + (ulonglong)uVar4 + 1,(int *)&local_880);
      if (((uVar4 != 0) && (abStack_81b[(ulonglong)uVar4 + (extraout_x11 & 0xffffffff) + 1] == 0))
         && (uVar6 = FUN_180037938(param_1,acStack_820,acStack_420,local_878,local_878 + 1,
                                   &local_87c), (uVar6 & 1) != 0)) {
        ppuVar10 = &PTR_DAT_180067b40;
        local_880 = 0;
        uVar6 = 0;
        uVar9 = 0;
        while( true ) {
          uVar4 = (uint)uVar6;
          uVar6 = FUN_180037ab8(acStack_820,ppuVar10[uVar6],-1);
          if ((uVar6 & 1) != 0) break;
          local_880 = uVar4 + 1;
          uVar6 = (ulonglong)local_880;
          uVar9 = (ulonglong)local_880;
          if (0xc < local_880) {
            return 0;
          }
        }
        param_2[5] = (&DAT_180067ae8)[uVar9 & 0xffffffff];
        if (0xc < uVar4) {
          return 0;
        }
        uVar6 = FUN_180037938(param_1,acStack_820,acStack_420,local_878,local_878 + 1,&local_87c);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar6 = FUN_180037ab8(acStack_820,"lod range: ",0xb);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar4 = FUN_180037af0(abStack_815,(int *)&local_880);
        uVar6 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          return 0;
        }
        iVar13 = 1;
        for (uVar11 = local_880; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1) {
          iVar13 = iVar13 + 1;
        }
        iVar5 = 0;
        if (uVar11 == 1) {
          iVar5 = iVar13;
        }
        if (iVar5 == 0) {
          return 0;
        }
        puVar7 = &DAT_180066860;
        param_2[2] = (&DAT_180066860)[iVar5 - 1];
        if (abStack_815[uVar4] != 0x20) {
          return 0;
        }
        uVar4 = FUN_180037af0(abStack_815 + uVar6 + 1,(int *)&local_880);
        if ((uVar4 != 0) && (abStack_815[(ulonglong)uVar4 + (uVar6 & 0xffffffff) + 1] == 0)) {
          iVar13 = 1;
          for (uVar4 = local_880; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1) {
            iVar13 = iVar13 + 1;
          }
          iVar5 = 0;
          if (uVar4 == 1) {
            iVar5 = iVar13;
          }
          if (iVar5 == 0) {
            return 0;
          }
          param_2[3] = puVar7[iVar5 - 1];
          uVar6 = FUN_180037938(param_1,acStack_820,acStack_420,local_878,local_878 + 1,&local_87c);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = FUN_180037ab8(acStack_820,"aspect ratio: ",0xe), (uVar6 & 1) != 0)) {
            ppuVar10 = &PTR_DAT_180067ab0;
            uVar6 = 0;
            do {
              uVar4 = (uint)uVar6;
              uVar9 = FUN_180037ab8((char *)(abStack_815 + 3),ppuVar10[uVar6],-1);
              if ((uVar9 & 1) != 0) {
                param_2[4] = (&DAT_180067b20)[uVar6 & 0xffffffff];
                if (6 < uVar4) {
                  return 0;
                }
                uVar11 = param_2[4];
                uVar8 = param_2[5];
                uVar3 = *(uint *)(&DAT_1800668d8 + (longlong)(int)param_2[3] * 4);
                uVar4 = uVar3 >> (ulonglong)((byte)(&DAT_1800668d3)[(int)uVar11] & 0x1f);
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                uVar2 = uVar3;
                if ((int)uVar11 < 0) {
                  uVar2 = uVar4;
                  uVar4 = uVar3;
                }
                *param_2 = (uVar4 | uVar2 << 0x10) >> 0x10;
                param_2[1] = uVar4 & 0xffff;
                iVar5 = FUN_180008380(3,param_2[2],param_2[3],uVar11,uVar8);
                uVar4 = local_878[0];
                iVar13 = local_87c;
                local_880 = 0;
                param_2[0x108] = iVar5 + 7U & 0xfffffff8;
                if ((uVar8 - 1 & 0xfffffff7) == 0) {
                  (**(code **)*param_1)(param_1,local_87c + local_878[0] + -0x400,0,0);
                  iVar5 = (**(code **)(*param_1 + 8))(param_1,0x50,local_870,&local_880);
                  if (local_880 != 0x50 || iVar5 != 0) {
                    return 0;
                  }
                  lVar12 = 0;
                  do {
                    *(char *)((longlong)param_2 + lVar12 + 0x18) = (char)(local_870[lVar12] >> 8);
                    lVar12 = lVar12 + 1;
                  } while (lVar12 != 0x10);
                  uVar11 = 0;
                  do {
                    *(ushort *)((longlong)param_2 + (ulonglong)uVar11 * 2 + 0x28) =
                         local_870[uVar11 + 0x10] >> 8 | local_870[uVar11 + 0x10] << 8;
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < 0x18);
                  local_87c = iVar13 + 0x50;
                }
                else if ((uVar8 < 0xf) && ((0x4020U >> (ulonglong)(uVar8 & 0x1f) & 1) != 0)) {
                  (**(code **)*param_1)(param_1,local_87c + local_878[0] + -0x400,0,0);
                  iVar5 = (**(code **)(*param_1 + 8))(param_1,0x400,param_2 + 6,&local_880);
                  if (local_880 != 0x400 || iVar5 != 0) {
                    return 0;
                  }
                  lVar12 = 0;
                  do {
                    lVar1 = lVar12 + 1;
                    param_2[lVar12 + 6] =
                         (uint)(CONCAT44((uint)*(byte *)((longlong)param_2 + lVar12 * 4 + 0x1a) |
                                         ((uint)*(byte *)((longlong)param_2 + lVar12 * 4 + 0x19) |
                                         (param_2[lVar12 + 6] & 0xffff) << 8) << 8,
                                         param_2[lVar12 + 6]) >> 0x18);
                    lVar12 = lVar1;
                  } while (lVar1 != 0x100);
                  local_87c = iVar13 + 0x400;
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


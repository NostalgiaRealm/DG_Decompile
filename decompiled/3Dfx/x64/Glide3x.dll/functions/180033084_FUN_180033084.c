/*
 * FUN_180033084 at 180033084
 * int __fastcall FUN_180033084(longlong * param_1, uint * param_2)
 * Address ranges: 180033084-1800335e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180033084(longlong *param_1,uint *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int local_res18 [2];
  uint local_res20 [2];
  uint local_888;
  int local_884 [3];
  ushort local_878 [16];
  ushort auStack_858 [24];
  char local_828 [5];
  byte local_823 [6];
  byte local_81d [1013];
  char local_428 [1024];
  
  local_res20[0] = 0;
  local_888 = 0;
  local_res18[0] = 0;
  uVar2 = FUN_180032f50(param_1,local_828,local_428,local_res20,&local_888,local_res18);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  iVar9 = 5;
  pcVar3 = "3df v";
  pcVar6 = local_828;
  iVar14 = 1;
  do {
    if (*pcVar6 != *pcVar3) {
      return 0;
    }
    if (*pcVar6 == '\0') break;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar4 = 0;
  pbVar7 = local_823;
  if (local_823[0] < 0x30) {
    return 0;
  }
  do {
    if (0x39 < *pbVar7) break;
    pbVar7 = pbVar7 + 1;
    uVar4 = (ulonglong)((int)uVar4 + 1);
  } while (0x2f < *pbVar7);
  if ((int)uVar4 == 0) {
    return 0;
  }
  if (local_823[uVar4] != 0x2e) {
    return 0;
  }
  uVar5 = 0;
  pbVar7 = local_823 + uVar4 + 1;
  if (*pbVar7 < 0x30) {
    return 0;
  }
  do {
    if (0x39 < *pbVar7) break;
    pbVar7 = pbVar7 + 1;
    uVar5 = uVar5 + 1;
  } while (0x2f < *pbVar7);
  if (uVar5 == 0) {
    return 0;
  }
  if (local_823[uVar5 + uVar4 + 1] != 0) {
    return 0;
  }
  uVar2 = FUN_180032f50(param_1,local_828,local_428,local_res20,&local_888,local_res18);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  do {
    pcVar3 = (&PTR_DAT_180064bc0)[uVar4];
    pcVar6 = local_828;
    iVar9 = -1;
    while( true ) {
      if (*pcVar6 != *pcVar3) break;
      if ((*pcVar6 == '\0') || (iVar9 = iVar9 + -1, iVar9 == 0)) {
        param_2[5] = (&DAT_180064b68)[uVar4];
        if (0xc < (uint)uVar4) {
          return 0;
        }
        uVar2 = FUN_180032f50(param_1,local_828,local_428,local_res20,&local_888,local_res18);
        if ((char)uVar2 == '\0') {
          return 0;
        }
        iVar9 = 0xb;
        pcVar3 = "lod range: ";
        pcVar6 = local_828;
        goto LAB_18003326a;
      }
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar5 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar5;
    if (0xc < uVar5) {
      return 0;
    }
  } while( true );
  while( true ) {
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
    iVar9 = iVar9 + -1;
    if (iVar9 == 0) break;
LAB_18003326a:
    if (*pcVar6 != *pcVar3) {
      return 0;
    }
    if (*pcVar6 == '\0') break;
  }
  uVar4 = 0;
  pbVar7 = local_81d;
  uVar5 = 0;
  if (0x2f < local_81d[0]) {
    do {
      if (0x39 < *pbVar7) break;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar5 = (uint)bVar1 + (uVar5 * 5 + -0x18) * 2;
    } while (0x2f < *pbVar7);
    if ((int)uVar4 != 0) {
      uVar12 = uVar5 & 1;
      uVar10 = 1;
      while (uVar12 == 0) {
        uVar10 = uVar10 + 1;
        uVar12 = uVar5 & 2;
        uVar5 = uVar5 >> 1;
      }
      if (uVar5 != 1) {
        uVar10 = 0;
      }
      if ((uVar10 != 0) &&
         (bVar1 = local_81d[uVar4], param_2[2] = (&DAT_1800638f0)[uVar10 - 1], bVar1 == 0x20)) {
        uVar12 = 0;
        pbVar7 = local_81d + uVar4 + 1;
        uVar5 = 0;
        if (0x2f < *pbVar7) {
          do {
            if (0x39 < *pbVar7) break;
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            uVar12 = uVar12 + 1;
            uVar5 = (uint)bVar1 + (uVar5 * 5 + -0x18) * 2;
          } while (0x2f < *pbVar7);
          if ((uVar12 != 0) && (local_81d[uVar12 + uVar4 + 1] == 0)) {
            uVar12 = uVar5 & 1;
            while (uVar12 == 0) {
              iVar14 = iVar14 + 1;
              uVar12 = uVar5 & 2;
              uVar5 = uVar5 >> 1;
            }
            if (uVar5 != 1) {
              iVar14 = 0;
            }
            if (iVar14 != 0) {
              param_2[3] = (&DAT_1800638f0)[iVar14 - 1];
              uVar2 = FUN_180032f50(param_1,local_828,local_428,local_res20,&local_888,local_res18);
              if ((char)uVar2 != '\0') {
                iVar14 = 0xe;
                pcVar3 = "aspect ratio: ";
                pcVar6 = local_828;
                do {
                  if (*pcVar6 != *pcVar3) {
                    return 0;
                  }
                  if (*pcVar6 == '\0') break;
                  pcVar3 = pcVar3 + 1;
                  pcVar6 = pcVar6 + 1;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
                uVar4 = 0;
                do {
                  pbVar8 = (&PTR_DAT_180064b30)[uVar4];
                  pbVar7 = local_81d + 3;
                  iVar14 = -1;
                  while( true ) {
                    if (*pbVar7 != *pbVar8) break;
                    if ((*pbVar7 == 0) || (iVar14 = iVar14 + -1, iVar14 == 0)) {
                      uVar5 = (&DAT_180064ba0)[uVar4];
                      param_2[4] = uVar5;
                      if (6 < (uint)uVar4) {
                        return 0;
                      }
                      uVar12 = *(uint *)(&DAT_180063968 + (longlong)(int)param_2[3] * 4);
                      uVar10 = uVar12 >> ((&DAT_180063963)[(int)uVar5] & 0x1f);
                      if (uVar12 >> ((&DAT_180063963)[(int)uVar5] & 0x1f) == 0) {
                        uVar10 = 1;
                      }
                      uVar11 = uVar12;
                      if ((int)uVar5 < 0) {
                        uVar11 = uVar10;
                        uVar10 = uVar12;
                      }
                      uVar12 = param_2[5];
                      *param_2 = (uVar11 << 0x10 | uVar10) >> 0x10;
                      param_2[1] = uVar10 & 0xffff;
                      iVar9 = FUN_180005928(3,param_2[2],param_2[3],uVar5,uVar12);
                      uVar5 = local_res20[0];
                      iVar14 = local_res18[0];
                      local_884[0] = 0;
                      param_2[0x108] = iVar9 + 7U & 0xfffffff8;
                      if (uVar12 == 1) {
LAB_180033555:
                        (**(code **)*param_1)(param_1,local_res18[0] + -0x400 + local_res20[0],0,0);
                        iVar9 = (**(code **)(*param_1 + 8))(param_1,0x50,local_878,local_884);
                        if (iVar9 != 0) {
                          return 0;
                        }
                        if (local_884[0] != 0x50) {
                          return 0;
                        }
                        lVar13 = 0;
                        do {
                          *(char *)((longlong)param_2 + lVar13 + 0x18) =
                               (char)(local_878[lVar13] >> 8);
                          lVar13 = lVar13 + 1;
                        } while (lVar13 != 0x10);
                        uVar4 = 0;
                        do {
                          *(ushort *)((longlong)param_2 + uVar4 * 2 + 0x28) =
                               local_878[(int)uVar4 + 0x10] >> 8 | local_878[(int)uVar4 + 0x10] << 8
                          ;
                          uVar12 = (int)uVar4 + 1;
                          uVar4 = (ulonglong)uVar12;
                        } while (uVar12 < 0x18);
                        local_res18[0] = iVar14 + 0x50;
                      }
                      else {
                        if (uVar12 != 5) {
                          if (uVar12 == 9) goto LAB_180033555;
                          if (uVar12 != 0xe) goto LAB_1800335d7;
                        }
                        (**(code **)*param_1)(param_1,local_res18[0] + -0x400 + local_res20[0],0,0);
                        iVar9 = (**(code **)(*param_1 + 8))(param_1,0x400,param_2 + 6,local_884);
                        if (iVar9 != 0) {
                          return 0;
                        }
                        if (local_884[0] != 0x400) {
                          return 0;
                        }
                        lVar13 = 0;
                        do {
                          param_2[lVar13 + 6] =
                               ((param_2[lVar13 + 6] << 8 |
                                (uint)*(byte *)((longlong)param_2 + lVar13 * 4 + 0x19)) << 8 |
                               (uint)*(byte *)((longlong)param_2 + lVar13 * 4 + 0x1a)) << 8 |
                               param_2[lVar13 + 6] >> 0x18;
                          lVar13 = lVar13 + 1;
                        } while (lVar13 != 0x100);
                        local_res18[0] = iVar14 + 0x400;
                      }
LAB_1800335d7:
                      return (uVar5 - 0x400) + local_res18[0];
                    }
                    pbVar8 = pbVar8 + 1;
                    pbVar7 = pbVar7 + 1;
                  }
                  uVar5 = (uint)uVar4 + 1;
                  uVar4 = (ulonglong)uVar5;
                } while (uVar5 < 7);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


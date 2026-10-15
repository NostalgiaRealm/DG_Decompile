/*
 * FUN_180005e7c at 180005e7c
 * int __fastcall FUN_180005e7c(longlong * param_1, uint * param_2)
 * Address ranges: 180005e7c-1800063b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180005e7c(longlong *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
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
  uVar3 = FUN_180005d48(param_1,local_828,local_428,local_res20,&local_888,local_res18);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  iVar10 = 5;
  pcVar4 = "3df v";
  pcVar7 = local_828;
  iVar14 = 1;
  iVar11 = 1;
  do {
    if (*pcVar7 != *pcVar4) {
      return 0;
    }
    if (*pcVar7 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  uVar5 = 0;
  pbVar8 = local_823;
  if (local_823[0] < 0x30) {
    return 0;
  }
  do {
    if (0x39 < *pbVar8) break;
    pbVar8 = pbVar8 + 1;
    uVar5 = (ulonglong)((int)uVar5 + 1);
  } while (0x2f < *pbVar8);
  if ((int)uVar5 == 0) {
    return 0;
  }
  if (local_823[uVar5] != 0x2e) {
    return 0;
  }
  uVar6 = 0;
  pbVar8 = local_823 + uVar5 + 1;
  if (*pbVar8 < 0x30) {
    return 0;
  }
  do {
    if (0x39 < *pbVar8) break;
    pbVar8 = pbVar8 + 1;
    uVar6 = uVar6 + 1;
  } while (0x2f < *pbVar8);
  if (uVar6 == 0) {
    return 0;
  }
  if (local_823[uVar6 + uVar5 + 1] != 0) {
    return 0;
  }
  uVar3 = FUN_180005d48(param_1,local_828,local_428,local_res20,&local_888,local_res18);
  if ((char)uVar3 == '\0') {
    return 0;
  }
  uVar5 = 0;
  do {
    pcVar4 = (&PTR_DAT_180060910)[uVar5];
    pcVar7 = local_828;
    iVar10 = -1;
    while( true ) {
      if (*pcVar7 != *pcVar4) break;
      if ((*pcVar7 == '\0') || (iVar10 = iVar10 + -1, iVar10 == 0)) {
        param_2[5] = (&DAT_1800608b0)[uVar5];
        if (0xc < (uint)uVar5) {
          return 0;
        }
        uVar3 = FUN_180005d48(param_1,local_828,local_428,local_res20,&local_888,local_res18);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        iVar10 = 0xb;
        pcVar4 = "lod range: ";
        pcVar7 = local_828;
        goto LAB_180006062;
      }
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar6 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar6;
    if (0xc < uVar6) {
      return 0;
    }
  } while( true );
  while( true ) {
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) break;
LAB_180006062:
    if (*pcVar7 != *pcVar4) {
      return 0;
    }
    if (*pcVar7 == '\0') break;
  }
  uVar5 = 0;
  pbVar8 = local_81d;
  uVar6 = 0;
  if (0x2f < local_81d[0]) {
    do {
      if (0x39 < *pbVar8) break;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar6 = (uint)bVar1 + (uVar6 * 5 + -0x18) * 2;
    } while (0x2f < *pbVar8);
    if ((int)uVar5 != 0) {
      uVar12 = uVar6 & 1;
      while (uVar12 == 0) {
        iVar11 = iVar11 + 1;
        uVar12 = uVar6 & 2;
        uVar6 = uVar6 >> 1;
      }
      if (uVar6 != 1) {
        iVar11 = 0;
      }
      if ((iVar11 != 0) &&
         (bVar1 = local_81d[uVar5],
         param_2[2] = *(uint *)(&DAT_180060888 + (ulonglong)(iVar11 - 1) * 4), bVar1 == 0x20)) {
        uVar12 = 0;
        pbVar8 = local_81d + uVar5 + 1;
        uVar6 = 0;
        if (0x2f < *pbVar8) {
          do {
            if (0x39 < *pbVar8) break;
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar12 = uVar12 + 1;
            uVar6 = (uint)bVar1 + (uVar6 * 5 + -0x18) * 2;
          } while (0x2f < *pbVar8);
          if ((uVar12 != 0) && (local_81d[uVar12 + uVar5 + 1] == 0)) {
            uVar12 = uVar6 & 1;
            while (uVar12 == 0) {
              iVar14 = iVar14 + 1;
              uVar12 = uVar6 & 2;
              uVar6 = uVar6 >> 1;
            }
            if (uVar6 != 1) {
              iVar14 = 0;
            }
            if (iVar14 != 0) {
              param_2[3] = *(uint *)(&DAT_180060888 + (ulonglong)(iVar14 - 1) * 4);
              uVar3 = FUN_180005d48(param_1,local_828,local_428,local_res20,&local_888,local_res18);
              if ((char)uVar3 != '\0') {
                iVar11 = 0xe;
                pcVar4 = "aspect ratio: ";
                pcVar7 = local_828;
                do {
                  if (*pcVar7 != *pcVar4) {
                    return 0;
                  }
                  if (*pcVar7 == '\0') break;
                  pcVar4 = pcVar4 + 1;
                  pcVar7 = pcVar7 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                uVar5 = 0;
                do {
                  pbVar9 = (&PTR_DAT_180060850)[uVar5];
                  pbVar8 = local_81d + 3;
                  iVar11 = -1;
                  while( true ) {
                    if (*pbVar8 != *pbVar9) break;
                    if ((*pbVar8 == 0) || (iVar11 = iVar11 + -1, iVar11 == 0)) {
                      uVar6 = (&DAT_1800608e8)[uVar5];
                      param_2[4] = uVar6;
                      if (6 < (uint)uVar5) {
                        return 0;
                      }
                      uVar2 = FUN_180017888(param_2[3],uVar6);
                      uVar12 = param_2[5];
                      *param_2 = uVar2 >> 0x10;
                      param_2[1] = uVar2 & 0xffff;
                      iVar14 = FUN_1800178d8(3,param_2[2],param_2[3],uVar6,uVar12);
                      uVar6 = local_res20[0];
                      iVar11 = local_res18[0];
                      local_884[0] = 0;
                      param_2[0x108] = iVar14 + 7U & 0xfffffff8;
                      if (uVar12 == 1) {
LAB_18000632a:
                        (**(code **)*param_1)(param_1,local_res18[0] + -0x400 + local_res20[0],0,0);
                        iVar14 = (**(code **)(*param_1 + 8))(param_1,0x50,local_878,local_884);
                        if (iVar14 != 0) {
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
                        uVar5 = 0;
                        do {
                          *(ushort *)((longlong)param_2 + uVar5 * 2 + 0x28) =
                               local_878[(int)uVar5 + 0x10] >> 8 | local_878[(int)uVar5 + 0x10] << 8
                          ;
                          uVar12 = (int)uVar5 + 1;
                          uVar5 = (ulonglong)uVar12;
                        } while (uVar12 < 0x18);
                        local_res18[0] = iVar11 + 0x50;
                      }
                      else {
                        if (uVar12 != 5) {
                          if (uVar12 == 9) goto LAB_18000632a;
                          if (uVar12 != 0xe) goto LAB_1800063ac;
                        }
                        (**(code **)*param_1)(param_1,local_res18[0] + -0x400 + local_res20[0],0,0);
                        iVar14 = (**(code **)(*param_1 + 8))(param_1,0x400,param_2 + 6,local_884);
                        if (iVar14 != 0) {
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
                        local_res18[0] = iVar11 + 0x400;
                      }
LAB_1800063ac:
                      return (uVar6 - 0x400) + local_res18[0];
                    }
                    pbVar9 = pbVar9 + 1;
                    pbVar8 = pbVar8 + 1;
                  }
                  uVar6 = (uint)uVar5 + 1;
                  uVar5 = (ulonglong)uVar6;
                } while (uVar6 < 7);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


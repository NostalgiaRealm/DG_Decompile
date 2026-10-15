/*
 * FUN_100480d0 at 100480d0
 * undefined FUN_100480d0(void)
 * Address ranges: 100480d0-10048543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

byte FUN_100480d0(int param_1,int *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = 1;
  piVar1 = (int *)(param_4 + 0x10);
  piVar2 = (int *)(param_4 + 0x14);
  if (*piVar1 == 0) {
    local_50 = 0;
    uStack_48 = CONCAT44(*(undefined4 *)(param_1 + 0x158),*(int *)(param_1 + 0x15c));
    iVar10 = (*(code *)PTR_FUN_100ba1d8)(&local_50,param_2);
    FUN_10008e00(*(int *)(param_1 + 4));
    iVar10 = FUN_1004e270(param_1,2,iVar10 == 1,piVar1,piVar2,0);
    local_60 = (byte)~(byte)((uint)iVar10 >> 0x18) >> 7;
    if (iVar10 < 0) {
      return local_60;
    }
  }
  iVar10 = param_2[1];
  piVar3 = param_2 + 3;
  iVar6 = *piVar3;
  pbVar4 = (byte *)(*(int *)(param_1 + 4) + 0x1e);
  bVar7 = *pbVar4;
  uVar13 = *piVar1 + *piVar2 * iVar10 + (uint)bVar7 * *param_2;
  iVar9 = param_2[2] - *param_2;
  uVar11 = (uint)bVar7;
  if (bVar7 == 1) {
    uVar12 = param_3 & 0xff;
    param_3 = uVar12 | (uVar12 | (uVar12 | param_3 << 8) << 8) << 8;
  }
  else if (uVar11 == 2) {
    param_3 = param_3 & 0xffff | param_3 << 0x10;
  }
  if ((iVar9 == *(int *)(param_1 + 0x15c)) && (uVar11 * iVar9 == *piVar2)) {
    uVar11 = (iVar6 - iVar10) * uVar11 * iVar9;
    if (0xf < uVar11) {
      bVar7 = *(byte *)((uVar13 & 3) + 0x100b3cf8);
      FUN_100a9eb0(uVar13,param_3,bVar7);
      uVar11 = uVar11 + (uint)bVar7 * -4;
      iVar10 = uVar13 + (uint)bVar7 * 4;
      uVar13 = 0;
      uVar12 = uVar11 >> 4;
      if (uVar12 != 0) {
        do {
          puVar5 = (undefined8 *)(iVar10 + uVar13 * 0x10);
          uVar13 = uVar13 + 1;
          puVar5[1] = CONCAT44(param_3,param_3);
          *puVar5 = CONCAT44(param_3,param_3);
        } while (uVar13 < uVar12);
      }
      uVar13 = iVar10 + uVar12 * 0x10;
      uVar11 = uVar11 + uVar12 * -0x10;
    }
    FUN_100a9eb0(uVar13,param_3,uVar11 >> 2);
    FUN_100a9e00((uVar11 & 0xfffffffc) + uVar13,param_3 & 0xff,uVar11 & 3);
  }
  else if (uVar11 != 0 && bVar7 < 4 || uVar11 == 4) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar7) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      if (iVar10 < iVar6) {
        local_50 = CONCAT44(param_3,param_3);
        uStack_48 = CONCAT44(param_3,param_3);
        do {
          uVar11 = (uint)*pbVar4 * iVar9;
          uVar12 = uVar13;
          if (0xf < uVar11) {
            bVar7 = *(byte *)((uVar13 & 0xf) + 0x100b3d08);
            FUN_100a9e00(uVar13,param_3 & 0xff,bVar7);
            uVar11 = uVar11 - bVar7;
            uVar8 = uVar11 >> 4;
            iVar6 = bVar7 + uVar13;
            uVar12 = 0;
            if (uVar8 != 0) {
              do {
                puVar5 = (undefined8 *)(iVar6 + uVar12 * 0x10);
                uVar12 = uVar12 + 1;
                puVar5[1] = uStack_48;
                *puVar5 = local_50;
              } while (uVar12 < uVar8);
            }
            uVar11 = uVar11 + uVar8 * -0x10;
            uVar12 = iVar6 + uVar8 * 0x10;
          }
          FUN_100a9e00(uVar12,param_3 & 0xff,uVar11);
          iVar10 = iVar10 + 1;
          uVar13 = *piVar2 + uVar13;
        } while (iVar10 < *piVar3);
      }
      break;
    default:
      if (iVar10 < iVar6) {
        do {
          uVar11 = (uint)*pbVar4 * iVar9;
          uVar12 = uVar13;
          if (0xf < uVar11) {
            bVar7 = *(byte *)((uVar13 & 7) + 0x100b3d00);
            FUN_100a9f60(uVar13,param_3 & 0xffff,bVar7);
            uVar11 = uVar11 + (uint)bVar7 * -2;
            iVar6 = uVar13 + (uint)bVar7 * 2;
            uVar8 = uVar11 >> 4;
            uVar12 = 0;
            if (uVar8 != 0) {
              do {
                puVar5 = (undefined8 *)(iVar6 + uVar12 * 0x10);
                uVar12 = uVar12 + 1;
                puVar5[1] = CONCAT44(param_3,param_3);
                *puVar5 = CONCAT44(param_3,param_3);
              } while (uVar12 < uVar8);
            }
            uVar11 = uVar11 + uVar8 * -0x10;
            uVar12 = iVar6 + uVar8 * 0x10;
          }
          FUN_100a9f60(uVar12,param_3 & 0xffff,uVar11 >> 1);
          iVar10 = iVar10 + 1;
          uVar13 = uVar13 + *piVar2;
        } while (iVar10 < *piVar3);
      }
      break;
    case 3:
      break;
    case 4:
      if (iVar10 < iVar6) {
        do {
          uVar11 = (uint)*pbVar4 * iVar9;
          uVar12 = uVar13;
          if (0xf < uVar11) {
            bVar7 = *(byte *)((uVar13 & 3) + 0x100b3cf8);
            FUN_100a9eb0(uVar13,param_3,bVar7);
            uVar11 = uVar11 + (uint)bVar7 * -4;
            iVar6 = uVar13 + (uint)bVar7 * 4;
            uVar12 = 0;
            uVar8 = uVar11 >> 4;
            if (uVar8 != 0) {
              do {
                puVar5 = (undefined8 *)(iVar6 + uVar12 * 0x10);
                uVar12 = uVar12 + 1;
                puVar5[1] = CONCAT44(param_3,param_3);
                *puVar5 = CONCAT44(param_3,param_3);
              } while (uVar12 < uVar8);
            }
            uVar11 = uVar11 + uVar8 * -0x10;
            uVar12 = iVar6 + uVar8 * 0x10;
          }
          FUN_100a9eb0(uVar12,param_3,uVar11 >> 2);
          FUN_100a9e00((uVar11 & 0xfffffffc) + uVar12,(char)param_3,uVar11 & 3);
          iVar10 = iVar10 + 1;
          uVar13 = *piVar2 + uVar13;
        } while (iVar10 < *piVar3);
      }
    }
  }
  return local_60;
}


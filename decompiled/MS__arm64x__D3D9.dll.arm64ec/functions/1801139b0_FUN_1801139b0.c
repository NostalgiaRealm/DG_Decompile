/*
 * FUN_1801139b0 at 1801139b0
 * undefined FUN_1801139b0(void)
 * Address ranges: 1801139b0-180113d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801139b0(uint *param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint local_30 [4];
  
  bVar1 = *param_3 & 0x7f;
  if (bVar1 == 0x19) {
    FUN_180113dc0(param_1,param_2,0);
    FUN_1801060c0(param_2,0xe80100010000,0xffffffff,0xffffffff,0,0);
    lVar4 = FUN_180112290(param_1,*(undefined2 *)(param_3 + 0x10));
    puVar5 = (uint *)(lVar4 + 8);
    local_30[0] = (int)param_2[1] - (int)*param_2 | (uint)((char)param_1[0x86] != '\0') << 0x1f;
LAB_180113d80:
    FUN_180108518(puVar5,local_30);
    return;
  }
  if (bVar1 == 0x1a) {
    if (param_3[3] != 0) {
      FUN_180112e78();
      return;
    }
    FUN_180112d60(param_1,param_2,param_3);
    return;
  }
  if (bVar1 == 0x1b) {
    uVar6 = 1;
LAB_180113c74:
    FUN_180112600(param_1,param_2,param_3,uVar6);
  }
  else {
    if (bVar1 == 0x1c) {
      if ((char)param_1[0x86] == '\0') {
        return;
      }
      FUN_180113dc0(param_1,param_2,0);
      FUN_1801060c0(param_2,0xc30100000000,0xffffffff,0xffffffff,0,0);
      return;
    }
    if (bVar1 == 0x1d) {
      uVar6 = 1;
    }
    else {
      if (bVar1 == 0x1e) {
        param_1[0x28] = param_1[0x28] | param_1[0x26];
        param_1[0x29] = param_1[0x29] | param_1[0x27];
        uVar6 = FUN_180113ec8(param_1);
        piVar3 = (int *)FUN_180112290(uVar6,*(undefined2 *)(param_3 + 0x10));
        *piVar3 = (int)param_2[1] - (int)*param_2;
        return;
      }
      if (bVar1 == 0x26) {
        uVar6 = 0;
        goto LAB_180113c74;
      }
      if (bVar1 != 0x27) {
        if (bVar1 == 0x28) {
          if (param_3[3] == 0) {
            uVar7 = *param_1;
            uVar2 = *(ushort *)(param_3 + 0x10);
            FUN_180113dc0(param_1,param_2,0);
            FUN_1801060c0(param_2,0x8810200012010,uVar7 | 0x80000000,0xffffffff,
                          (ulonglong)uVar2 << 4,0);
            FUN_1801060c0(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
          }
          else {
            FUN_180112c30(param_1,param_2,param_3,1);
          }
          uVar7 = (int)param_2[1] - (int)*param_2;
        }
        else {
          if (bVar1 != 0x29) {
            if (bVar1 == 0x2a) {
              FUN_180113dc0(param_1,param_2,0);
              FUN_1801060c0(param_2,0xe90100012000,0xffffffff,0xffffffff,0,0x12345678);
              param_1[(ulonglong)(param_1[0x85] - 1) * 2 + 0x55] = (int)param_2[1] - (int)*param_2;
              uVar7 = param_1[(ulonglong)(param_1[0x85] - 1) * 2 + 0x54];
              if (uVar7 == 0) {
                return;
              }
              *(uint *)(*param_2 + (ulonglong)(uVar7 - 4)) =
                   ((int)param_2[1] - uVar7) - (int)*param_2;
              param_1[(ulonglong)(param_1[0x85] - 1) * 2 + 0x54] = 0;
              return;
            }
            if (bVar1 == 0x2b) {
              FUN_180113dc0(param_1,param_2,0);
              uVar7 = param_1[0x85];
              param_1[0x85] = uVar7 - 1;
              uVar7 = param_1[(ulonglong)(uVar7 - 1) * 2 + 0x54];
              if (uVar7 != 0) {
                *(uint *)(*param_2 + (ulonglong)(uVar7 - 4)) =
                     ((int)param_2[1] - uVar7) - (int)*param_2;
              }
              uVar7 = param_1[(ulonglong)param_1[0x85] * 2 + 0x55];
              if (uVar7 == 0) {
                return;
              }
              *(uint *)(*param_2 + (ulonglong)(uVar7 - 4)) =
                   ((int)param_2[1] - uVar7) - (int)*param_2;
              return;
            }
            if (bVar1 == 0x2c) {
              FUN_180113dc0(param_1,param_2,0);
              FUN_1801060c0(param_2,0xe90100012000,0xffffffff,0xffffffff,0,0x12345678);
            }
            else if (bVar1 == 0x2d) {
              FUN_180112aa0(param_1,param_2,param_3,0);
            }
            else {
              if (bVar1 != 0x60) {
                return;
              }
              FUN_180112c30();
            }
            local_30[0] = (int)param_2[1] - (int)*param_2;
            puVar5 = param_1 + (ulonglong)(param_1[0x84] - 1) * 8 + 0x38;
            goto LAB_180113d80;
          }
          FUN_180112aa0(param_1,param_2,param_3,1);
          uVar7 = (int)param_2[1] - (int)*param_2;
        }
        param_1[(ulonglong)param_1[0x85] * 2 + 0x54] = uVar7;
        param_1[(ulonglong)param_1[0x85] * 2 + 0x55] = 0;
        param_1[0x85] = param_1[0x85] + 1;
        return;
      }
      uVar6 = 0;
    }
    FUN_180112818(param_1,param_2,param_3,uVar6);
  }
  return;
}


/*
 * FUN_100e3040 at 100e3040
 * undefined FUN_100e3040(void)
 * Address ranges: 100e3040-100e339f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100e3040(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *extraout_w1;
  int iVar6;
  undefined4 *extraout_w11;
  undefined4 *extraout_w12;
  uint uVar7;
  undefined4 local_5c;
  uint local_58 [3];
  uint local_4c [3];
  
  local_5c = param_3;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      FUN_100071d0(0);
    }
  }
  local_58[0] = 0;
  local_58[1] = 0x2a;
  iVar1 = param_1 + -0x66b4;
  iVar4 = FUN_100087a0(iVar1,param_2,&local_5c,param_4,param_5,param_6,param_7,local_58,local_58 + 1
                      );
  if (iVar4 == 0x876086f) {
    local_5c = 1;
  }
  else if (iVar4 < 0) goto LAB_100e3354;
  if (param_8 == 0) {
    local_58[2] = *(undefined4 *)(param_1 + -0x58cc);
    iVar4 = -0x7ff8fff2;
    local_4c[0] = FUN_101321c0(0x270);
    if (local_4c[0] != 0) {
      *(undefined8 *)(local_4c[0] + 0x7c) = 0;
      *(uint *)(local_4c[0] + 0x84) = local_4c[0] + 0x78;
      iVar6 = local_4c[0] + 0x208;
      FUN_100020a8(local_4c[0],local_4c[0] + 0x88,iVar6,iVar1,param_2,param_2,local_5c,5,param_4);
      *extraout_w12 = &PTR_FUN_1015f89c;
      extraout_w12[0x1c] = &PTR_FUN_1015e6b0;
      *extraout_w11 = &PTR_FUN_1015f844;
      uVar7 = 0;
      extraout_w12[0x9a] = 2;
      extraout_w1[1] = 0;
      *extraout_w1 = 0;
      extraout_w1[3] = 0;
      extraout_w1[2] = 0;
      extraout_w1[5] = 0;
      extraout_w1[4] = 0;
      extraout_w1[7] = 0;
      extraout_w1[6] = 0;
      extraout_w1[9] = 0;
      extraout_w1[8] = 0;
      extraout_w1[0xb] = 0;
      extraout_w1[10] = 0;
      extraout_w1[0xd] = 0;
      extraout_w1[0xc] = 0;
      extraout_w1[0xf] = 0;
      extraout_w1[0xe] = 0;
      extraout_w1[0x11] = 0;
      extraout_w1[0x10] = 0;
      extraout_w1[0x13] = 0;
      extraout_w1[0x12] = 0;
      extraout_w1[0x15] = 0;
      extraout_w1[0x14] = 0;
      extraout_w1[0x17] = 0;
      extraout_w1[0x16] = 0;
      extraout_w1[0x19] = 0;
      extraout_w1[0x18] = 0;
      extraout_w1[0x1b] = 0;
      extraout_w1[0x1a] = 0;
      extraout_w1[0x1d] = 0;
      extraout_w1[0x1c] = 0;
      extraout_w1[0x1f] = 0;
      extraout_w1[0x1e] = 0;
      extraout_w1[0x21] = 0;
      extraout_w1[0x20] = 0;
      extraout_w1[0x23] = 0;
      extraout_w1[0x22] = 0;
      extraout_w1[0x25] = 0;
      extraout_w1[0x24] = 0;
      extraout_w1[0x27] = 0;
      extraout_w1[0x26] = 0;
      extraout_w1[0x29] = 0;
      extraout_w1[0x28] = 0;
      extraout_w1[0x2b] = 0;
      extraout_w1[0x2a] = 0;
      extraout_w1[0x2d] = 0;
      extraout_w1[0x2c] = 0;
      extraout_w1[0x2f] = 0;
      extraout_w1[0x2e] = 0;
      do {
        (*(code *)PTR_FUN_1016c26c)(iVar6 + uVar7 * 0x10,0,0,param_2,param_2);
        uVar3 = local_4c[0];
        uVar7 = uVar7 + 1;
      } while (uVar7 < 6);
      iVar6 = 0;
      if (*(int *)(local_4c[0] + 0x14) != 0) {
        iVar6 = *(int *)(local_4c[0] + 0x14) + -0x66b4;
      }
      uVar5 = FUN_100206a8(local_4c[0],iVar6);
      if ((uVar5 & 1) != 0) {
        local_4c[0] = uVar3;
        uVar5 = FUN_10024e68(param_1 + -0x58a8,local_4c);
        if ((uVar5 & 1) != 0) {
          iVar4 = FUN_100d2190(uVar3 + 0x78,0x1015e470,param_7);
          if (-1 < iVar4) {
            (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] =
                 (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] - (ulonglong)local_58[0];
            iVar6 = 0;
            if (uVar3 != 0) {
              iVar6 = uVar3 + 0x70;
            }
            FUN_10001a00(iVar1,iVar6);
            goto LAB_100e3354;
          }
          FUN_1000d180(iVar1,uVar3);
        }
        FUN_100216d0(uVar3);
        FUN_10020c10(uVar3);
      }
      FUN_100d1e20(uVar3);
      FUN_10132260(uVar3,0x270);
    }
  }
  else {
    iVar4 = -0x7789f794;
  }
LAB_100e3354:
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar4;
}


/*
 * FUN_100b9680 at 100b9680
 * undefined FUN_100b9680(void)
 * Address ranges: 100b9680-100b99a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100b9680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *extraout_w1;
  int iVar5;
  undefined4 *extraout_w11;
  undefined4 *extraout_w12;
  uint uVar6;
  uint local_60 [3];
  int local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48 [2];
  
  local_60[2] = param_3;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar3 == 0) {
      FUN_10006560(0);
    }
  }
  local_60[0] = 0;
  local_60[1] = 0x1c;
  local_54 = param_1 + -0x58e0;
  local_4c = local_54;
  iVar3 = FUN_100079f0(local_54,param_2,local_60 + 2,param_4,param_5,param_6,param_7,local_60,
                       local_60 + 1);
  if (-1 < iVar3) {
    local_50 = *(undefined4 *)(param_1 + -0x4dbc);
    iVar3 = -0x7ff8fff2;
    local_48[0] = FUN_100febf0(0x268);
    if (local_48[0] != 0) {
      *(undefined8 *)(local_48[0] + 0x7c) = 0;
      *(uint *)(local_48[0] + 0x84) = local_48[0] + 0x78;
      iVar5 = local_48[0] + 0x208;
      FUN_10002058(local_48[0],local_48[0] + 0x88,iVar5,local_4c,param_2,param_2,local_60[2],5,
                   param_4);
      *extraout_w12 = &PTR_FUN_1012a310;
      extraout_w12[0x1c] = &PTR_FUN_101292c0;
      *extraout_w11 = &PTR_FUN_1012a2c4;
      uVar6 = 0;
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
        (*(code *)PTR_FUN_1013426c)(iVar5 + uVar6 * 0x10,0,0,param_2,param_2);
        uVar2 = local_48[0];
        uVar6 = uVar6 + 1;
      } while (uVar6 < 6);
      iVar5 = 0;
      if (*(int *)(local_48[0] + 0x14) != 0) {
        iVar5 = *(int *)(local_48[0] + 0x14) + -0x58e0;
      }
      uVar4 = FUN_1001b198(local_48[0],iVar5);
      if ((uVar4 & 1) != 0) {
        local_48[0] = uVar2;
        uVar4 = FUN_10006490(param_1 + -0x4d98,local_48);
        if ((uVar4 & 1) != 0) {
          iVar3 = FUN_100b0d70(uVar2 + 0x78,&DAT_10129100,param_7);
          if (-1 < iVar3) {
            (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] =
                 (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] - (ulonglong)local_60[0];
            iVar5 = 0;
            if (uVar2 != 0) {
              iVar5 = uVar2 + 0x70;
            }
            FUN_100019b0(local_54,iVar5);
            goto LAB_100b9958;
          }
          FUN_1000c100(local_54,uVar2);
        }
        FUN_1001c080(uVar2);
        FUN_1001b690(uVar2);
      }
      FUN_100b0a00(uVar2);
      FUN_100fec90(uVar2,0x268);
    }
  }
LAB_100b9958:
  if (bVar1) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar3;
}


/*
 * FUN_100e2690 at 100e2690
 * undefined FUN_100e2690(void)
 * Address ranges: 100e2690-100e29cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100e2690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                int param_9)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *extraout_w1;
  ulonglong extraout_x11;
  undefined4 *extraout_w12;
  undefined4 *local_60;
  int local_5c;
  uint local_58 [3];
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  
  local_60 = param_4;
  local_58[2] = param_5;
  local_48 = param_8;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar4 == 0) {
      FUN_100071d0(0);
    }
  }
  local_58[1] = 0x2a;
  local_5c = param_1 + -0x66b4;
  local_58[0] = 0;
  iVar4 = FUN_100083f0(local_5c,param_2,param_3,&local_60,local_58[2],param_6,param_7,local_48,
                       local_58);
  if (iVar4 == 0x876086f) {
    puVar5 = (undefined4 *)0x1;
  }
  else {
    puVar5 = local_60;
    if (iVar4 < 0) goto LAB_100e2980;
  }
  local_4c = puVar5;
  if (param_9 == 0) {
    local_44 = *(undefined4 **)(param_1 + -0x58cc);
    iVar4 = -0x7ff8fff2;
    puVar5 = (undefined4 *)FUN_101321c0(0xe0);
    local_60 = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar5 + 0x1f) = 0;
      puVar5[0x21] = puVar5 + 0x1e;
      FUN_100020a8(puVar5,puVar5 + 0x22,puVar5 + 0x32,local_5c,param_2,param_3,local_4c,3,
                   local_58[2]);
      *puVar5 = &PTR_FUN_1015fcfc;
      puVar5[0x1c] = &PTR_FUN_1015e6b0;
      *extraout_w12 = &PTR_FUN_1015fca4;
      puVar5[0x36] = 2;
      extraout_w1[1] = 0;
      *extraout_w1 = 0;
      extraout_w1[3] = 0;
      extraout_w1[2] = 0;
      extraout_w1[5] = 0;
      extraout_w1[4] = 0;
      extraout_w1[7] = 0;
      extraout_w1[6] = 0;
      (*(code *)PTR_FUN_1016c26c)(extraout_x11 & 0xffffffff,0,0,param_2,param_3);
      iVar1 = 0;
      if (puVar5[5] != 0) {
        iVar1 = puVar5[5] + -0x66b4;
      }
      uVar6 = FUN_100206a8(puVar5,iVar1);
      if ((uVar6 & 1) != 0) {
        local_44 = puVar5;
        uVar6 = FUN_10024e68(param_1 + -0x58b4,&local_44);
        puVar5 = local_60;
        if ((uVar6 & 1) != 0) {
          iVar4 = FUN_100ea9a0(local_60 + 0x1e,0x1015e460,local_48);
          if (-1 < iVar4) {
            (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] =
                 (&DAT_10171578)[*(int *)(param_1 + -0x58c4) * 0x45] - (ulonglong)local_58[0];
            puVar2 = (undefined4 *)0x0;
            if (puVar5 != (undefined4 *)0x0) {
              puVar2 = puVar5 + 0x1c;
            }
            FUN_10001a00(local_5c,puVar2);
            goto LAB_100e2980;
          }
          FUN_1000d0a0(local_5c,puVar5);
        }
        FUN_100216d0(puVar5);
        FUN_10020c10(puVar5);
      }
      FUN_100ea820(puVar5);
      FUN_10132260(puVar5,0xe0);
    }
  }
  else {
    iVar4 = -0x7789f794;
  }
LAB_100e2980:
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar4;
}


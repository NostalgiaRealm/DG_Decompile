/*
 * FUN_100b8d60 at 100b8d60
 * undefined FUN_100b8d60(void)
 * Address ranges: 100b8d60-100b905b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b8d60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *extraout_w1;
  ulonglong extraout_x11;
  undefined4 *extraout_w12;
  uint local_58 [3];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  
  local_58[2] = param_5;
  local_4c = param_4;
  local_48 = param_8;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar4 == 0) {
      FUN_10006560(0);
    }
  }
  local_58[1] = 0x1c;
  iVar4 = param_1 + -0x58e0;
  local_58[0] = 0;
  iVar5 = FUN_10007680(iVar4,param_2,param_3,&local_4c,local_58[2],param_6,param_7,local_48,local_58
                      );
  if (-1 < iVar5) {
    local_44 = *(undefined4 **)(param_1 + -0x4dbc);
    iVar5 = -0x7ff8fff2;
    puVar6 = (undefined4 *)FUN_100febf0(0xd8);
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar6 + 0x1f) = 0;
      puVar6[0x21] = puVar6 + 0x1e;
      FUN_10002058(puVar6,puVar6 + 0x22,puVar6 + 0x32,iVar4,param_2,param_3,local_4c,3,local_58[2]);
      *puVar6 = &PTR_FUN_1012a630;
      puVar6[0x1c] = &PTR_FUN_101292c0;
      *extraout_w12 = &PTR_FUN_1012a5e4;
      extraout_w1[1] = 0;
      *extraout_w1 = 0;
      extraout_w1[3] = 0;
      extraout_w1[2] = 0;
      extraout_w1[5] = 0;
      extraout_w1[4] = 0;
      extraout_w1[7] = 0;
      extraout_w1[6] = 0;
      (*(code *)PTR_FUN_1013426c)(extraout_x11 & 0xffffffff,0,0,param_2,param_3);
      iVar1 = 0;
      if (puVar6[5] != 0) {
        iVar1 = puVar6[5] + -0x58e0;
      }
      uVar7 = FUN_1001b198(puVar6,iVar1);
      if ((uVar7 & 1) != 0) {
        local_44 = puVar6;
        uVar7 = FUN_10006490(param_1 + -0x4da4,&local_44);
        if ((uVar7 & 1) != 0) {
          iVar5 = FUN_100bffc0(puVar6 + 0x1e,&DAT_101290f0,local_48);
          if (-1 < iVar5) {
            (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] =
                 (&DAT_101389b8)[*(int *)(param_1 + -0x4db4) * 0x45] - (ulonglong)local_58[0];
            puVar2 = (undefined4 *)0x0;
            if (puVar6 != (undefined4 *)0x0) {
              puVar2 = puVar6 + 0x1c;
            }
            FUN_100019b0(iVar4,puVar2);
            goto LAB_100b9010;
          }
          FUN_1000c020(iVar4,puVar6);
        }
        FUN_1001c080(puVar6);
        FUN_1001b690(puVar6);
      }
      FUN_100bfe40(puVar6);
      FUN_100fec90(puVar6,0xd8);
    }
  }
LAB_100b9010:
  if (bVar3) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return iVar5;
}


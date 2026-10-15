/*
 * FUN_100af920 at 100af920
 * undefined FUN_100af920(void)
 * Address ranges: 100af920-100afb53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100af920(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined8 *param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_1dc;
  undefined1 auStack_1d8 [8];
  uint local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  undefined1 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined1 auStack_180 [252];
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  
  iVar1 = param_1 + -0x70;
  iVar2 = FUN_100062a0(iVar1,param_2,param_3,param_4,param_5,param_6,param_7,0x116);
  if (iVar2 < 0) {
    return iVar2;
  }
  local_188 = 0;
  local_1c0 = *(undefined4 *)(*(int *)(param_1 + -0x28) + param_2 * 4);
  iVar2 = FUN_10006320(iVar1,param_6,&local_1bc,param_4,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
  if (iVar2 == 0) {
    FUN_10006560(0);
  }
  FUN_10121020(auStack_1d8);
  uVar3 = FUN_10004650(iVar1,param_3);
  FUN_100ff660(auStack_180,uVar3,0x134);
  local_1d0 = param_5;
  local_1cc = FUN_100035c0(iVar1,param_3);
  local_1c8 = local_83;
  iVar2 = -0x7ff8fff2;
  local_1c7 = local_82;
  local_1c6 = local_81;
  local_1c5 = 1;
  local_1c4 = *(int *)(param_1 + -0x50) == 0x78;
  uVar4 = FUN_100aeab0(iVar1,param_2,param_3,param_4,local_1bc,uStack_1b8,local_84,&local_1d0);
  local_1dc = uVar4;
  if (uVar4 != 0) {
    iVar2 = FUN_100b15b0(uVar4,&local_1c0);
    if (-1 < iVar2) {
      iVar2 = FUN_100b1ef0(uVar4 + 0x58e0,&DAT_101290c0,param_7);
      if (-1 < iVar2) {
        uVar5 = FUN_1000ead0(param_1 + 0x10,&local_1dc);
        if ((uVar5 & 1) != 0) {
          param_6[1] = uStack_1b4;
          *param_6 = CONCAT44(uStack_1b8,local_1bc);
          param_6[3] = uStack_1a4;
          param_6[2] = uStack_1ac;
          param_6[5] = uStack_194;
          param_6[4] = uStack_19c;
          *(undefined4 *)(param_6 + 6) = uStack_18c;
          goto LAB_100afb08;
        }
        iVar2 = -0x7ff8fff2;
      }
      FUN_100b1870(uVar4);
    }
    FUN_100b11f0(uVar4);
    FUN_100fed20(*(undefined4 *)(uVar4 - 4));
  }
LAB_100afb08:
  FUN_10120f70(auStack_1d8);
  (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  if ((-1 < iVar2) && ((param_5 >> 1 & 1) == 0)) {
    FUN_101212d0();
  }
  return iVar2;
}


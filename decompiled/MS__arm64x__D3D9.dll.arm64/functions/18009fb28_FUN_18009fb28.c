/*
 * FUN_18009fb28 at 18009fb28
 * undefined FUN_18009fb28(void)
 * Address ranges: 18009fb28-18009fd5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009fb28(uint param_1,uint param_2,char param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  uint local_d0;
  char local_cc;
  uint local_cb;
  undefined2 local_c7;
  undefined1 local_c5;
  undefined4 local_c4;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar12 = (undefined1)(param_1 >> 10);
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_cb = CONCAT13(uVar12,CONCAT12(uVar12,CONCAT11((char)(param_1 >> 8),(char)(param_1 >> 7)))) &
             0x1010101;
  local_90 = (longlong)&local_68 + 7;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0x10;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_70 = 0x41040000110400;
  local_c7 = 0;
  local_c5 = 0;
  local_c4 = 0;
  local_c0 = (ulonglong)param_2;
  uStack_78 = 0x11080000210800;
  local_80 = 0x31080000410800;
  local_d0 = param_1;
  local_cc = param_3;
  if (param_3 == '\0') {
    bVar9 = func_0x0001801b79d0(param_1);
    uVar12 = 0xff;
    if ((bVar9 & 1) != 0) {
      uVar12 = 0;
    }
    bVar2 = bVar9 & 1;
    bVar1 = bVar2 + 1;
    bVar3 = bVar2;
    if ((bVar9 & 2) == 0) {
      bVar3 = 0xff;
      bVar1 = bVar2;
    }
    bVar2 = bVar1 + 1;
    bVar4 = bVar1;
    if ((bVar9 & 4) == 0) {
      bVar4 = 0xff;
      bVar2 = bVar1;
    }
    bVar1 = bVar2 + 1;
    bVar5 = bVar2;
    if ((bVar9 & 8) == 0) {
      bVar5 = 0xff;
      bVar1 = bVar2;
    }
    bVar2 = bVar1 + 1;
    bVar6 = bVar1;
    if ((bVar9 & 0x10) == 0) {
      bVar6 = 0xff;
      bVar2 = bVar1;
    }
    bVar8 = (bVar9 & 0x20) != 0;
    bVar1 = 0xff;
    if (bVar8) {
      bVar1 = bVar2;
    }
    if (bVar8) {
      bVar2 = bVar2 + 1;
    }
    if ((bVar9 & 0x80) == 0) {
      bVar2 = 0xff;
    }
    local_68 = CONCAT35(CONCAT12(local_68._7_1_,CONCAT11(bVar3,uVar12)),
                        CONCAT14(bVar2,CONCAT13(bVar1,CONCAT12(bVar6,CONCAT11(bVar5,bVar4)))));
  }
  else {
    local_68 = 0x6050403020100;
  }
  local_e0 = 0;
  local_100 = 0x43425844;
  local_f8 = 0;
  local_d8 = 0;
  local_f0 = 0x100000000;
  local_e8 = 0x300000000;
  FUN_1800f5a90(param_4,&local_100,0x2c);
  uVar13 = 0;
  *(int *)(*param_4 + 0x20) = (int)param_4[1] - (int)*param_4;
  local_f0 = 0x800;
  local_e8 = CONCAT71(local_e8._1_7_,1);
  local_100 = thunk_FUN_180102f80(0x800);
  local_f8 = local_100;
  uVar11 = FUN_18009f770(&local_100,&local_d0);
  lVar7 = local_100;
  if (((uVar11 & 1) != 0) && (uVar11 = FUN_18009b048(param_4,&local_d0), (uVar11 & 1) != 0)) {
    *(int *)(*param_4 + 0x24) = (int)param_4[1] - (int)*param_4;
    iVar10 = FUN_18009b188(param_4,&local_d0);
    if (iVar10 != 0) {
      *(int *)(*param_4 + 0x28) = (int)param_4[1] - (int)*param_4;
      FUN_1800f5a90(param_4,lVar7,local_f8 - lVar7);
      FUN_1800f5ba0(param_4);
      uVar13 = 1;
    }
  }
  thunk_FUN_180102fc0(lVar7);
  return uVar13;
}


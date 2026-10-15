/*
 * FUN_10018438 at 10018438
 * undefined FUN_10018438(void)
 * Address ranges: 10018438-100189df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018438(int param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  code *pcVar4;
  byte bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined8 extraout_x12;
  uint uVar11;
  undefined8 uVar12;
  undefined8 extraout_d16;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  int *local_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_60 [32];
  
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(*piVar1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(*piVar1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(*piVar1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(*piVar1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(*piVar1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined4 *)(*piVar1 + 0xae) = *(undefined4 *)(param_2 + 0xae);
  *(undefined4 *)(*piVar1 + 0xb2) = *(undefined4 *)(param_2 + 0xb2);
  *(undefined4 *)(*piVar1 + 0xb6) = *(undefined4 *)(param_2 + 0xb6);
  *(undefined4 *)(*piVar1 + 0xba) = *(undefined4 *)(param_2 + 0xba);
  *(undefined4 *)(*piVar1 + 0xc6) = *(undefined4 *)(param_2 + 0xc6);
  *(undefined4 *)(*piVar1 + 0xda) = *(undefined4 *)(param_2 + 0xda);
  *(undefined4 *)(*piVar1 + 0xde) = *(undefined4 *)(param_2 + 0xde);
  *(undefined1 *)(*piVar1 + 0x55) = *(undefined1 *)(param_2 + 0x55);
  *(undefined1 *)(*piVar1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)(*piVar1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_10017f28(param_1,auStack_60,param_2);
    uVar13 = puVar7[1];
    local_80 = *puVar7;
    local_70 = puVar7[2];
    uStack_78 = uVar13;
    uVar9 = FUN_100180e8(param_1,param_2,&local_80);
    uVar10 = extraout_x12;
    uVar12 = extraout_d16;
    if ((uVar9 & 1) == 0) {
      piVar2 = (int *)(*piVar1 + 0x3f);
      if (*piVar2 == *(int *)(param_2 + 0x3f)) {
        pcVar3 = (char *)(*piVar1 + 0x54);
        if (*pcVar3 == *(char *)(param_2 + 0x54)) goto LAB_1001869c;
        *pcVar3 = *(char *)(param_2 + 0x54);
      }
      else {
        *piVar2 = *(int *)(param_2 + 0x3f);
      }
      uVar8 = (*pcVar4)();
      uVar9 = (*extraout_w11_03)(uVar8);
      goto LAB_1001869c;
    }
  }
  else {
    uVar10 = param_3[2];
    uVar13 = param_3[1];
    uVar12 = *param_3;
    local_80 = uVar12;
    uStack_78 = uVar13;
    local_70 = uVar10;
  }
  *(int *)(param_1 + 0xa0) = (int)uVar12;
  *(int *)(param_1 + 0xa4) = (int)((ulonglong)uVar12 >> 0x20);
  *(int *)(param_1 + 0xa8) = (int)uVar13;
  *(int *)(param_1 + 0xac) = (int)((ulonglong)uVar13 >> 0x20);
  *(int *)(param_1 + 0xb4) = (int)uVar10;
  *(int *)(param_1 + 0xb8) = (int)((ulonglong)uVar10 >> 0x20);
  *(undefined4 *)(*piVar1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)(*piVar1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)(*piVar1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined4 *)(*piVar1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)(*piVar1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  *(undefined4 *)(*piVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(*piVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(*piVar1 + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
  uVar9 = FUN_100181b0(param_1);
LAB_1001869c:
  *(undefined1 *)(*piVar1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  (*pcVar4)(uVar9,param_1 + 0x1310);
  (*extraout_w11)(param_1);
  uVar11 = 0;
  *(undefined4 *)(*piVar1 + 0x4b) = *(undefined4 *)(param_2 + 0x4b);
  *(undefined1 *)(*piVar1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  local_98 = param_1 + 0x1f5;
  local_94 = param_1 + 500;
  uVar10 = extraout_x1;
  local_a0 = piVar1;
  local_90 = param_2;
  pcVar6 = pcVar4;
  do {
    (*pcVar4)(pcVar6,uVar10,*(undefined1 *)(local_94 + uVar11 * 0x9d),
              *(undefined1 *)(local_98 + uVar11 * 0x9d));
    auVar14 = (*extraout_w11_00)(param_1,uVar11);
    (*pcVar4)(auVar14._0_8_,auVar14._8_8_,*(undefined1 *)(param_1 + 0x24a + uVar11 * 0x9d));
    pcVar6 = (code *)(*extraout_w11_01)(param_1,uVar11);
    piVar1 = local_a0;
    uVar10 = 0;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  *(undefined1 *)(*local_a0 + 0x52) = *(undefined1 *)(local_90 + 0x52);
  *(undefined1 *)(*local_a0 + 0x53) = *(undefined1 *)(local_90 + 0x53);
  *(undefined4 *)(*local_a0 + 0x9e) = *(undefined4 *)(local_90 + 0x9e);
  *(undefined4 *)(*local_a0 + 0xca) = *(undefined4 *)(local_90 + 0xca);
  *(undefined4 *)(*local_a0 + 0xc2) = *(undefined4 *)(local_90 + 0xc2);
  *(undefined1 *)(*local_a0 + 0xe6) = *(undefined1 *)(local_90 + 0xe6);
  *(undefined4 *)(*local_a0 + 0xeb) = *(undefined4 *)(local_90 + 0xeb);
  *(undefined4 *)(*local_a0 + 0xe7) = *(undefined4 *)(local_90 + 0xe7);
  *(undefined4 *)(*local_a0 + 0xef) = *(undefined4 *)(local_90 + 0xef);
  *(undefined1 *)(*local_a0 + 0x20) = *(undefined1 *)(local_90 + 0x20);
  *(undefined4 *)(*local_a0 + 8) = *(undefined4 *)(local_90 + 8);
  local_a0 = *(int **)(param_1 + 0xa0);
  uStack_9c = *(undefined4 *)(param_1 + 0xa4);
  FUN_1001c350(*(undefined4 *)(param_1 + 0x365c),&local_a0);
  bVar5 = FUN_1001b580(*(undefined4 *)(param_1 + 0x365c));
  if (*(byte *)(*piVar1 + 0x20) != (bVar5 ^ 1)) {
    (*pcVar4)();
    (*extraout_w11_02)(param_1);
  }
  return;
}


/*
 * FUN_1002ef08 at 1002ef08
 * undefined FUN_1002ef08(void)
 * Address ranges: 1002ef08-1002f4af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ef08(int param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined8 extraout_x12;
  uint uVar12;
  undefined8 uVar13;
  undefined8 extraout_d16;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  int *local_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
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
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_3 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_1002e9f8(param_1,auStack_60,param_2);
    uVar14 = puVar8[1];
    local_80 = *puVar8;
    local_70 = puVar8[2];
    uStack_78 = uVar14;
    uVar10 = FUN_1002ebb8(param_1,param_2,&local_80);
    uVar11 = extraout_x12;
    uVar13 = extraout_d16;
    if ((uVar10 & 1) == 0) {
      piVar2 = (int *)(*piVar1 + 0x3f);
      if (*piVar2 == *(int *)(param_2 + 0x3f)) {
        pcVar3 = (char *)(*piVar1 + 0x54);
        if (*pcVar3 == *(char *)(param_2 + 0x54)) goto LAB_1002f16c;
        *pcVar3 = *(char *)(param_2 + 0x54);
      }
      else {
        *piVar2 = *(int *)(param_2 + 0x3f);
      }
      uVar9 = (*pcVar5)();
      uVar10 = (*extraout_w11_03)(uVar9);
      goto LAB_1002f16c;
    }
  }
  else {
    uVar11 = param_3[2];
    uVar14 = param_3[1];
    uVar13 = *param_3;
    local_80 = uVar13;
    uStack_78 = uVar14;
    local_70 = uVar11;
  }
  *(int *)(param_1 + 0xa0) = (int)uVar13;
  *(int *)(param_1 + 0xa4) = (int)((ulonglong)uVar13 >> 0x20);
  *(int *)(param_1 + 0xa8) = (int)uVar14;
  *(int *)(param_1 + 0xac) = (int)((ulonglong)uVar14 >> 0x20);
  *(int *)(param_1 + 0xb4) = (int)uVar11;
  *(int *)(param_1 + 0xb8) = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined4 *)(*piVar1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)(*piVar1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)(*piVar1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined4 *)(*piVar1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)(*piVar1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  *(undefined4 *)(*piVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(*piVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(*piVar1 + 0xc2) = *(undefined4 *)(param_2 + 0xc2);
  uVar10 = FUN_1002ec80(param_1);
LAB_1002f16c:
  *(undefined1 *)(*piVar1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  (*pcVar5)(uVar10,param_1 + 0x1158);
  (*extraout_w11)(param_1);
  uVar12 = 0;
  *(undefined4 *)(*piVar1 + 0x4b) = *(undefined4 *)(param_2 + 0x4b);
  local_98 = param_1 + 0x154;
  *(undefined1 *)(*piVar1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
  local_94 = param_1 + 0x153;
  local_90 = param_1 + 0x162;
  uVar11 = extraout_x1;
  local_a0 = piVar1;
  local_8c = param_2;
  pcVar7 = pcVar5;
  do {
    iVar4 = uVar12 * 0x41;
    (*pcVar5)(pcVar7,uVar11,*(undefined1 *)(iVar4 + local_94),*(undefined1 *)(iVar4 + local_98));
    auVar15 = (*extraout_w11_00)(param_1,uVar12);
    (*pcVar5)(auVar15._0_8_,auVar15._8_8_,*(undefined1 *)(iVar4 + param_1 + 0x161));
    pcVar7 = (code *)(*extraout_w11_01)(param_1,uVar12);
    piVar1 = local_a0;
    uVar11 = 0;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 3);
  *(undefined1 *)(*local_a0 + 0x52) = *(undefined1 *)(local_8c + 0x52);
  *(undefined1 *)(*local_a0 + 0x53) = *(undefined1 *)(local_8c + 0x53);
  *(undefined4 *)(*local_a0 + 0x9e) = *(undefined4 *)(local_8c + 0x9e);
  *(undefined4 *)(*local_a0 + 0xca) = *(undefined4 *)(local_8c + 0xca);
  *(undefined4 *)(*local_a0 + 0xc2) = *(undefined4 *)(local_8c + 0xc2);
  *(undefined1 *)(*local_a0 + 0xe6) = *(undefined1 *)(local_8c + 0xe6);
  *(undefined4 *)(*local_a0 + 0xeb) = *(undefined4 *)(local_8c + 0xeb);
  *(undefined4 *)(*local_a0 + 0xe7) = *(undefined4 *)(local_8c + 0xe7);
  *(undefined4 *)(*local_a0 + 0xef) = *(undefined4 *)(local_8c + 0xef);
  *(undefined1 *)(*local_a0 + 0x20) = *(undefined1 *)(local_8c + 0x20);
  *(undefined4 *)(*local_a0 + 8) = *(undefined4 *)(local_8c + 8);
  local_a0 = *(int **)(param_1 + 0xa0);
  uStack_9c = *(undefined4 *)(param_1 + 0xa4);
  FUN_1002b6a0(*(undefined4 *)(param_1 + 0x315c),&local_a0);
  bVar6 = FUN_1002a8d0(*(undefined4 *)(param_1 + 0x315c));
  if (*(byte *)(*piVar1 + 0x20) != (bVar6 ^ 1)) {
    (*pcVar5)();
    (*extraout_w11_02)(param_1);
  }
  return;
}


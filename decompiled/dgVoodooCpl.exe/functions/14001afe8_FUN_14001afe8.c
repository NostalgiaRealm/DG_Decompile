/*
 * FUN_14001afe8 at 14001afe8
 * undefined __fastcall FUN_14001afe8(longlong param_1, undefined8 * param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 14001afe8-14001b6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001afe8(longlong param_1,undefined8 *param_2,longlong *param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *local_res10 [3];
  CHAR local_178 [16];
  CHAR local_168 [32];
  char local_148 [264];
  
  local_res10[0] = param_2;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(param_2,(&PTR_DAT_14002a220)[*(int *)(param_1 + 0xf7)]);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_178,"0x%x",(ulonglong)*(uint *)(param_1 + 0xfb),param_4);
  pcVar7 = "";
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0xfb) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_178,"0x%x",(ulonglong)*(uint *)(param_1 + 0xff),param_4);
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0xff) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_178,"0x%x",(ulonglong)*(uint *)(param_1 + 0x103),param_4);
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0x103) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x107);
  FUN_140024290(local_178,"0x%x",uVar8,param_4);
  pcVar6 = local_178;
  if (*(int *)(param_1 + 0x107) == -1) {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1df) < 3) {
    pcVar6 = (&PTR_DAT_14002a198)[(int)*(uint *)(param_1 + 0x1df)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_148[0] = '\0';
  uVar9 = 0;
  local_res10[0] = puVar3;
  do {
    uVar5 = (ulonglong)uVar9;
    if ((*(int *)(param_1 + 0x10b + uVar5 * 0xc) == 0) ||
       (*(int *)(param_1 + 0x10f + uVar5 * 0xc) == 0)) break;
    if (uVar9 != 0) {
      FUN_140024cc4(local_148,", ");
    }
    uVar1 = *(uint *)(param_1 + 0x10b + uVar5 * 0xc);
    uVar8 = (ulonglong)uVar1;
    uVar2 = *(uint *)(param_1 + 0x10f + uVar5 * 0xc);
    param_4 = (ulonglong)uVar2;
    if (uVar1 == 0xffffffff) {
      if (uVar2 == 0xffffffff) {
        pcVar4 = "max@%d";
        pcVar6 = "max";
      }
      else if (uVar2 == 0x100) {
        pcVar4 = "max_4_3@%d";
        pcVar6 = "max_4_3";
      }
      else {
        if (uVar2 != 0x101) goto LAB_14001b261;
        pcVar4 = "max_16_9@%d";
        pcVar6 = "max_16_9";
      }
      uVar1 = *(uint *)(param_1 + 0x113 + uVar5 * 0xc);
      uVar8 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        pcVar6 = pcVar4;
      }
      FUN_140024290(local_168,pcVar6,uVar8,param_4);
    }
    else {
LAB_14001b261:
      pcVar6 = "%dx%d";
      if (*(int *)(param_1 + 0x113 + uVar5 * 0xc) != 0) {
        pcVar6 = "%dx%d@%d";
      }
      FUN_140024290(local_168,pcVar6,uVar8,param_4);
    }
    FUN_140024cc4(local_148,local_168);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_148);
  bVar10 = (*(byte *)(param_1 + 0x1e3) & 1) != 0;
  local_168[0] = '\0';
  local_res10[0] = puVar3;
  if (bVar10) {
    FUN_140024cc4(local_168,"8");
  }
  if ((*(byte *)(param_1 + 0x1e3) & 2) != 0) {
    if (bVar10) {
      FUN_140024cc4(local_168,", ");
    }
    FUN_140024cc4(local_168,"16");
    bVar10 = true;
  }
  if ((*(byte *)(param_1 + 0x1e3) & 4) != 0) {
    if (bVar10) {
      FUN_140024cc4(local_168,", ");
    }
    FUN_140024cc4(local_168,"32");
  }
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = local_168;
  if (*(int *)(param_1 + 0x1e3) == 7) {
    pcVar6 = "all";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1cb) < 3) {
    pcVar6 = (&PTR_s_high_quality_14002a1d0)[(int)*(uint *)(param_1 + 0x1cb)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1cf) < 4) {
    pcVar6 = (&PTR_s_disabled_14002a1b0)[(int)*(uint *)(param_1 + 0x1cf)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x1d3),uVar8,param_4);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1d7) < 3) {
    pcVar6 = (&PTR_s_appdriven_14002a208)[(int)*(uint *)(param_1 + 0x1d7)];
  }
  else {
    pcVar6 = "";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(uint *)(param_1 + 0x1db) < 4) {
    pcVar7 = (&PTR_DAT_14002a1e8)[(int)*(uint *)(param_1 + 0x1db)];
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar7);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x1e7),uVar8,param_4);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar7 = "false";
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f9) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1fa) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  puVar3 = (undefined8 *)FUN_140019e94(puVar3,*(uint *)(param_1 + 0x1eb),uVar8,param_4);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  FUN_140024290(local_168,"0x%x",(ulonglong)*(uint *)(param_1 + 0x1ef),param_4);
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,local_168);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 499) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 500) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f5) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f6) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  pcVar6 = "false";
  if (*(char *)(param_1 + 0x1f7) != '\0') {
    pcVar6 = "true";
  }
  puVar3 = (undefined8 *)FUN_140019e4c(puVar3,pcVar6);
  local_res10[0] = puVar3;
  FUN_14001b9ec(param_3,local_res10);
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    pcVar7 = "true";
  }
  FUN_140019e4c(puVar3,pcVar7);
  return;
}


/*
 * FUN_180024c3c at 180024c3c
 * undefined __fastcall FUN_180024c3c(longlong * param_1, longlong * param_2, undefined8 param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, byte param_9)
 * Address ranges: 180024c3c-180025176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180024c3c(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  uint param_5,uint param_6,uint param_7,uint param_8,byte param_9)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined6 extraout_var;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  byte bVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  undefined8 local_50;
  float local_48 [3];
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar9 = 0;
  bVar12 = (byte)param_4;
  bVar2 = (byte)param_3;
  FUN_18000f41c(param_1[0x28],'\0');
  bVar3 = true;
  *(undefined4 *)(param_1[0x28] + 0x2d38) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(float *)(param_1[0x28] + 0x2c90) = (float)*(uint *)(param_2 + 4);
  *(float *)(param_1[0x28] + 0x2c94) = (float)*(uint *)((longlong)param_2 + 0x24);
  *(undefined1 *)(param_1[0x28] + 0x32f0) = 1;
  uVar1 = *(undefined4 *)(param_1[0x28] + 0x2b7c);
  *(undefined4 *)(param_1[0x28] + 0x2b7c) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
  if (*(char *)((longlong)param_2 + 0x95) == '\0') {
    DAT_18006d744 = (-((char)param_2[9] != '\0') & 0xf9U) + 0xf;
    DAT_18006d764 = -((char)param_2[9] != '\0') & 0xf;
    if (((char)param_2[9] != '\0') &&
       (((int)param_2[2] == 5 || ((*(byte *)(param_1[0x28] + 0x29fc) & 0x80) != 0)))) {
      DAT_18006d744 = '\0';
    }
    FUN_18004f248(*(longlong *)(param_1[0x28] + 0x3330),(ulonglong)*(uint *)(param_1[0x28] + 0x3338)
                  ,(int *)&DAT_18006d720,param_4,-1);
    _DAT_18006d6b0 = 1;
    _DAT_18006d6b4 = 1;
    piVar11 = (int *)&DAT_18006d6e8;
    lVar8 = param_1[0x28];
    if ((char)param_2[9] != '\0') {
      piVar11 = (int *)&DAT_18006d6b0;
    }
    FUN_18004f2bc(*(longlong *)(lVar8 + 0x3330),(ulonglong)*(uint *)(lVar8 + 0x3338),piVar11,
                  *(int *)(lVar8 + 0x2b30));
    FUN_18004f434(*(longlong *)(param_1[0x28] + 0x3330),(ulonglong)*(uint *)(param_1[0x28] + 0x3338)
                  ,(uint *)&DAT_18006d688);
    _DAT_18006d6f4 = 0;
  }
  else {
    FUN_18000ec54(param_1[0x28],uVar9,param_3,param_4);
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_38 = 0;
  local_48[2] = (float)*(uint *)(param_2 + 5);
  local_34 = 0x3f800000;
  local_3c = (float)*(uint *)((longlong)param_2 + 0x2c);
  lVar8 = *(longlong *)(param_1[0x28] + 0x3330);
  FUN_18004f630(lVar8,(ulonglong)*(uint *)(param_1[0x28] + 0x3338),local_48);
  if ((((int)param_2[5] == (int)param_2[4]) &&
      (*(int *)((longlong)param_2 + 0x2c) == *(int *)((longlong)param_2 + 0x24))) ||
     (bVar4 = FUN_18001372c(lVar8,*(int *)(param_1[0x28] + 0x2d38),*(int *)(param_1[0x28] + 0x2d34))
     , !bVar4)) {
    bVar3 = false;
  }
  uVar5 = FUN_180013794(lVar8,(longlong)param_2,bVar2,bVar3,bVar12);
  if (*(char *)((longlong)param_2 + 0x97) != '\0') {
    lVar8 = param_1[0x28];
    local_58 = *(undefined8 *)(lVar8 + 0x7628 + (longlong)*(int *)((longlong)param_2 + 0x8c) * 8);
    local_50 = *(undefined8 *)(lVar8 + 0x7628 + (longlong)(int)param_2[0x12] * 8);
    FUN_18004f74c(*(longlong *)(lVar8 + 0x3330),(ulonglong)*(uint *)(lVar8 + 0x3338),0x1c,2,
                  (longlong)&local_58);
  }
  uVar6 = FUN_180014854(param_1,*(uint *)(param_1[0x28] + 0x29fc) & 0x7f);
  uVar7 = FUN_180014854(param_1,*(int *)(param_1[0x28] + 0x2a00));
  plVar10 = (longlong *)0x0;
  if (uVar6 != 0xffffffff) {
    plVar10 = param_1 + (longlong)(int)uVar6 * 0x30 + 0x29;
  }
  plVar13 = param_2;
  if ((char)param_2[9] != '\0') {
    plVar13 = plVar10;
  }
  plVar10 = (longlong *)0x0;
  if (uVar7 != 0xffffffff) {
    plVar10 = param_1 + (longlong)(int)uVar7 * 0x30 + 0x29;
  }
  if ((char)param_2[9] != '\0') {
    plVar10 = param_2;
  }
  if (plVar13 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = plVar13[0x1c];
  }
  if (plVar10 == (longlong *)0x0) {
    lVar14 = 0;
    lVar15 = 0;
  }
  else {
    lVar14 = plVar10[0x2d];
    lVar15 = plVar10[0x1c];
  }
  if (((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) &&
     (((int)plVar13[5] != (int)plVar10[5] ||
      (*(int *)((longlong)plVar13 + 0x2c) != *(int *)((longlong)plVar10 + 0x2c))))) {
    if ((char)param_2[9] == '\0') {
      lVar15 = 0;
      lVar14 = 0;
    }
    else {
      lVar8 = 0;
    }
  }
  uVar6 = *(uint *)((longlong)param_2 + 0x24);
  if (bVar3) {
    local_60 = -(0.49 / ((float)*(uint *)(param_2 + 5) / (float)*(uint *)(param_2 + 4)));
    local_5c = -(0.49 / ((float)*(uint *)((longlong)param_2 + 0x2c) / (float)uVar6));
  }
  else {
    local_5c = 0.005;
    local_60 = 0.005;
  }
  local_58 = CONCAT44((float)param_6,(float)param_5);
  local_50 = CONCAT44((float)param_8,(float)param_7);
  if ((int)param_2[0xe] == 1) {
    param_6 = uVar6 - param_6;
    param_8 = uVar6 - param_8;
  }
  local_68 = (float)param_5 + local_60;
  local_60 = (float)param_7 + local_60;
  local_64 = (float)param_6 + local_5c;
  local_5c = (float)param_8 + local_5c;
  FUN_180024710((longlong)param_1,(float *)&local_58,&local_68,
                param_1[(CONCAT62(extraout_var,uVar5) & 0xffffffff) + 0x179],
                *(undefined8 *)
                 ((longlong)param_2 + (ulonglong)(-(uint)(bVar12 != 0) & 0x30) + 0x120),
                *(undefined8 *)
                 ((longlong)param_2 + (ulonglong)(-(uint)(bVar12 != 0) & 0x30) + 0x128),lVar8,lVar15
                ,lVar14,param_9);
  FUN_18000f3a4(param_1[0x28]);
  *(undefined4 *)(param_1[0x28] + 0x2b7c) = uVar1;
  *(undefined1 *)(param_1[0x28] + 0x2c79) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c78) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7a) = 1;
  *(undefined1 *)(param_1[0x28] + 0x2c7b) = 1;
  return;
}


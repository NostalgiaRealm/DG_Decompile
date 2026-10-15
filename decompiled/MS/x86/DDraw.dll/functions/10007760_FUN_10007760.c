/*
 * FUN_10007760 at 10007760
 * undefined __thiscall FUN_10007760(void * this, undefined4 * param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 10007760-10007ade
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10007760(void *this,undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float fVar2;
  int local_f4 [5];
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_b0;
  uint local_ac;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [4];
  undefined4 local_34;
  undefined4 local_30;
  float local_2c [3];
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  if ((param_1[0x10] != 0) || (param_1[0x11] != 0)) {
    FUN_10046eaf(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),4,(int)&local_14,0);
  }
  if ((char)param_4 == '\0') {
    FUN_10060d45(local_f4,0,0x40);
    local_e0 = param_1[0x10];
    local_dc = param_1[0x11];
    FUN_10046ca7(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),extraout_ECX,0x10,
                 (int)local_f4);
  }
  local_14 = param_1[0xd];
  uStack_10 = param_1[0xe];
  FUN_10046eaf(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),4,(int)&local_14,
               param_1[0x13]);
  FUN_10046de0(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),extraout_ECX_00,
               *(int *)((int)this + 0xcfac),*(int *)((int)this + 0xcfa8),param_2);
  piVar1 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,1,(int)this + 0xd1e0);
  piVar1 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
  (**(code **)(*piVar1 + 0x1c))(piVar1,0,1,(int)this + 0xd1e0);
  param_2 = 0x10;
  param_4 = 0;
  FUN_10046d0e(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),extraout_ECX_01,
               extraout_ECX_01,(int *)((int)this + 0xd1dc),&param_2,&param_4);
  FUN_10046d90(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14));
  piVar1 = (int *)param_1[0xc];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[0x12];
  }
  (**(code **)(*piVar1 + 0x28))(piVar1,&local_b0);
  local_b0 = local_b0 >> ((byte)param_1[8] & 0x1f);
  local_ac = local_ac >> ((byte)param_1[8] & 0x1f);
  if (local_b0 == 0) {
    local_b0 = 1;
  }
  local_2c[0] = 0.0;
  local_2c[1] = 0.0;
  local_1c = 0;
  if (local_ac == 0) {
    local_ac = 1;
  }
  local_18 = 0x3f800000;
  local_2c[2] = (float)(int)local_b0;
  local_20 = (float)(int)local_ac;
  FUN_10046b75(*(void **)((int)this + 0xcf00),*(int *)((int)this + 0x14),local_2c);
  *(float *)((int)this + 0xce30) = (float)(int)local_b0;
  *(float *)((int)this + 0xce34) = (float)(int)local_ac;
  *(undefined4 *)((int)this + 0xce90) = param_1[10];
  *(undefined4 *)((int)this + 0xce94) = param_1[0xb];
  *(float *)((int)this + 0xcee0) =
       (float)((double)(int)param_1[10] + (double)(&DAT_10066fd0)[-((int)param_1[10] >> 0x1f)]);
  *(float *)((int)this + 0xcee4) =
       (float)((double)(int)param_1[0xb] + (double)(&DAT_10066fd0)[-((int)param_1[0xb] >> 0x1f)]);
  fVar2 = (float)param_1[6];
  if (fVar2 < (float)param_1[4] || fVar2 == (float)param_1[4]) {
    fVar2 = (float)param_1[4];
  }
  else {
    fVar2 = fVar2 - 0.495;
  }
  *(float *)((int)this + 0xce98) = fVar2;
  fVar2 = (float)param_1[7];
  if (fVar2 < (float)param_1[5] || fVar2 == (float)param_1[5]) {
    fVar2 = (float)param_1[5];
  }
  else {
    fVar2 = fVar2 - 0.495;
  }
  *(float *)((int)this + 0xce9c) = fVar2;
  piVar1 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
  (**(code **)(*piVar1 + 0xc0))
            (piVar1,*(undefined4 *)((int)this + 0xd1e0),0,0,(float *)((int)this + 0xce30),0xd0,0xd0)
  ;
  local_80 = param_1[1];
  local_78 = param_1[5];
  local_84 = *param_1;
  local_7c = param_1[4];
  local_74 = param_1[2];
  local_6c = param_1[6];
  local_44[0] = *(int *)((int)this + 0xcef0);
  local_60 = param_1[3];
  local_58 = param_1[7];
  if (local_44[0] == 0x100) {
    *(undefined4 *)((int)this + 0xcef0) = 0;
    local_44[0] = 0;
  }
  local_44[0] = local_44[0] * 0x40;
  local_44[3] = local_44[0] + 0x40;
  local_44[1] = 0;
  local_34 = 1;
  local_30 = 1;
  local_44[2] = 0;
  piVar1 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
  local_70 = local_80;
  local_68 = local_78;
  local_64 = local_84;
  local_5c = local_7c;
  local_54 = local_74;
  local_50 = local_60;
  local_4c = local_6c;
  local_48 = local_58;
  (**(code **)(*piVar1 + 0xc0))
            (piVar1,*(undefined4 *)((int)this + 0xd1dc),0,local_44,&local_84,0x40,0x40);
  piVar1 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
  (**(code **)(*piVar1 + 0x34))(piVar1,4,*(int *)((int)this + 0xcef0) << 2);
  *(int *)((int)this + 0xcef0) = *(int *)((int)this + 0xcef0) + 1;
  return;
}


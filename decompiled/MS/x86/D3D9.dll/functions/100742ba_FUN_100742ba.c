/*
 * FUN_100742ba at 100742ba
 * undefined __thiscall FUN_100742ba(void * this, undefined4 * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100742ba-10074639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100742ba(void *this,undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_ECX;
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
    FUN_100b53e5(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),4,(int)&local_14,0);
  }
  if ((char)param_4 == '\0') {
    FUN_100cfed0(local_f4,0,0x40);
    local_e0 = param_1[0x10];
    local_dc = param_1[0x11];
    FUN_100b5170(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),0,0x10,(int)local_f4);
  }
  local_14 = param_1[0xd];
  uStack_10 = param_1[0xe];
  FUN_100b53e5(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),4,(int)&local_14,
               param_1[0x13]);
  FUN_100b5313(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),5,
               *(int *)((int)this + 0x1cfac),*(int *)((int)this + 0x1cfa8),param_2,0);
  piVar1 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,1,(int)this + 0x1d1e0);
  piVar1 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
  (**(code **)(*piVar1 + 0x1c))(piVar1,0,1,(int)this + 0x1d1e0);
  param_2 = 0x10;
  param_4 = 0;
  FUN_100b51fa(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),extraout_ECX,1,
               (int)this + 0x1d1dc,(int)&param_2,(int)&param_4);
  FUN_100b52b7(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),0,0);
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
  FUN_100b4f64(*(void **)((int)this + 0x1cf00),*(int *)((int)this + 0x14),local_2c);
  *(float *)((int)this + 0x1ce30) = (float)(int)local_b0;
  *(float *)((int)this + 0x1ce34) = (float)(int)local_ac;
  *(undefined4 *)((int)this + 0x1ce90) = param_1[10];
  *(undefined4 *)((int)this + 0x1ce94) = param_1[0xb];
  *(float *)((int)this + 0x1cee0) =
       (float)((double)(int)param_1[10] + (double)(&DAT_100d97a0)[-((int)param_1[10] >> 0x1f)]);
  *(float *)((int)this + 0x1cee4) =
       (float)((double)(int)param_1[0xb] + (double)(&DAT_100d97a0)[-((int)param_1[0xb] >> 0x1f)]);
  fVar2 = (float)param_1[6];
  if (fVar2 < (float)param_1[4] || fVar2 == (float)param_1[4]) {
    fVar2 = (float)param_1[4];
  }
  else {
    fVar2 = fVar2 - 0.495;
  }
  *(float *)((int)this + 0x1ce98) = fVar2;
  fVar2 = (float)param_1[7];
  if (fVar2 < (float)param_1[5] || fVar2 == (float)param_1[5]) {
    fVar2 = (float)param_1[5];
  }
  else {
    fVar2 = fVar2 - 0.495;
  }
  *(float *)((int)this + 0x1ce9c) = fVar2;
  piVar1 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
  (**(code **)(*piVar1 + 0xc0))
            (piVar1,*(undefined4 *)((int)this + 0x1d1e0),0,0,(float *)((int)this + 0x1ce30),0xd0,
             0xd0);
  local_80 = param_1[1];
  local_78 = param_1[5];
  local_84 = *param_1;
  local_7c = param_1[4];
  local_74 = param_1[2];
  local_6c = param_1[6];
  local_44[0] = *(int *)((int)this + 0x1cef0);
  local_60 = param_1[3];
  local_58 = param_1[7];
  if (local_44[0] == 0x100) {
    *(undefined4 *)((int)this + 0x1cef0) = 0;
    local_44[0] = 0;
  }
  local_44[0] = local_44[0] * 0x40;
  local_44[3] = local_44[0] + 0x40;
  local_44[1] = 0;
  local_34 = 1;
  local_30 = 1;
  local_44[2] = 0;
  piVar1 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
  local_70 = local_80;
  local_68 = local_78;
  local_64 = local_84;
  local_5c = local_7c;
  local_54 = local_74;
  local_50 = local_60;
  local_4c = local_6c;
  local_48 = local_58;
  (**(code **)(*piVar1 + 0xc0))
            (piVar1,*(undefined4 *)((int)this + 0x1d1dc),0,local_44,&local_84,0x40,0x40);
  piVar1 = *(int **)(*(int *)((int)this + 0x1cf04) + 4);
  (**(code **)(*piVar1 + 0x34))(piVar1,4,*(int *)((int)this + 0x1cef0) << 2);
  *(int *)((int)this + 0x1cef0) = *(int *)((int)this + 0x1cef0) + 1;
  return;
}


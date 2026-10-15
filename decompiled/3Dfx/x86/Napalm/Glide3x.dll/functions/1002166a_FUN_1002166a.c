/*
 * FUN_1002166a at 1002166a
 * undefined __thiscall FUN_1002166a(void * this, int param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 1002166a-100219ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002166a(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float local_48 [3];
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_1000c9fc(*(void **)((int)this + 0x138),'\0');
  cVar1 = *(char *)(param_1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 0x138) + 0x2e64) =
       *(undefined4 *)((uint)(cVar1 != '\0') * 4 + 8 + param_1);
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    local_48[2] = local_48[2] + 4.2949673e+09;
  }
  local_3c = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    local_3c = local_3c + 4.2949673e+09;
  }
  local_38 = 0;
  local_34 = 0x3f800000;
  FUN_10047598(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),local_48);
  fVar4 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2dc0) = fVar4;
  fVar4 = (float)*(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  *(float *)(*(int *)((int)this + 0x138) + 0x2dc4) = fVar4;
  DAT_1005f7c4 = 0xf;
  DAT_1005f7e4 = 0xf;
  _DAT_1005f728 = 0;
  iVar2 = *(int *)((int)this + 0x138);
  FUN_10047449(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),(int *)&DAT_1005f7a0,iVar2,-1);
  iVar2 = *(int *)((int)this + 0x138);
  FUN_100474b8(*(void **)(iVar2 + 0x3680),*(int *)(iVar2 + 0x3684),(int *)&DAT_1005f768,
               *(int *)(iVar2 + 0x2c54));
  FUN_10047525(*(void **)(*(int *)((int)this + 0x138) + 0x3680),
               *(int *)(*(int *)((int)this + 0x138) + 0x3684),(uint *)&DAT_1005f70c);
  if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xb8)) {
    piVar3 = *(int **)(*(int *)(*(int *)((int)this + 0x138) + 0x3688) + 4);
    (**(code **)(*piVar3 + 0xe4))
              (piVar3,*(int *)(param_1 + 0xb8),0,*(int *)(param_1 + 0xac),0,
               *(undefined4 *)(param_1 + 4));
  }
  local_10 = (float)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    local_10 = local_10 + 4.2949673e+09;
  }
  fVar4 = (float)*(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  local_10 = local_10 / fVar4;
  iVar2 = *(int *)(param_1 + 0x24);
  fVar4 = (float)*(int *)(param_1 + 0x24);
  if (iVar2 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  local_c = (float)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    local_c = local_c + 4.2949673e+09;
  }
  local_c = local_c / fVar4;
  local_30 = (float)param_2;
  if (param_2 < 0) {
    local_30 = local_30 + 4.2949673e+09;
  }
  local_2c = (float)param_3;
  if (param_3 < 0) {
    local_2c = local_2c + 4.2949673e+09;
  }
  local_28 = (float)param_4;
  if (param_4 < 0) {
    local_28 = local_28 + 4.2949673e+09;
  }
  local_24 = (float)param_5;
  if (param_5 < 0) {
    local_24 = local_24 + 4.2949673e+09;
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    local_1c = (float)(iVar2 - param_3);
    if (iVar2 - param_3 < 0) {
      local_1c = local_1c + 4.2949673e+09;
    }
    param_5 = iVar2 - param_5;
  }
  else {
    local_1c = (float)param_3;
    if (param_3 < 0) {
      local_1c = local_1c + 4.2949673e+09;
    }
  }
  local_20 = local_30 * local_10;
  local_1c = local_1c * local_c;
  local_18 = local_28 * local_10;
  local_14 = (float)param_5;
  if (param_5 < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  local_14 = local_c * local_14;
  FUN_100213f3(this,&local_30,&local_20,
               *(int *)((uint)(*(char *)(param_1 + 0x48) != '\0') * 4 + 0x858 + (int)this),
               *(undefined4 *)(param_1 + 0xbc),0,
               *(undefined4 *)(((cVar1 != '\0') - 1 & 0xffffffe8) + 0xe4 + param_1),
               *(undefined4 *)(((cVar1 != '\0') - 1 & 0xffffffe8) + 0xe8 + param_1),0,0);
  FUN_1000c9a6(*(void **)((int)this + 0x138));
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da9) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2da8) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2daa) = 1;
  *(undefined1 *)(*(int *)((int)this + 0x138) + 0x2dab) = 1;
  return;
}


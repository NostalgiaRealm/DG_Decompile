/*
 * FUN_100867ea at 100867ea
 * undefined __thiscall FUN_100867ea(void * this, int param_1, int param_2)
 * Address ranges: 100867ea-10086b11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100867ea(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int local_c0;
  int local_bc;
  int local_b8;
  float local_b4 [3];
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  void *local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  local_c = *(int *)((int)this + 0x2c) * param_2 + param_1;
  local_8 = (undefined4 *)((int)this + 0xe0);
  if (*(int *)((int)this + 0x1c) == 0) {
    FUN_1007eed0((void *)*local_8,2,*(int *)((int)this + 8));
  }
  iVar4 = *(int *)((int)this + 0x1c);
  uVar5 = 0x16;
  if (iVar4 != 0) {
    if (*(char *)((int)this + 0x1bc) == '\0') {
      uVar5 = *(uint *)(&DAT_100d2730 + iVar4 * 4);
    }
    else {
      uVar5 = 6;
    }
    uVar5 = (*(uint *)(&DAT_100d2940 + iVar4 * 4) & 7 | 0xf8000020) << 4 | uVar5 & 0xf;
  }
  uVar2 = FUN_10087736(this,0);
  iVar4 = 1 << ((byte)param_1 & 0x1f);
  local_14 = (void *)*local_8;
  local_8 = *(undefined4 **)((int)this + 0x1c);
  local_24 = (float)((double)iVar4 + (double)(&DAT_100d97a0)[-(iVar4 >> 0x1f)]);
  local_18 = (float)((double)*(int *)((int)this + 0x14) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x14) >> 0x1f)]) / local_24;
  local_1c = (float)((double)*(int *)((int)this + 0x18) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x18) >> 0x1f)]) / local_24;
  local_20 = (float)((double)*(int *)((int)this + 0x130) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x130) >> 0x1f)]) / local_24;
  local_28 = *(undefined4 *)((int)this + 0x148);
  local_2c = *(undefined4 *)((int)this + 0x184);
  local_30 = *(undefined4 *)((int)this + 0x54);
  local_24 = (float)((double)*(int *)((int)this + 0x134) +
                    (double)(&DAT_100d97a0)[-(*(int *)((int)this + 0x134) >> 0x1f)]) / local_24;
  local_3c = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_b8,
                          *(uint *)((int)this + 0x158),local_c);
  local_40 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15dc),&local_bc,
                          *(uint *)((int)this + 0x194),local_c);
  piVar3 = FUN_100ba192(*(void **)(*(int *)((int)this + 0x44) + 0x15d8),&local_c0,uVar2,0);
  puVar1 = local_8;
  local_34 = *(undefined4 *)((int)this + 0x170);
  local_38 = *(undefined4 *)((int)this + 0x1ac);
  uVar2 = local_10 >> 8;
  local_10 = local_10 & 0xffffff00;
  if (uVar5 < 0x24) {
    if (((uVar5 == 4) || (uVar5 == 5)) || ((uVar5 == 6 || (uVar5 == 7)))) goto LAB_10086a10;
    if (uVar5 == 0x22) goto LAB_100869f2;
  }
  else if ((((uVar5 == 0x24) || (uVar5 == 0x25)) || (uVar5 == 0x26)) || (uVar5 == 0x27)) {
LAB_100869f2:
    local_10 = CONCAT31((int3)uVar2,1);
  }
  FUN_1008d81c(local_14,(int)local_8,0,0,0,0,'\0','\0',0);
LAB_10086a10:
  local_8c = local_c;
  local_80 = local_c;
  local_7c = local_28;
  local_78 = local_2c;
  local_b4[2] = local_18;
  local_6c = local_30;
  local_a8 = local_1c;
  local_54 = local_34;
  local_9c = local_20;
  local_50 = local_38;
  local_94 = param_1;
  local_88 = param_1;
  local_b4[0] = 0.0;
  local_b4[1] = 0.0;
  local_a4 = 0;
  local_a0 = 0;
  local_98 = local_24;
  local_90 = 0xffffffff;
  local_84 = param_2;
  local_68 = 0;
  local_5c = 0;
  local_4c = 0;
  if (local_3c == (int *)0x0) {
    local_74 = 0;
  }
  else {
    local_74 = *local_3c;
  }
  if (local_40 == (int *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = *local_40;
  }
  if (piVar3 == (int *)0x0) {
    local_64 = 0;
  }
  else {
    local_64 = *piVar3;
  }
  local_60 = 0;
  local_58 = 0;
  FUN_1007cf8b(local_14,local_b4,(int)puVar1,(uint)puVar1,uVar5,(char)local_10,(float *)0x0,0.0);
  return;
}


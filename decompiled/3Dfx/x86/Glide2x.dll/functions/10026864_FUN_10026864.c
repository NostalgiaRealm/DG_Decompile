/*
 * FUN_10026864 at 10026864
 * uint __thiscall FUN_10026864(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, undefined4 * param_7)
 * Address ranges: 10026864-100269a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10026864(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *this_00;
  undefined4 uStack_8;
  
  if (*(int *)(*(int *)((int)this + 0x3188) + 0x12e8) == 0) {
    uStack_8 = this;
    uVar2 = FUN_1001cf8c(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  uStack_8 = (void *)((uint)this & 0xffffff);
  FUN_10035d50(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10026945:
    puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar3 = this;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_4;
    puVar3[5] = param_5;
    puVar3[6] = param_6;
    puVar3[7] = param_7;
    puVar3[8] = (int)&uStack_8 + 3;
    FUN_100269a1(puVar3);
  }
  else {
    puVar3 = (undefined4 *)FUN_10035c70(this_00,0x24);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021b34(this_00);
      goto LAB_10026945;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 0x24;
    puVar3[2] = this;
    puVar3[3] = param_1;
    puVar3[4] = param_2;
    puVar3[5] = param_3;
    puVar3[6] = param_4;
    puVar3[7] = param_5;
    puVar3[8] = param_6;
    puVar3[9] = param_7;
    puVar3[10] = (int)&uStack_8 + 3;
    puVar5 = (undefined4 *)((int)puVar3 + 0x2fU & 0xfffffffc);
    *puVar5 = 0;
    *puVar3 = FUN_100269a1;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10026986;
    }
  }
  *this_00 = 0;
LAB_10026986:
  uVar4 = FUN_10036680(*(int *)((int)this + 0x3188) + 0x11c0);
  return CONCAT31((int3)((uint)uVar4 >> 8),uStack_8._3_1_);
}


/*
 * FUN_100922dd at 100922dd
 * uint __thiscall FUN_100922dd(void * this, int * param_1, int * param_2, float param_3, int param_4, float param_5, int param_6, int * param_7, undefined4 * param_8)
 * Address ranges: 100922dd-10092415
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100922dd(void *this,int *param_1,int *param_2,float param_3,int param_4,float param_5,
            int param_6,int *param_7,undefined4 *param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  iVar1 = param_1[2];
  local_8 = this;
  if (((param_2 != (int *)0x0) || (param_4 != 0)) &&
     (uVar3 = FUN_10091487(this,param_1,param_7,param_4,param_2,param_3,param_5,param_8),
     (char)uVar3 == '\0')) {
    piVar2 = *(int **)((int)this + iVar1 * 0x1510 + 0x514);
    if (param_4 == 0) {
      (**(code **)(*piVar2 + 0xbc))(piVar2,param_1[0x35a],param_2);
    }
    else {
      (**(code **)(*piVar2 + 0xe4))(piVar2,param_1[0x35a],0,param_4,0,param_5);
    }
    if (param_8 != (undefined4 *)0x0) {
      local_3c = (uint)param_1[4] / (uint)param_1[6];
      local_44 = param_1[0x35a];
      local_38 = (uint)param_1[5] / (uint)param_1[7];
      local_40 = param_1[0x35b];
      local_2c = &local_18;
      local_18 = 0;
      local_14 = 0;
      local_28 = 0x3f800000;
      uStack_24 = 0x3f800000;
      uStack_20 = 0;
      uStack_1c = 0;
      local_34 = local_3c;
      local_30 = local_38;
      local_10 = local_3c;
      local_c = local_38;
      (**(code **)*param_8)(&local_44);
    }
  }
  if (*(char *)((int)param_1 + 0xd5a) != '\0') {
    FUN_10091a3f(local_8,(int)param_1,(RECT *)(param_7 + 3));
  }
  if (((param_6 == 0) && ((char)param_1[0x357] != '\0')) &&
     ((param_1[0xd] != 2 || (*(char *)((int)param_1 + 0xd5d) == '\0')))) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0;
  }
  uVar4 = (**(code **)(*(int *)param_1[1] + 0x20))((int *)param_1[1],param_6,uVar3);
  return uVar4 >> 0x1f ^ 1;
}


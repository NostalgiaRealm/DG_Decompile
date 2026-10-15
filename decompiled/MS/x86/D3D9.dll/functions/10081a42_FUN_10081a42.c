/*
 * FUN_10081a42 at 10081a42
 * uint __thiscall FUN_10081a42(void * this, int * param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6, byte param_7)
 * Address ranges: 10081a42-10081bb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10081a42(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,byte param_7)

{
  bool bVar1;
  uint in_EAX;
  undefined3 extraout_var;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  char cStack0000001f;
  undefined1 local_f8 [28];
  ushort local_dc;
  ushort local_da;
  undefined1 local_c0 [28];
  ushort local_a4;
  ushort local_a2;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_70 [7];
  undefined4 local_54;
  undefined4 local_50;
  uint local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  uint local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  
  uVar5 = in_EAX & 0xffffff00;
  *(undefined1 *)((int)this + 0x39) = 1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x28))(param_1,local_c0);
    bVar1 = FUN_10081083(this,(uint)local_a2,(uint)local_a4);
    uVar5 = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      (**(code **)(*param_1 + 0x28))(param_1,local_f8);
      local_30 = param_2;
      local_2c = (uint)param_7 * 4 + 5;
      local_28 = param_4;
      puVar8 = local_20;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_20[1] = 0xffffffff;
      if (param_7 == 0) {
        local_20[3] = (uint)local_dc;
        local_10 = 0;
        local_c = 0;
      }
      local_20[2] = 0;
      local_20[0] = 0;
      local_70[6] = param_3;
      local_54 = 5;
      local_50 = 0x1688;
      puVar8 = local_48;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_48[3] = (uint)local_dc;
      local_88 = 0;
      local_84 = 5;
      local_80 = 0;
      local_48[0] = 0;
      local_48[2] = 0;
      local_38 = 0;
      uStack_7c = 0;
      local_34 = 0;
      local_48[1] = 0xffffffff;
      uStack_78 = 0;
      local_70[0] = param_6;
      local_70[1] = 4;
      *(int *)((int)this + 0x2c) = param_2;
      uStack_74 = 0;
      *(int *)((int)this + 0x30) = param_3;
      local_70[2] = 0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = 0;
      if (param_6 != 0) {
        *(int *)((int)this + 0x34) = param_6;
      }
      *(int **)((int)this + 0xc) = param_1;
      piVar2 = local_70;
      if (param_6 == 0) {
        piVar2 = (int *)0x0;
      }
      piVar3 = local_70 + 6;
      if (param_3 == 0) {
        piVar3 = (int *)0x0;
      }
      piVar4 = &local_30;
      if (param_2 == 0) {
        piVar4 = (int *)0x0;
      }
      uVar5 = FUN_100810c8(this,(int)piVar4,(int)piVar3,0,(int)piVar2,(uint)local_da,local_48[3],0);
      cStack0000001f = (char)uVar5;
      if (cStack0000001f == '\0') {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
      else {
        uVar6 = (**(code **)(**(int **)((int)this + 0xc) + 4))(*(int **)((int)this + 0xc));
        uVar5 = CONCAT31((int3)((uint)uVar6 >> 8),cStack0000001f);
      }
    }
  }
  return uVar5;
}


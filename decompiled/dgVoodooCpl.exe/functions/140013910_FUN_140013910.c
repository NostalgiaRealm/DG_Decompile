/*
 * FUN_140013910 at 140013910
 * ulonglong __fastcall FUN_140013910(longlong param_1, uint param_2, int param_3)
 * Address ranges: 140013910-140013bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140013910(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_res8;
  longlong *local_res20;
  longlong *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined1 local_158 [296];
  int local_30;
  int local_2c;
  
  uVar7 = (ulonglong)param_2;
  iVar2 = *(int *)(param_1 + 0x18 + uVar7 * 0x28);
  iVar5 = iVar2 + 1;
  *(int *)(param_1 + 0x18 + uVar7 * 0x28) = iVar5;
  if (iVar2 == 0) {
    lVar8 = uVar7 * 0x20;
    puVar9 = (undefined8 *)(param_1 + 0x330 + lVar8);
    uVar6 = (**(code **)(param_1 + 0x2d0))
                      (*(undefined8 *)(param_1 + 8 + uVar7 * 0x28),param_3,&DAT_140028fa0,puVar9);
    if ((int)uVar6 < 0) {
      piVar1 = (int *)(param_1 + 0x18 + uVar7 * 0x28);
      *piVar1 = *piVar1 + -1;
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 8 + uVar7 * 0x28);
      (**(code **)*puVar3)(puVar3,&DAT_140026398,param_1 + 0x338 + lVar8);
      *(undefined1 *)(lVar8 + 0x34d + param_1) = 0;
      local_1e8 = (longlong *)0x0;
      (**(code **)**(undefined8 **)(param_1 + 0x2d8))
                (*(undefined8 **)(param_1 + 0x2d8),&DAT_140026388,&local_1e8);
      local_res20 = (longlong *)0x0;
      iVar5 = (**(code **)(*local_1e8 + 0xd8))(local_1e8,&DAT_140028fb0,&local_res20);
      if (-1 < iVar5) {
        (**(code **)(*local_res20 + 0x40))(local_res20,local_158);
        (**(code **)(*(longlong *)*puVar9 + 0x158))((longlong *)*puVar9,&local_1e0);
        if ((local_1e0 == local_30) && (local_1dc == local_2c)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)(lVar8 + 0x34d + param_1) = uVar4;
        (**(code **)(*local_res20 + 0x10))();
      }
      (**(code **)(*local_1e8 + 0x10))();
      (**(code **)(*(longlong *)*puVar9 + 0x38))();
      local_1c8 = 0;
      uStack_1c0 = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,1,&local_1c8,0x10);
      local_180 = 0;
      uStack_178 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_190 = 0;
      uStack_188 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0,&local_1a0,0x3c);
      local_1d0 = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x12,&local_1d0,8);
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x15,&local_1b8,0x14);
      local_res8 = 0;
      iVar5 = (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x2c,&local_res8,8);
      if (iVar5 < 0) {
        local_res8 = 0;
      }
      local_1d8 = 0;
      iVar5 = (**(code **)(*(longlong *)*puVar9 + 0x68))((longlong *)*puVar9,0x2d,&local_1d8,8);
      if (iVar5 < 0) {
        local_1d8._4_4_ = 0;
      }
      if (((int)uStack_1c0 == 0) || (uStack_1c0._4_4_ == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(lVar8 + 0x348 + param_1) = uVar4;
      *(bool *)(lVar8 + 0x349 + param_1) = local_190._4_4_ != 0;
      *(bool *)(lVar8 + 0x34a + param_1) = 0 < local_1d0._4_4_;
      if (param_3 < 0xc000) {
        bVar10 = false;
      }
      else {
        bVar10 = (int)local_res8 != 0;
      }
      *(bool *)(lVar8 + 0x34b + param_1) = bVar10;
      *(undefined4 *)(lVar8 + 0x344 + param_1) = (undefined4)uStack_1b0;
      *(bool *)(lVar8 + 0x34c + param_1) = local_1d8._4_4_ != 0;
      uVar6 = CONCAT71((uint7)(uint3)((ulonglong)uStack_1b0 >> 8),1);
    }
    return uVar6;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
}


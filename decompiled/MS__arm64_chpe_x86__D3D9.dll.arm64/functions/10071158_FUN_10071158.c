/*
 * FUN_10071158 at 10071158
 * undefined FUN_10071158(void)
 * Address ranges: 10071158-1007145f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071158(int param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong extraout_x15;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined4 extraout_s18;
  int local_80 [2];
  int local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  
  piVar1 = (int *)(param_1 + 4);
  iVar3 = *piVar1;
  uVar6 = *(undefined8 *)(*(int *)(iVar3 + 0x1304) + 0x938);
  local_50 = 0xffffffff;
  local_4c = 1;
  local_80[0] = param_2;
  local_78[0] = param_2;
  local_70 = param_3;
  local_68 = uVar6;
  local_4b = param_4;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 8:
    break;
  case 9:
    iVar3 = FUN_10071730(param_1 + 0x14,local_80);
    if (*(int *)(iVar3 + 8) == 0) {
      FUN_100717c0(extraout_x15 & 0xffffffff,local_80);
      uVar5 = FUN_10120fc8(*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc),
                           *(undefined8 *)(*(int *)(*piVar1 + 0x1304) + 0x938),&local_60);
      uVar8 = uStack_58 & 0xffffffff;
      uVar7 = (undefined4)local_60;
      uVar6 = local_68;
      if ((uVar5 & 1) != 0) {
        FUN_10116480(*(undefined4 *)(*piVar1 + 0x1304),local_60 & 0xffffffff,0,uVar8);
        uVar6 = local_68;
      }
    }
    else {
      uVar8 = *(ulonglong *)(iVar3 + 0x10);
      local_60 = *(ulonglong *)(iVar3 + 8);
      uStack_58 = uVar8;
      FUN_100717c0(extraout_x15 & 0xffffffff,local_80);
      uVar8 = uVar8 & 0xffffffff;
      uVar7 = extraout_s18;
    }
    FUN_10116500(*(undefined4 *)(*piVar1 + 0x1304),uVar7,0,uVar8);
    uVar2 = local_60._4_4_;
    FUN_10116580(*(undefined4 *)(*piVar1 + 0x1304),uVar7,0,uVar8,1,local_60._4_4_,
                 (uVar8 & 0x1fffffff) << 3);
    FUN_10070fe0(param_1,param_2,*(undefined4 *)(param_1 + 0xc),uVar2,uVar8);
    goto LAB_10071410;
  case 10:
    uVar4 = FUN_10120fc8(*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(*(int *)(iVar3 + 0x1300) + 0xc),uVar6,&local_60);
    uVar8 = uStack_58;
    uVar5 = local_60;
    if ((uVar4 & 1) == 0) {
      FUN_1006f430(param_2,0,param_3,1);
      return;
    }
    uVar4 = uStack_58 & 0xffffffff;
    FUN_10116500(*(undefined4 *)(*piVar1 + 0x1304),local_60 & 0xffffffff,2,uVar4);
    uVar2 = local_60._4_4_;
    FUN_10116580(*(undefined4 *)(*piVar1 + 0x1304),uVar5 & 0xffffffff,2,uVar4,1,local_60._4_4_,
                 (uVar8 & 0x1fffffff) << 3);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
    goto LAB_10071400;
  case 0xb:
    FUN_100717c0(param_1 + 0x14,local_80);
    iVar3 = *piVar1;
    uVar6 = *(undefined8 *)(*(int *)(iVar3 + 0x1304) + 0x938);
    break;
  default:
    goto switchD_100711e8_default;
  }
  uVar5 = FUN_10120fc8(*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(*(int *)(iVar3 + 0x1300) + 0xc),uVar6,&local_60);
  uVar6 = local_68;
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = uStack_58 & 0xffffffff;
    uVar2 = local_60._4_4_;
LAB_10071400:
    FUN_10070fe0(param_1,param_2,uVar7,uVar2,uVar4);
    uVar6 = local_68;
  }
LAB_10071410:
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*(int *)(*piVar1 + 0x1300) + 0xc);
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  FUN_10070d48(param_1,local_78);
switchD_100711e8_default:
  return;
}


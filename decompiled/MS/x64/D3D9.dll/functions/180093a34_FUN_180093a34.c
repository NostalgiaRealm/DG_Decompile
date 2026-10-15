/*
 * FUN_180093a34 at 180093a34
 * undefined8 __fastcall FUN_180093a34(longlong param_1)
 * Address ranges: 180093a34-180093b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180093a34(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong local_res8;
  undefined1 local_58 [12];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar7 = *(uint *)(param_1 + 0x14);
  puVar4 = FUN_1800ac1a8((undefined8 *)local_58,uVar7);
  local_30 = *(undefined4 *)puVar4;
  local_58._0_4_ = *(undefined4 *)((longlong)puVar4 + 4);
  if (uVar7 < 8) {
    if ((uVar7 != 7) && (uVar7 != 0)) {
      iVar8 = uVar7 - 1;
      goto LAB_180093a76;
    }
  }
  else {
    iVar8 = uVar7 - 8;
LAB_180093a76:
    if ((((iVar8 != 0) && (iVar8 != 1)) && (iVar8 != 2)) &&
       (((iVar8 != 3 && (iVar8 != 4)) && (iVar8 != 5)))) goto LAB_180093aa2;
  }
  local_30 = 0x1b;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  local_58._0_4_ = 0x1c;
LAB_180093aa2:
  local_res8 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10);
  local_40 = *(undefined4 *)(param_1 + 8);
  local_3c = *(undefined4 *)(param_1 + 0xc);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_34 = *(undefined4 *)(param_1 + 0x18);
  local_2c = 0;
  local_28 = 8;
  local_20 = 0;
  lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x18c0;
  plVar2 = *(longlong **)(lVar9 + 0x6b0 + lVar1);
  uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,0,&local_res8);
  lVar3 = local_res8;
  *(longlong *)(param_1 + 0x40) = local_res8;
  if (local_res8 != 0) {
    local_48 = 0;
    local_res8 = 0;
    plVar2 = *(longlong **)(lVar9 + 0x6b0 + lVar1);
    local_58._4_8_ = 8;
    local_4c = 0xffffffff;
    uVar6 = (**(code **)(*plVar2 + 0x38))(plVar2,lVar3,local_58,&local_res8);
    *(longlong *)(param_1 + 0x48) = local_res8;
    if (local_res8 != 0) {
      return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}


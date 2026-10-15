/*
 * FUN_1801aad28 at 1801aad28
 * undefined FUN_1801aad28(void)
 * Address ranges: 1801aad28-1801aafff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801aad28(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             longlong *param_6,int *param_7)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  undefined8 uVar7;
  longlong lVar8;
  int local_80 [2];
  longlong local_78;
  uint local_70;
  ulonglong local_68;
  ulonglong local_60;
  int local_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar7 = 2;
  if (*(char *)(param_1 + 0x4d) == '\x01') {
    FUN_180221ec0(*(longlong *)(param_1 + 0x58) + 0x12c0);
  }
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  local_68 = (*extraout_x11)(param_1,1);
  if ((local_68 != 0) && (uVar5 = FUN_1801a94c8(param_1), (uVar5 & 1) != 0)) {
    local_70 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
    if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
      local_80[0] = 0;
      uVar5 = FUN_1801a9730(param_1,param_2,param_3,param_6,param_7,local_80);
      if ((uVar5 & 1) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x84) + (ulonglong)local_70 * 0x20;
        uVar4 = thunk_FUN_180223d24(lVar8 + 0x10);
        local_58 = *(int *)(lVar8 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,uVar4);
        local_54 = *(int *)(lVar8 + 0x14);
        uStack_50 = 0;
        local_4c = *(undefined4 *)(lVar8 + 0x18);
        local_48 = *(undefined4 *)(lVar8 + 0x1c);
        uStack_44 = 1;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)(param_1,param_2,param_3);
        uVar7 = 0;
        if (((int)local_78 == 0) &&
           (uVar5 = FUN_18020b9c8(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1508),
                                  *(undefined8 *)(local_68 + 0x14),local_70,
                                  param_2 + (*(int *)(param_1 + 0x34) + param_3) *
                                            *(int *)(param_1 + 0x3c),
                                  *(longlong *)(param_1 + 0x58) + 0x1760,&local_58,
                                  (ulonglong)(uint)(*param_7 * local_54) +
                                  (ulonglong)(uint)(local_58 * local_80[0]) + *param_6,*param_7,0),
           (uVar5 & 1) == 0)) {
          uVar7 = 2;
        }
      }
    }
    else {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_01)(param_1,param_2,param_3);
      uVar7 = 0;
      uVar5 = FUN_18020e970(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x1b500),
                            *(undefined8 *)(param_1 + 0xc4));
      if ((uVar5 & 1) == 0) {
        lVar8 = *(longlong *)(param_1 + 0x138);
        if (lVar8 == 0) {
          lVar8 = FUN_180208508(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1508));
        }
        cVar3 = FUN_180207560(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1508) + 8,0);
        if (cVar3 == '\0' || (cVar3 == '\0' || lVar8 == 0)) {
          FUN_18020e768(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x1b500),
                        *(undefined8 *)(param_1 + 0xc4),0);
        }
        else {
          FUN_1802085e0(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1508),lVar8);
        }
      }
      local_78 = 0;
      lVar8 = (ulonglong)local_70 * 0x20;
      piVar1 = (int *)(*(longlong *)(param_1 + 0xd4) + lVar8);
      local_68 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xd4) + lVar8);
      local_60 = (ulonglong)(uint)(piVar1[1] + *piVar1);
      uVar6 = (*(code *)puVar2)(0x180224000);
      (*extraout_x11_02)(uVar6,0,&local_68,&local_78);
      *param_6 = local_78 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xd4) + lVar8);
      *param_7 = *(int *)(lVar8 + *(longlong *)(param_1 + 0xd4) + 8);
    }
  }
  return uVar7;
}


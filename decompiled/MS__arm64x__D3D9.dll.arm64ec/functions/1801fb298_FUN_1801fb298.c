/*
 * FUN_1801fb298 at 1801fb298
 * undefined FUN_1801fb298(void)
 * Address ranges: 1801fb298-1801fb447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1801fb298(longlong param_1,int *param_2,ulonglong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  longlong local_1c0;
  int local_1b8;
  int iStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined1 auStack_198 [8];
  uint local_190;
  uint uStack_18c;
  undefined1 auStack_178 [68];
  undefined4 local_134;
  int local_cc;
  int iStack_c8;
  uint local_c0;
  undefined1 auStack_98 [104];
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_1c0 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  param_2[5] = 0;
  auVar10 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                      (0x180224000,*(undefined8 *)(lVar9 + (param_3 & 0xffffffff) * 0x28 + 0x18),
                       param_4);
  iVar5 = (*extraout_x11)(auVar10._0_8_,auVar10._8_8_,&local_1c0);
  if (iVar5 < 0) {
    local_1c0 = 0;
  }
  lVar3 = local_1c0;
  local_134 = 0xdc;
  if (local_1c0 == 0) {
    uVar8 = 0;
    uVar7 = 0;
    thunk_FUN_180223fe0(0,0xffffffff,auStack_178);
  }
  else {
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(lVar3,auStack_98);
    thunk_FUN_180223fe0(auStack_98,0xffffffff,auStack_178);
    local_1a4 = 1;
    local_1b8 = local_cc;
    iStack_1b4 = iStack_c8;
    local_1b0 = local_c0;
    uStack_1ac = 1;
    local_1a8 = *(undefined4 *)(&DAT_180238818 + (ulonglong)*(uint *)(lVar9 + 0x678) * 4);
    (*(code *)puVar2)(0x180224000);
    iVar5 = (*extraout_x11_01)(lVar3,&local_1b8,auStack_198,0);
    uVar8 = local_c0;
    uVar7 = 1;
    if (-1 < iVar5) {
      uVar8 = local_190;
      uVar7 = uStack_18c;
    }
    (*(code *)puVar2)(0x180224000);
    (*extraout_x11_02)(lVar3);
  }
  if ((*(int *)(lVar9 + 0x668) == 0) ||
     (iVar5 = *(int *)(lVar9 + 0x668), iVar6 = *(int *)(lVar9 + 0x66c), *(int *)(lVar9 + 0x66c) == 0
     )) {
    iVar5 = local_cc;
    iVar6 = iStack_c8;
  }
  if ((*(uint *)(lVar9 + 0x670) != 0) && (*(uint *)(lVar9 + 0x674) != 0)) {
    uVar8 = *(uint *)(lVar9 + 0x670);
    uVar7 = *(uint *)(lVar9 + 0x674);
  }
  *param_2 = iVar5;
  param_2[1] = iVar6;
  param_2[2] = uVar8;
  param_2[3] = uVar7;
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar8 / uVar7;
    }
    param_2[4] = uVar1;
    param_2[5] = 0x20;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801fb424);
  (*pcVar4)();
}


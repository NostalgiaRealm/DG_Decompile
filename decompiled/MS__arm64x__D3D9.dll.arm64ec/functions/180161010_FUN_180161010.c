/*
 * FUN_180161010 at 180161010
 * undefined FUN_180161010(void)
 * Address ranges: 180161010-180161143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180161010(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined4 local_60 [2];
  longlong local_58 [4];
  undefined4 local_38;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_58[3] = (*extraout_x11)(param_4);
    local_58[3] = local_58[3] + (ulonglong)(uint)((param_5 + (int)param_3[5] * 2) * 4);
    local_38 = 1;
    local_60[0] = 2;
    FUN_18020a9e8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1508),1,local_58 + 3,local_60);
    if ((*(uint *)(*param_3 + (ulonglong)*(uint *)(param_3 + 1) * 0x20 + 0x14) & 1) != 0) {
      local_58[0] = 0;
      lVar1 = param_3[5];
      local_58[1] = 0;
      local_58[2] = 0;
      (*(code *)puVar2)(0x180224000);
      iVar3 = (*extraout_x11_00)(param_4,0,local_58 + 1,local_58);
      if (-1 < iVar3) {
        *(undefined4 *)(local_58[0] + (ulonglong)(uint)((param_5 + (int)lVar1 * 2) * 4)) = 0;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_01)(param_4,0,local_58 + 1);
      }
    }
    *(undefined8 *)(param_2 + 0x40) = param_4;
    *(int *)(param_2 + 0x48) = param_5;
    *(longlong **)(param_2 + 0x38) = param_3;
  }
  return;
}


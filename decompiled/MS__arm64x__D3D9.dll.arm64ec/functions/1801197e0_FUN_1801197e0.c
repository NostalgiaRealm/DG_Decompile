/*
 * FUN_1801197e0 at 1801197e0
 * undefined FUN_1801197e0(void)
 * Address ranges: 1801197e0-1801198a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801197e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *extraout_x11;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x118) = param_2;
  uVar1 = *(uint *)(param_1 + 0x90);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x1801197fc);
    (*pcVar4)();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xa8) / uVar1;
  }
  uVar2 = uVar2 * *(int *)(param_1 + 0xb8);
  uVar1 = *(uint *)(param_1 + 0x94);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x180119818);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xac) / uVar1;
  }
  local_18 = 0;
  uVar3 = uVar3 * *(int *)(param_1 + 0xbc);
  local_10 = 0;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar1 = *(uint *)(DAT_18024d928 + 0x8aa);
  if (*(uint *)(DAT_18024d928 + 0x8aa) == 0) {
    uVar1 = uVar2;
  }
  local_30 = uVar1;
  if (0x10 < uVar1) {
    local_30 = 0x10;
  }
  if (uVar1 == 0) {
    local_30 = 1;
  }
  local_40 = param_3;
  uStack_3c = param_4;
  local_38 = param_5;
  uStack_34 = param_6;
  local_28 = param_7;
  local_20 = param_8;
  uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar5,&local_40);
  return;
}


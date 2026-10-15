/*
 * FUN_18000e088 at 18000e088
 * undefined FUN_18000e088(void)
 * Address ranges: 18000e088-18000e137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e088(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
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
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000e0a4);
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
    pcVar4 = (code *)SoftwareBreakpoint(0xf004,0x18000e0c0);
    (*pcVar4)();
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xac) / uVar1;
  }
  uVar3 = uVar3 * *(int *)(param_1 + 0xbc);
  local_18 = 0;
  local_10 = 0;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar1 = *(uint *)(DAT_18024de60 + 0x8aa);
  if (*(uint *)(DAT_18024de60 + 0x8aa) == 0) {
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
  (**(code **)(**(longlong **)(param_1 + 0x100) + 0x58))(*(longlong **)(param_1 + 0x100),&local_40);
  return;
}


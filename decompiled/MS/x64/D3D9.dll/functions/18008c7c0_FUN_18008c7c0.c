/*
 * FUN_18008c7c0 at 18008c7c0
 * undefined __fastcall FUN_18008c7c0(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 18008c7c0-18008c896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008c7c0(longlong param_1,longlong param_2,longlong param_3)

{
  uint yBottom;
  uint xRight;
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong local_58 [2];
  tagRECT local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  local_38 = 0;
  local_30 = 0;
  local_2c = 1;
  puVar1 = (uint *)(param_2 + -0xbc);
  if (param_2 == 0) {
    puVar1 = (uint *)&DAT_00000024;
  }
  local_58[0] = 0;
  local_58[1] = 0;
  puVar2 = (uint *)(param_3 + -0xbc);
  if (param_3 == 0) {
    puVar2 = (uint *)&DAT_00000024;
  }
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  puVar3 = (uint *)(param_2 + -0xb8);
  if (param_2 == 0) {
    puVar3 = (uint *)&DAT_00000028;
  }
  puVar4 = (uint *)(param_3 + -0xb8);
  if (param_3 == 0) {
    puVar4 = (uint *)&DAT_00000028;
  }
  yBottom = *puVar3;
  if (*puVar4 < *puVar3) {
    yBottom = *puVar4;
  }
  xRight = *puVar1;
  if (*puVar2 < *puVar1) {
    xRight = *puVar2;
  }
  SetRect(&local_48,0,0,xRight,yBottom);
  local_58[0]._0_4_ = local_48.left;
  local_58[0]._4_4_ = local_48.top;
  local_58[1]._0_4_ = local_48.right;
  local_58[1]._4_4_ = local_48.bottom;
  FUN_18008ce40(param_1,0,0,0,0,param_2,param_3,local_58);
  return;
}


/*
 * FUN_1004ef30 at 1004ef30
 * undefined FUN_1004ef30(void)
 * Address ranges: 1004ef30-1004efe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004ef30(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *extraout_w11;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x1510 + 0x510);
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  switch(param_2) {
  case 8:
    local_10 = 0;
    break;
  case 9:
    local_10 = 1;
    break;
  case 10:
    local_10 = 2;
    break;
  case 0xb:
  case 0xc:
    local_10 = 3;
  }
  local_c = 0;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*puVar1,param_2,param_1 + 0x10);
  uVar3 = (*extraout_w11)(uVar2,&local_10);
  return ~uVar3 >> 0x1f;
}


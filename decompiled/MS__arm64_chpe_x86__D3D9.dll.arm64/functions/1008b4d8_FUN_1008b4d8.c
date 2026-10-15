/*
 * FUN_1008b4d8 at 1008b4d8
 * undefined FUN_1008b4d8(void)
 * Address ranges: 1008b4d8-1008b577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008b4d8(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  
  piVar1 = (int *)(param_2 + (param_4 + 0xa2) * 4);
  if (*piVar1 == 0) {
    iVar2 = FUN_10121590(param_2,4,1);
    *piVar1 = iVar2;
    local_28 = FUN_10123210(0xe4,*(undefined1 *)(*(int *)(param_2 + 0xf4) + param_4));
    local_28 = local_28 & 0xff;
    uStack_24 = 0;
    uStack_2c = param_4 + 2U | 0x410100;
    local_38 = 0x2036;
    local_40 = param_2;
    uStack_3c = param_3;
    FUN_10122a88(&local_40,0x20);
  }
  return *piVar1;
}


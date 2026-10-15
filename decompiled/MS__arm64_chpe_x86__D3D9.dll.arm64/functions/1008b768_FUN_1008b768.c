/*
 * FUN_1008b768 at 1008b768
 * undefined FUN_1008b768(void)
 * Address ranges: 1008b768-1008b803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008b768(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar1 = (int *)(param_2 + 0x304);
  if (*piVar1 == 0) {
    iStack_54 = FUN_10121590(param_2,1,1);
    local_44 = *(undefined4 *)(param_2 + 0xa0);
    *piVar1 = iStack_54;
    local_2c = 0;
    local_30 = 0xbf800000;
    uStack_34 = 0xe4;
    uStack_40 = 0xe4;
    local_4c = 0x41010d;
    uStack_48 = 0;
    local_50 = 1;
    local_58 = 0x37;
    local_3c = 0x3f800000;
    local_60 = param_2;
    uStack_5c = param_3;
    local_38 = local_44;
    FUN_10122a88(&local_60,0x38);
  }
  return *piVar1;
}


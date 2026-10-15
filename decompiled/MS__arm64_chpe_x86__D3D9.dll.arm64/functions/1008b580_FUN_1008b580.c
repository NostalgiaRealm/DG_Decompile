/*
 * FUN_1008b580 at 1008b580
 * undefined FUN_1008b580(void)
 * Address ranges: 1008b580-1008b60b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008b580(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  piVar1 = (int *)(param_2 + (param_4 + 0xa2) * 4);
  if (*piVar1 == 0) {
    iStack_34 = FUN_10121590(param_2,1,1);
    local_24 = param_4 << 4;
    local_28 = 0xff;
    *piVar1 = iStack_34;
    local_2c = *(undefined4 *)(param_2 + 0x80);
    local_30 = 1;
    local_38 = 0x36;
    local_40 = param_2;
    uStack_3c = param_3;
    FUN_10122a88(&local_40,0x20);
  }
  return *piVar1;
}


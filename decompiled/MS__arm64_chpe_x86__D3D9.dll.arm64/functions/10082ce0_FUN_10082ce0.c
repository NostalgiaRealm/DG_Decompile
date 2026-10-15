/*
 * FUN_10082ce0 at 10082ce0
 * undefined FUN_10082ce0(void)
 * Address ranges: 10082ce0-10082d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082ce0(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 uStack_24;
  
  piVar1 = (int *)(param_2 + 0x218);
  if (*piVar1 == 0) {
    iStack_34 = FUN_10121590(param_2,4,1);
    bVar2 = *(byte *)(param_2 + 0x203);
    *piVar1 = iStack_34;
    local_28 = (uint)bVar2;
    uStack_24 = 0;
    local_2c = 0x410103;
    local_30 = 0xf;
    local_38 = 0x2036;
    local_40 = param_2;
    uStack_3c = param_3;
    FUN_10122a88(&local_40,0x20);
  }
  return;
}


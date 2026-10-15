/*
 * FUN_10082c40 at 10082c40
 * undefined FUN_10082c40(void)
 * Address ranges: 10082c40-10082cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10082c40(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  
  piVar1 = (int *)(param_2 + 0x208);
  if (*piVar1 == 0) {
    iVar2 = FUN_10121590(param_2,4,1);
    *piVar1 = iVar2;
    if (*(byte *)(param_2 + 0x1fe) != 0xf) {
      local_28 = FUN_10123210(*(undefined1 *)(param_2 + 0x202),*(byte *)(param_2 + 0x1fe) ^ 0xf);
      local_28 = local_28 & 0xff;
      uStack_24 = 0;
      uStack_2c = 0x410102;
      local_38 = 0x2036;
      local_40 = param_2;
      uStack_3c = param_3;
      FUN_10122a88(&local_40,0x20);
    }
  }
  return;
}


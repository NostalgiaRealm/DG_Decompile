/*
 * FUN_10128f20 at 10128f20
 * undefined FUN_10128f20(void)
 * Address ranges: 10128f20-10128fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10128f20(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 in_x7;
  uint local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined8 local_2c;
  
  local_2c = 0;
  bVar1 = *(char *)(param_1 + param_2 * 0x18 + 0x530) != '\0';
  local_38 = 4;
  if (!bVar1) {
    local_38 = 1;
  }
  uStack_34 = 2;
  if (!bVar1) {
    uStack_34 = 0;
  }
  local_30 = (uint)bVar1;
  local_40[0] = FUN_101292c8(param_1 + param_2 * 0x16c0 + 0x1c40,&local_38,0,param_3);
  if (local_40[0] == 0) {
    local_40[0] = 0;
    FUN_10112948(param_1 + 0x520,param_2,&local_38,0,param_3,0,0,in_x7,local_40);
  }
  return local_40[0];
}


/*
 * FUN_1005c360 at 1005c360
 * undefined FUN_1005c360(void)
 * Address ranges: 1005c360-1005c3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1005c360(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_3 + 0x80) == 0) {
    uVar2 = (uint)*(byte *)(param_3 + 0x136);
  }
  else {
    uVar2 = ~(param_6 >> 2) & 1;
  }
  uVar1 = FUN_10096b90(param_1,param_2,param_3,param_4,param_5,3,~(param_6 >> 3) & 1,uVar2,
                       ~(byte)(param_6 >> 4) & 1);
  return uVar1;
}


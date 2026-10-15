/*
 * FUN_10004dd0 at 10004dd0
 * undefined FUN_10004dd0(void)
 * Address ranges: 10004dd0-10004e67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004dd0(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  if (param_2 < 6 && param_3 != (undefined4 *)0x0) {
    FUN_10096840(auStack_30);
    iVar1 = param_1 + param_2 * 0x10;
    param_4 = 0;
    *param_3 = *(undefined4 *)(param_1 + (param_2 + 0x23) * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0x234);
    param_3[2] = *(undefined4 *)(iVar1 + 0x238);
    param_3[3] = *(undefined4 *)(iVar1 + 0x23c);
    FUN_10096790(auStack_30);
  }
  return param_4;
}


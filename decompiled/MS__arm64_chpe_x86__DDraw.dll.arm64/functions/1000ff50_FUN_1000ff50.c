/*
 * FUN_1000ff50 at 1000ff50
 * undefined FUN_1000ff50(void)
 * Address ranges: 1000ff50-1000ffdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000ff50(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,uint param_6)

{
  int iVar1;
  
  if (param_6 < 0xe) {
    iVar1 = param_1 + param_6 * 4;
    *param_2 = *(undefined4 *)(param_1 + *(char *)(iVar1 + 0x3c) * 4 + 0xd0dc);
    *param_3 = *(undefined4 *)(param_1 + *(char *)(iVar1 + 0x3d) * 4 + 0xd0dc);
    *param_4 = *(undefined4 *)(param_1 + *(char *)(iVar1 + 0x3e) * 4 + 0xd0dc);
    *param_5 = *(undefined4 *)(param_1 + *(char *)(iVar1 + 0x3f) * 4 + 0xd0dc);
  }
  return param_6 < 0xe;
}


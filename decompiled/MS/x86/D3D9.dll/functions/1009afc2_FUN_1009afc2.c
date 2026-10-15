/*
 * FUN_1009afc2 at 1009afc2
 * undefined4 __stdcall FUN_1009afc2(int param_1, uint param_2, int * param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 1009afc2-1009b044
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1009afc2(int param_1,uint param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x10) {
    FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    iVar2 = *(int *)(param_1 + -0x124 + uVar1 * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x68;
      if (iVar2 != 0) {
        FUN_1009e2b4(iVar2);
      }
    }
    *param_3 = iVar2;
    *param_5 = *(undefined4 *)(param_1 + -0xe4 + uVar1 * 4);
    *param_4 = *(undefined4 *)(param_1 + -0xa4 + uVar1 * 4);
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  else {
    *param_3 = 0;
    *param_5 = 0;
    *param_4 = 0;
  }
  return 0;
}


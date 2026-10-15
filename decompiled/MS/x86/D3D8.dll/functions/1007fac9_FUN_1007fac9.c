/*
 * FUN_1007fac9 at 1007fac9
 * undefined4 __stdcall FUN_1007fac9(int param_1, uint param_2, int * param_3, undefined4 * param_4)
 * Address ranges: 1007fac9-1007fb40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007fac9(int param_1,uint param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x10) {
    FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    iVar2 = *(int *)(param_1 + -0x124 + uVar1 * 4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x68;
      if (iVar2 != 0) {
        FUN_10081bf0(iVar2);
      }
    }
    *param_3 = iVar2;
    *param_4 = *(undefined4 *)(param_1 + -0xe4 + uVar1 * 4);
    FUN_10003881((char *)((int)&param_2 + 3));
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
  }
  return 0;
}


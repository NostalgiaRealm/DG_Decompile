/*
 * FUN_10007370 at 10007370
 * undefined FUN_10007370(void)
 * Address ranges: 10007370-10007493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007370(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
                uint *param_7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100036a0(*(undefined4 *)(param_1 + 0xacc),*(int *)(param_1 + 0xb2c),
                       *(int *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb1c),param_5,param_3,7,
                       param_4,0);
  if (((-1 < iVar1) && (iVar1 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined4 *)0x0)) {
    uVar2 = 4;
    if (param_4 != 0x66) {
      uVar2 = 2;
    }
    if ((uVar2 <= param_2) &&
       (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + 0xb0c) >> 6 & 1) == 0)))) {
      *param_6 = 0;
      iVar1 = 0;
      *param_7 = 0;
      if ((param_5 == 0) &&
         ((*(int *)(param_1 + 0xb04) == 1 &&
          (*param_7 = param_2,
          (ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] < (ulonglong)param_2)))) {
        iVar1 = -0x7789fe84;
      }
    }
  }
  return iVar1;
}


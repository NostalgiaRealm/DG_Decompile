/*
 * FUN_10007210 at 10007210
 * undefined FUN_10007210(void)
 * Address ranges: 10007210-1000735b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007210(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
                uint *param_7,uint *param_8)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_f0 [12];
  uint local_e4;
  
  iVar1 = FUN_100036a0(*(undefined4 *)(param_1 + 0xacc),*(int *)(param_1 + 0xb2c),
                       *(int *)(param_1 + 0xb04),*(undefined4 *)(param_1 + 0xb1c),param_5,param_3,6,
                       100,0);
  if ((((-1 < iVar1) && (iVar1 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined4 *)0x0)) &&
     (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + 0xb0c) >> 6 & 1) == 0)))) {
    *param_6 = 0;
    *param_8 = 0;
    *param_7 = 0;
    if ((param_5 == 0) &&
       ((*(int *)(param_1 + 0xb04) == 1 &&
        (*param_8 = param_2,
        (ulonglong)(&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] < (ulonglong)param_2)))) {
      iVar1 = -0x7789fe84;
    }
    else {
      iVar1 = 0;
      if ((param_4 != 0) &&
         ((uVar2 = FUN_100832c0(param_4,1,auStack_f0), (uVar2 & 1) != 0 &&
          (*param_7 = local_e4, param_2 < local_e4)))) {
        iVar1 = -0x7789f794;
      }
    }
  }
  return iVar1;
}


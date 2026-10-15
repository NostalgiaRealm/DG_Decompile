/*
 * FUN_10007f80 at 10007f80
 * undefined FUN_10007f80(void)
 * Address ranges: 10007f80-100080c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10007f80(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
                uint *param_7,uint *param_8)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_2a0 [12];
  uint local_294;
  
  iVar1 = FUN_10003ae0(*(undefined4 *)(param_1 + 0xd90),*(int *)(param_1 + 0xdf0),
                       *(int *)(param_1 + 0xdc8),*(undefined4 *)(param_1 + 0xde0),param_5,param_3,6,
                       100,0);
  if ((((-1 < iVar1) && (iVar1 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined4 *)0x0)) &&
     (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + 0xdd0) >> 6 & 1) == 0)))) {
    *param_6 = 0;
    *param_8 = 0;
    *param_7 = 0;
    if ((param_5 == 0) &&
       ((*(int *)(param_1 + 0xdc8) == 1 &&
        (*param_8 = param_2,
        (ulonglong)(&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] < (ulonglong)param_2)))) {
      iVar1 = -0x7789fe84;
    }
    else {
      iVar1 = 0;
      if ((param_4 != 0) && (uVar2 = FUN_100a2df0(param_4,1,auStack_2a0), (uVar2 & 1) != 0)) {
        iVar1 = -0x7789f794;
        if (local_294 <= param_2) {
          iVar1 = 0;
        }
        *param_7 = local_294;
      }
    }
  }
  return iVar1;
}


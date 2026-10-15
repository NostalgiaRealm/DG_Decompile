/*
 * FUN_100080e0 at 100080e0
 * undefined FUN_100080e0(void)
 * Address ranges: 100080e0-100081ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100080e0(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 *param_6,
                uint *param_7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_10003ae0(*(undefined4 *)(param_1 + 0xd90),*(int *)(param_1 + 0xdf0),
                       *(int *)(param_1 + 0xdc8),*(undefined4 *)(param_1 + 0xde0),param_5,param_3,7,
                       param_4,0);
  if (((-1 < iVar1) && (iVar1 = -0x7789f794, param_2 != 0)) && (param_6 != (undefined4 *)0x0)) {
    uVar2 = 4;
    if (param_4 != 0x66) {
      uVar2 = 2;
    }
    if ((uVar2 <= param_2) &&
       (((param_3 >> 4 & 1) == 0 || ((*(uint *)(param_1 + 0xdd0) >> 6 & 1) == 0)))) {
      *param_6 = 0;
      iVar1 = 0;
      *param_7 = 0;
      if ((param_5 == 0) && (*(int *)(param_1 + 0xdc8) == 1)) {
        *param_7 = param_2;
        iVar1 = -0x7789fe84;
        if ((ulonglong)param_2 <= (ulonglong)(&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45]) {
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}


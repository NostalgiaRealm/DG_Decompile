/*
 * FUN_1800aeb74 at 1800aeb74
 * int __fastcall FUN_1800aeb74(longlong param_1, uint param_2, int * param_3, uint param_4, undefined4 * param_5)
 * Address ranges: 1800aeb74-1800aec34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800aeb74(longlong param_1,uint param_2,int *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_3 != (int *)0x0) && (*param_3 == 0xc)) {
    uVar3 = 0;
    do {
      if (param_3[1] == (&DAT_180100c60)[uVar3]) {
        uVar2 = param_3[2];
        if (2 < uVar2) {
          return -0x7789f794;
        }
        if (param_5 == (undefined4 *)0x0) {
          return -0x7789f794;
        }
        if ((uVar2 != 0) && (uVar2 != 1)) {
          return -0x7789f794;
        }
        iVar1 = FUN_18000425c(param_1 + -0xa0,param_2,param_4,param_3[1],(undefined8 *)&local_18);
        param_5[1] = local_18;
        param_5[2] = local_14;
        param_5[3] = local_10;
        param_5[4] = local_c;
        *param_5 = 0x18;
        param_5[5] = 0;
        return iVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < 0x43);
  }
  return -0x7789f794;
}


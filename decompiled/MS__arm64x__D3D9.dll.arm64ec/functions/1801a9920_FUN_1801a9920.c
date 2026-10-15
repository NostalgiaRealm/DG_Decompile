/*
 * FUN_1801a9920 at 1801a9920
 * undefined FUN_1801a9920(void)
 * Address ranges: 1801a9920-1801a9983;1801a9988-1801a99a3;1801a99b0-1801a99cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a9920(undefined8 param_1,undefined8 param_2,int param_3,int *param_4,longlong param_5,
                  int param_6,int param_7)

{
  int iVar1;
  
  if (param_5 != 0) {
    iVar1 = param_4[1];
    param_5 = (ulonglong)(uint)(*param_4 * param_7) + (ulonglong)(uint)(iVar1 * param_6) + param_5;
    param_7 = (param_4[2] - *param_4) * param_7;
    if (param_3 == param_6 && param_7 == param_3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_5,param_2,(param_4[3] - iVar1) * param_3);
    }
    if (iVar1 < param_4[3]) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_5,param_2,param_7);
    }
  }
  return;
}


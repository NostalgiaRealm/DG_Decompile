/*
 * FUN_180021978 at 180021978
 * undefined __cdecl FUN_180021978(longlong * param_1, undefined4 * param_2, undefined4 * param_3, float * param_4, byte param_5)
 * Address ranges: 180021978-180021b7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021978(longlong *param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,
                  byte param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 4) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 4;
  }
  if ((param_5 & 1) == 0) {
    FUN_18003a5b8((undefined8 *)param_1[0x631],3,3);
    param_5 = 0;
    FUN_180020630(param_1[0x631],param_2,1,0);
    FUN_180020630(param_1[0x631],param_3,1,param_5);
  }
  else {
    uVar1 = *param_3;
    uVar2 = *param_2;
    if ((((-(1e+06 < *param_4) & 2U) != 0 || 1e+06 < param_4[1]) ||
        ((-(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar2 >> 0x18),
                                         CONCAT16((char)((uint)uVar2 >> 0x10),
                                                  CONCAT15((char)((uint)uVar2 >> 8),
                                                           CONCAT14((char)uVar2,param_2[1])))) >>
                               0x20))) & 8U) != 0 ||
        (-(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar1 >> 0x18),
                                        CONCAT16((char)((uint)uVar1 >> 0x10),
                                                 CONCAT15((char)((uint)uVar1 >> 8),
                                                          CONCAT14((char)uVar1,param_3[1])))) >>
                              0x20))) & 2U) != 0)) ||
        ((-(1e+06 < ABS((float)param_2[1])) & 4U) != 0 || 1e+06 < ABS((float)param_3[1]))) {
      FUN_180020928((longlong)param_1,param_2,param_3,param_4);
      goto LAB_180021b44;
    }
    FUN_18003a5b8((undefined8 *)param_1[0x631],3,3);
    FUN_180020630(param_1[0x631],param_2,1,param_5);
    FUN_180020630(param_1[0x631],param_3,1,param_5);
  }
  FUN_180020630(param_1[0x631],param_4,1,param_5);
  **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) + -3;
  *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 4) = *(int *)(param_1[0x631] + 0x50) + -2;
  *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 8) = *(int *)(param_1[0x631] + 0x50) + -1;
  *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 0xc;
LAB_180021b44:
  if ((*(uint *)((longlong)param_1 + 0x2b4c) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}


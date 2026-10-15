/*
 * FUN_1801195a8 at 1801195a8
 * undefined FUN_1801195a8(void)
 * Address ranges: 1801195a8-180119707
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801195a8(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (((((((*param_2 == 0) || (*param_2 != *(longlong *)(param_1 + 0x88))) ||
         ((int)param_2[1] != *(int *)(param_1 + 0x90))) ||
        (((*(int *)((longlong)param_2 + 0xc) != *(int *)(param_1 + 0x94) ||
          ((int)param_2[7] != *(int *)(param_1 + 0xc0))) ||
         (((int)param_2[2] != *(int *)(param_1 + 0x98) ||
          ((*(int *)((longlong)param_2 + 0x14) != *(int *)(param_1 + 0x9c) ||
           ((int)param_2[3] != *(int *)(param_1 + 0xa0))))))))) ||
       ((*(int *)((longlong)param_2 + 0x1c) != *(int *)(param_1 + 0xa4) ||
        (((*(int *)((longlong)param_2 + 0x3c) != *(int *)(param_1 + 0xc4) ||
          (*(int *)((longlong)param_2 + 0x44) != *(int *)(param_1 + 0xcc))) ||
         ((int)param_2[9] != *(int *)(param_1 + 0xd0))))))) ||
      (((*(int *)((longlong)param_2 + 0x4c) != *(int *)(param_1 + 0xd4) ||
        ((int)param_2[10] != *(int *)(param_1 + 0xd8))) ||
       (((*(int *)((longlong)param_2 + 0x54) != *(int *)(param_1 + 0xdc) ||
         (((int)param_2[0xb] != *(int *)(param_1 + 0xe0) ||
          (*(int *)((longlong)param_2 + 0x5c) != *(int *)(param_1 + 0xe4))))) ||
        (*(int *)((longlong)param_2 + 100) != *(int *)(param_1 + 0xec))))))) ||
     (((((int)param_2[0xd] != *(int *)(param_1 + 0xf0) ||
        ((char)param_2[0xe] != *(char *)(param_1 + 0xf8))) ||
       (*(char *)((longlong)param_2 + 0x71) != *(char *)(param_1 + 0xf9))) ||
      (uVar1 = 1, *(char *)((longlong)param_2 + 0x72) != *(char *)(param_1 + 0xfa))))) {
    uVar1 = 0;
  }
  return uVar1;
}


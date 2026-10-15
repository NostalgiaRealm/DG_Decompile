/*
 * FUN_10069b89 at 10069b89
 * undefined __stdcall FUN_10069b89(int param_1, int * param_2, undefined4 param_3, byte param_4, int param_5, int param_6, int param_7, int param_8)
 * Address ranges: 10069b89-10069c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069b89(int param_1,int *param_2,undefined4 param_3,byte param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  if (((*(int *)(param_1 + 0x26c + param_5 * 4) != 0 |
        (*(int *)(param_1 + 0x26c + param_6 * 4) == 0) - 1U & 2 |
        (*(int *)(param_1 + 0x26c + param_7 * 4) == 0) - 1U & 4 |
       (*(int *)(param_1 + 0x26c + param_8 * 4) == 0) - 1U & 8) & param_4) != 0) {
    FUN_100c3be1((int *)(param_1 + 0x18),param_2,1);
  }
  return;
}


/*
 * FUN_10067ba6 at 10067ba6
 * undefined __stdcall FUN_10067ba6(int * param_1, int param_2)
 * Address ranges: 10067ba6-10067bf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067ba6(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(char *)(uVar1 + 0x10 + *(int *)(param_2 + 0x10)) != '\0') &&
       (*(char *)(uVar1 + *(int *)(param_2 + 0x10)) != -1)) {
      FUN_100c438a(param_1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  if (*(int *)(param_2 + 0x518) != -1) {
    FUN_100c438a(param_1);
  }
  return;
}


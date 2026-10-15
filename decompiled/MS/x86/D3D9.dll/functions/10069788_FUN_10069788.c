/*
 * FUN_10069788 at 10069788
 * undefined __stdcall FUN_10069788(int param_1, int * param_2)
 * Address ranges: 10069788-1006987d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069788(int param_1,int *param_2)

{
  uint uVar1;
  
  FUN_1007275a(param_1,param_2);
  FUN_1006987e(param_1,param_2,*(uint *)(param_1 + 500),~*(byte *)(*(int *)(param_1 + 0x10) + 0x444)
               ,2);
  FUN_1006987e(param_1,param_2,*(uint *)(param_1 + 0x1f8),
               ~*(byte *)(*(int *)(param_1 + 0x10) + 0x445),3);
  FUN_1006987e(param_1,param_2,*(uint *)(param_1 + 0x1ec),
               (*(char *)(*(int *)(param_1 + 0x10) + 0x443) != '\0') - 1U & 0xe |
               *(char *)(*(int *)(param_1 + 0x10) + 0x442) == '\0',4);
  uVar1 = 0;
  do {
    FUN_1006987e(param_1,param_2,*(uint *)(param_1 + 0x1fc + uVar1 * 4),
                 ~*(byte *)(uVar1 + 0x446 + *(int *)(param_1 + 0x10)),uVar1 + 5);
    FUN_100702e0(param_1,(uint *)(param_1 + 0x1fc + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  FUN_100702e0(param_1,(uint *)(param_1 + 0x1ec));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x1f0));
  FUN_100702e0(param_1,(uint *)(param_1 + 500));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x1f8));
  return;
}


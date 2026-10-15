/*
 * FUN_100691d8 at 100691d8
 * undefined __stdcall FUN_100691d8(int param_1, int * param_2)
 * Address ranges: 100691d8-100692b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100691d8(int param_1,int *param_2)

{
  uint uVar1;
  
  FUN_1007275a(param_1,param_2);
  FUN_100692b5(param_1,param_2,4,
               (*(char *)(*(int *)(param_1 + 0x10) + 0x443) != '\0') - 1U & 0xe |
               *(char *)(*(int *)(param_1 + 0x10) + 0x442) == '\0');
  FUN_100692b5(param_1,param_2,2,~*(byte *)(*(int *)(param_1 + 0x10) + 0x444));
  FUN_100692b5(param_1,param_2,3,~*(byte *)(*(int *)(param_1 + 0x10) + 0x445));
  uVar1 = 0;
  do {
    FUN_100692b5(param_1,param_2,uVar1 + 5,~*(byte *)(uVar1 + 0x446 + *(int *)(param_1 + 0x10)));
    FUN_100702e0(param_1,(uint *)(param_1 + 0x1fc + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  FUN_100702e0(param_1,(uint *)(param_1 + 0x1ec));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x1f0));
  FUN_100702e0(param_1,(uint *)(param_1 + 500));
  FUN_100702e0(param_1,(uint *)(param_1 + 0x1f8));
  return;
}


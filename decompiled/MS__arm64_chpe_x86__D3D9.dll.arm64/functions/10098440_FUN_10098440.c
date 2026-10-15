/*
 * FUN_10098440 at 10098440
 * undefined FUN_10098440(void)
 * Address ranges: 10098440-100984ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10098440(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_3 + 0x10) + uVar2 * 4 + 0x4a28);
    if (iVar1 != 0) {
      FUN_1009fae0(param_1,param_2 + iVar1 * 4 + -4,param_3,param_4);
      local_58 = 0x3e;
      uStack_54 = 0;
      local_60 = param_3 + 0x18;
      uStack_5c = param_4;
      FUN_10122a88(&local_60,0x10);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return;
}


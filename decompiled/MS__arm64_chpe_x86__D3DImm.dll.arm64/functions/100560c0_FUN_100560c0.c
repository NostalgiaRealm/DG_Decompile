/*
 * FUN_100560c0 at 100560c0
 * undefined FUN_100560c0(void)
 * Address ranges: 100560c0-10056157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100560c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_30);
  uVar2 = 0x80070057;
  if (param_2 != 0) {
    uVar2 = FUN_10004e70(param_1,*(undefined2 *)(*(int *)(param_1 + 0xa58) + 0x120),param_2,
                         0x8876081d);
  }
  FUN_10096790(auStack_30);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}


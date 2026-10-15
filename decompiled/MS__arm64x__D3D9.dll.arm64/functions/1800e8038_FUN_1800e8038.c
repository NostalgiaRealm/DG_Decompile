/*
 * FUN_1800e8038 at 1800e8038
 * undefined FUN_1800e8038(void)
 * Address ranges: 1800e8038-1800e8087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8038(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb28);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb20);
    FUN_1800e80d8();
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xd0))
              (*(longlong **)(param_1 + 0x688),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0xb28) = 0;
  }
  return;
}


/*
 * FUN_180049814 at 180049814
 * undefined __fastcall FUN_180049814(longlong param_1)
 * Address ranges: 180049814-18004986a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180049814(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb28);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb20);
    FUN_180049954(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xd0))
              (*(longlong **)(param_1 + 0x688),iVar1,uVar2);
    *(undefined4 *)(param_1 + 0xb28) = 0;
  }
  return;
}


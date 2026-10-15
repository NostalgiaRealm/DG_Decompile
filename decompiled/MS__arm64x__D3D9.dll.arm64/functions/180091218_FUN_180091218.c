/*
 * FUN_180091218 at 180091218
 * undefined FUN_180091218(void)
 * Address ranges: 180091218-18009139b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180091218(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x2c)) {
      FUN_180090940(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1930),
                    *(int *)(param_1 + 0x38),1);
    }
    if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x30)) {
      FUN_180090940(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1938),
                    *(int *)(param_1 + 0x3c),param_2 * param_3);
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    uVar2 = 1;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = 2;
    }
    FUN_180090940(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1930),
                  *(undefined4 *)(param_1 + 0x2c),uVar2);
    FUN_180090940(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1938),
                  *(undefined4 *)(param_1 + 0x30),param_2 * param_3);
    FUN_180090940(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xc) + 0x1940),
                  *(undefined4 *)(param_1 + 0x34),param_2 * param_3);
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  plVar3 = *(longlong **)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (plVar3 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (iVar1 == 1) {
        FUN_1800fdbb0(*(longlong *)(param_1 + 0xc) + 0x18b8,plVar3);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x1c);
  if (plVar3 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (iVar1 == 1) {
        FUN_1800fdbb0(*(longlong *)(param_1 + 0xc) + 0x18b8,plVar3);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x24));
  *(undefined8 *)(param_1 + 0x24) = 0;
  return;
}


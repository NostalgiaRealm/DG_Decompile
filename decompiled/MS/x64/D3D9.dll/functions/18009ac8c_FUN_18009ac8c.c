/*
 * FUN_18009ac8c at 18009ac8c
 * undefined __fastcall FUN_18009ac8c(longlong param_1, int param_2, int param_3)
 * Address ranges: 18009ac8c-18009addd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009ac8c(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (*(uint *)(param_1 + 0x38) != *(uint *)(param_1 + 0x2c)) {
      FUN_18009a5f8(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc) + 0x1930),
                    *(uint *)(param_1 + 0x38),1);
    }
    if (*(uint *)(param_1 + 0x3c) != *(uint *)(param_1 + 0x30)) {
      FUN_18009a5f8(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc) + 0x1938),
                    *(uint *)(param_1 + 0x3c),param_2 * param_3);
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    FUN_18009a5f8(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc) + 0x1930),
                  *(uint *)(param_1 + 0x2c),(*(int *)(param_1 + 0x44) != 0) + 1);
    FUN_18009a5f8(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc) + 0x1938),
                  *(uint *)(param_1 + 0x30),param_2 * param_3);
    FUN_18009a5f8(param_1,*(longlong *)(*(longlong *)(param_1 + 0xc) + 0x1940),
                  *(uint *)(param_1 + 0x34),param_2 * param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_18009a470(param_1,plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x1c);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      FUN_18009a470(param_1,plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x24));
  *(undefined8 *)(param_1 + 0x24) = 0;
  return;
}


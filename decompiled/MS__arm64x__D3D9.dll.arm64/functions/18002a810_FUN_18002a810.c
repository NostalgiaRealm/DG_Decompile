/*
 * FUN_18002a810 at 18002a810
 * undefined FUN_18002a810(void)
 * Address ranges: 18002a810-18002aa1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002a810(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((((param_2 | param_3) & 0xff) != 0) ||
         ((param_4 != 0 && (param_4 != *(int *)(param_1 + 0x80))))) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf718),0);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf710),0);
        FUN_18002a670(param_1,param_2,param_3,param_4);
      }
    }
    else {
      uVar2 = FUN_180026a80(param_1);
      if ((uVar2 & 1) != 0) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf718),0);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf710),0);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
        lVar1 = 0x98;
        if (*(longlong *)(param_1 + 0xfcd8) == *(longlong *)(param_1 + 0xf718)) {
          lVar1 = 0x70;
        }
        (**(code **)(*plVar3 + 0x68))
                  (plVar3,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + lVar1));
        FUN_18002a670(param_1,param_2,param_3,param_4);
      }
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0xf6d0) + 0x620);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    uVar2 = FUN_180026a80();
    if ((uVar2 & 1) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf718),0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      (**(code **)(*plVar3 + 0x78))(plVar3,*(undefined8 *)(param_1 + 0xf710),0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
      lVar1 = 0x98;
      if (*(longlong *)(param_1 + 0xfcd8) == *(longlong *)(param_1 + 0xf718)) {
        lVar1 = 0x70;
      }
      (**(code **)(*plVar3 + 0x60))
                (plVar3,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x90),
                 *(undefined4 *)(param_1 + lVar1));
      FUN_18002a670(param_1,param_2,param_3,param_4);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + 0xf6d0) + 0x620);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return 0;
}


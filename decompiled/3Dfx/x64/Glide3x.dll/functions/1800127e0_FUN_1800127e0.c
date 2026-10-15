/*
 * FUN_1800127e0 at 1800127e0
 * undefined __fastcall FUN_1800127e0(longlong param_1)
 * Address ranges: 1800127e0-180012894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800127e0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar2 = FUN_180014854(*(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
                        *(int *)(*(longlong *)(param_1 + 0x228) + 0x29fc));
  uVar3 = FUN_180014854(*(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300),
                        *(int *)(*(longlong *)(param_1 + 0x228) + 0x2a00));
  if (uVar2 != 0xffffffff) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300);
    lVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar2);
    FUN_18001a42c(lVar4);
  }
  if (uVar3 != 0xffffffff) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x3300);
    lVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar3);
    if ((*(char *)(*(longlong *)(param_1 + 0x228) + 0x2b74) != '\0') &&
       (*(char *)(lVar4 + 0x48) != '\0')) {
      FUN_18001a42c(lVar4);
    }
  }
  return;
}


/*
 * FUN_18000b5c8 at 18000b5c8
 * undefined FUN_18000b5c8(void)
 * Address ranges: 18000b5c8-18000b6ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b5c8(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 0xe30);
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x70);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  uStack_24 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_30 = 0;
    lVar1 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar1 = *(longlong *)(param_1 + 8) + 0x68;
    }
    local_28 = uVar2;
    FUN_18000da70(lVar4,lVar1);
  }
  else {
    (*__imp_USER32_dll_SetRect)
              (&local_30,0,0,*(undefined4 *)(lVar4 + 0x90),*(undefined4 *)(lVar4 + 0x94));
    lVar1 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar1 = *(longlong *)(param_1 + 8) + 0x68;
    }
    FUN_18000da70(lVar4,lVar1);
  }
  return;
}


/*
 * FUN_1800e9288 at 1800e9288
 * undefined FUN_1800e9288(void)
 * Address ranges: 1800e9288-1800e931f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e9288(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  
  local_40 = 0;
  lVar5 = *(longlong *)(param_1 + 0xb40);
  uVar4 = 0;
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb50) * 8;
  plVar3 = *(longlong **)(lVar5 + 0x10);
  lStack_30 = (ulonglong)(*(uint *)(param_1 + 0xb50) + 1) << 3;
  local_38 = lVar1;
  iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,0,&local_38,&local_40);
  if (-1 < iVar2) {
    uVar4 = FUN_180001550(lVar1 + local_40,0,0);
    local_38 = 0;
    lStack_30 = 0;
    plVar3 = *(longlong **)(lVar5 + 0x10);
    (**(code **)(*plVar3 + 0x48))(plVar3,0,&local_38);
  }
  return uVar4;
}


/*
 * FUN_180116740 at 180116740
 * undefined FUN_180116740(void)
 * Address ranges: 180116740-180116897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180116740(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 == 0) {
    lVar5 = **(longlong **)(*(longlong *)(param_1 + 0x28) + 0xe30);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar3 = (*extraout_x11)(uVar4);
  (*(code *)puVar2)(0x180224000);
  uStack_34 = (*extraout_x11_00)(uVar4);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    local_40 = 0;
    lVar1 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar1 = *(longlong *)(param_1 + 8) + 0x68;
    }
    local_38 = uVar3;
    FUN_180118f88(lVar5,lVar1);
  }
  else {
    thunk_FUN_180223c20(&local_40,0,0,*(undefined4 *)(lVar5 + 0x90),*(undefined4 *)(lVar5 + 0x94));
    lVar1 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar1 = *(longlong *)(param_1 + 8) + 0x68;
    }
    FUN_180118f88(lVar5,lVar1);
  }
  return;
}


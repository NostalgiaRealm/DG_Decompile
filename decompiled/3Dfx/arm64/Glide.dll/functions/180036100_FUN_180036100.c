/*
 * FUN_180036100 at 180036100
 * undefined8 __cdecl FUN_180036100(longlong param_1)
 * Address ranges: 180036100-1800361af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180036100(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_180051780(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),2,(longlong)&local_20,
                0);
  lVar3 = *(longlong *)(param_1 + 0x140);
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_18003b1a0(param_1 + 0x448,*(undefined4 *)(lVar3 + 0xb0),*(undefined4 *)(lVar3 + 0xb4),
                        *(undefined4 *)(param_1 + 0x30),*(byte *)(*(longlong *)(lVar3 + 8) + 0x54),
                        &local_30,&uStack_28);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x490) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x5b0) + 0x10))();
      *(undefined8 *)(param_1 + 0x5b0) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x10))();
      *(undefined8 *)(param_1 + 0x5a8) = 0;
    }
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x5a8) = local_30;
    *(undefined8 *)(param_1 + 0x5b0) = uStack_28;
  }
  return uVar2;
}


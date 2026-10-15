/*
 * FUN_18021f148 at 18021f148
 * undefined FUN_18021f148(void)
 * Address ranges: 18021f148-18021f25f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021f148(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  code *extraout_x11;
  ulonglong uVar8;
  
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      (*(code *)puVar4)();
      (*extraout_x11)();
      thunk_FUN_1802236bc(*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar8 * 0x18));
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  FUN_1802229d8(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = DAT_18024602c;
  iVar5 = DAT_180246028;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    do {
      lVar1 = uVar8 * 0x18;
      iVar7 = (int)uVar8;
      uVar3 = iVar7 + 1;
      uVar8 = (ulonglong)uVar3;
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x108) + (ulonglong)(uint)(iVar5 * iVar7) + (ulonglong)uVar2) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x140) + lVar1 + 8);
    } while (uVar3 < *(uint *)(param_1 + 0x148));
  }
  if (*(short *)(param_1 + 0x6c) != 0) {
    uVar6 = thunk_FUN_1802239b4(0);
    thunk_FUN_180224008(*(undefined2 *)(param_1 + 0x6c),uVar6);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      thunk_FUN_1802236bc();
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  thunk_FUN_180223748(*(undefined8 *)(param_1 + 0xa8),0,0x8000);
  return;
}


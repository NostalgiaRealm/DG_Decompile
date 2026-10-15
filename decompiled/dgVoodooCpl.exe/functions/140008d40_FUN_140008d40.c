/*
 * FUN_140008d40 at 140008d40
 * undefined8 __fastcall FUN_140008d40(longlong param_1, int param_2)
 * Address ranges: 140008d40-140008f51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140008d40(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == 0x3f2) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3f2);
    iVar4 = FUN_14000e270(param_1 + -0x70,0x3f2,(ulonglong)uVar2);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x2f) = iVar4 << 10;
  }
  else if (param_2 == 0x3f4) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3f4);
    uVar2 = FUN_14000e270(param_1 + -0x70,0x3f4,(ulonglong)uVar2);
    FUN_140001b14(param_1 + 0xd0,(undefined8 *)&local_28,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x37) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3b) = local_24;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x43) = local_20;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x47) = local_1c;
  }
  else if (param_2 == 0x3f6) {
    uVar2 = FUN_14000e460(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218));
    uVar3 = FUN_14000e270(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218),(ulonglong)uVar2)
    ;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3f) = uVar3;
  }
  else if (param_2 == 0x3f7) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3f7);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x3f7,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x33) = uVar3;
  }
  else if (param_2 == 0x3f9) {
    lVar1 = param_1 + -0x70;
    uVar2 = FUN_14000e460(lVar1,0x3f9);
    uVar3 = FUN_14000e270(lVar1,0x3f9,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x27) = uVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x261) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x262) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x263) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x279) = 1;
    FUN_14000902c(lVar1);
  }
  else if (param_2 == 0x3fa) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x3fa);
    iVar4 = FUN_14000e270(param_1 + -0x70,0x3fa,(ulonglong)uVar2);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x2b) = iVar4 << 0x14;
  }
  else if (param_2 == 0x401) {
    uVar2 = FUN_14000e460(param_1 + -0x70,0x401);
    uVar3 = FUN_14000e270(param_1 + -0x70,0x401,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4b) = uVar3;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
}


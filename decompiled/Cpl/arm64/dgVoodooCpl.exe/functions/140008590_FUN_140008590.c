/*
 * FUN_140008590 at 140008590
 * undefined8 __cdecl FUN_140008590(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140008590-14000876f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140008590(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 extraout_x1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 == 0x3f2) {
    uVar4 = FUN_14000ffb8(param_1 + -0x70,0x3f2);
    iVar2 = FUN_14000fd78(param_1 + -0x70,0x3f2,uVar4 & 0xffffffff);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x2f) = iVar2 << 10;
  }
  else if (param_2 == 0x3f4) {
    uVar4 = FUN_14000ffb8(param_1 + -0x70,0x3f4);
    uVar3 = FUN_14000fd78(param_1 + -0x70,0x3f4,uVar4 & 0xffffffff);
    FUN_140001b50(param_1 + 0xd0,(undefined8 *)&local_30,uVar3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x37) = local_30;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3b) = uStack_2c;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x43) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x47) = uStack_24;
  }
  else if (param_2 == 0x3f6) {
    uVar4 = FUN_14000ffb8(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218));
    uVar1 = FUN_14000fd78(*(longlong *)(param_1 + 0x210),*(int *)(param_1 + 0x218),
                          uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x3f) = uVar1;
  }
  else if (param_2 == 0x3f7) {
    uVar4 = FUN_14000ffb8(param_1 + -0x70,0x3f7);
    uVar1 = FUN_14000fd78(param_1 + -0x70,0x3f7,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x33) = uVar1;
  }
  else if (param_2 == 0x3f9) {
    uVar4 = FUN_14000ffb8(param_1 + -0x70,0x3f9);
    uVar4 = uVar4 & 0xffffffff;
    uVar1 = FUN_14000fd78(param_1 + -0x70,0x3f9,uVar4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x27) = uVar1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x261) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x262) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x263) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x279) = 1;
    FUN_1400088d0(param_1 + -0x70,extraout_x1,uVar4,param_4,param_5,param_6,param_7,param_8);
  }
  else if (param_2 == 0x3fa) {
    uVar4 = FUN_14000ffb8(param_1 + -0x70,0x3fa);
    iVar2 = FUN_14000fd78(param_1 + -0x70,0x3fa,uVar4 & 0xffffffff);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x2b) = iVar2 << 0x14;
  }
  else if (param_2 == 0x401) {
    uVar4 = FUN_14000ffb8(param_1 + -0x70,0x401);
    uVar1 = FUN_14000fd78(param_1 + -0x70,0x401,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x4b) = uVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return 1;
}


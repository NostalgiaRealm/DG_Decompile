/*
 * FUN_1400057a0 at 1400057a0
 * undefined8 __cdecl FUN_1400057a0(longlong param_1, int param_2)
 * Address ranges: 1400057a0-140005aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400057a0(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 == 0x3f1) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f1);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f1,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9a) = uVar3;
  }
  else if (param_2 == 0x3f2) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f2);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f2,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa6) = uVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa2) = uVar3;
  }
  else if (param_2 == 0x3f3) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f3);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f3,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9e) = uVar3;
  }
  else if (param_2 == 0x3f4) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f4);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f4,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xbe) = uVar3;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x299) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29a) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29b) = 1;
    FUN_140005c20(param_1 + -0x78);
  }
  else if (param_2 == 0x3f5) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f5);
    uVar4 = FUN_14000fd78(param_1 + -0x78,0x3f5,uVar4 & 0xffffffff);
    lVar1 = (uVar4 & 0xffffffff) * 4;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2) = *(undefined4 *)(&DAT_140026d20 + lVar1);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xae) =
         *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb6) =
         *(undefined4 *)(&DAT_140026ad0 + (uVar4 & 0xffffffff) * 4);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xba) = *(undefined4 *)(&DAT_140026bb0 + lVar1);
  }
  else if (param_2 == 0x3f6) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f6);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f6,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xca) = uVar3;
  }
  else if (param_2 == 0x3f7) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f7);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f7,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xaa) = uVar3;
  }
  else if (param_2 == 0x3f8) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f8);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f8,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xda) = uVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xde) = 1;
  }
  else if (param_2 == 0x3f9) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3f9);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3f9,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xce) = uVar3;
  }
  else if (param_2 == 0x3fa) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3fa);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3fa,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd2) = uVar3;
  }
  else if (param_2 == 0x3fb) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x3fb);
    uVar3 = FUN_14000fd78(param_1 + -0x78,0x3fb,uVar4 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd6) = uVar3;
  }
  else if (param_2 == 0x40b) {
    uVar4 = FUN_14000ffb8(param_1 + -0x78,0x40b);
    uVar2 = FUN_14000fd78(param_1 + -0x78,0x40b,uVar4 & 0xffffffff);
    FUN_140001b50(param_1 + 0xd0,(undefined8 *)&local_30,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8a) = local_30;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8a) = uStack_2c;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x92) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x96) = uStack_24;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return 1;
}


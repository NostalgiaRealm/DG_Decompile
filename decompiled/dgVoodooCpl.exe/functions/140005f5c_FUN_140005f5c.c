/*
 * FUN_140005f5c at 140005f5c
 * undefined8 __fastcall FUN_140005f5c(longlong param_1, int param_2)
 * Address ranges: 140005f5c-1400062e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140005f5c(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 < 0x3f8) {
    if (param_2 == 0x3f7) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f7);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f7,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xaa) = uVar3;
    }
    else if (param_2 == 0x3f1) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f1);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f1,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9a) = uVar3;
    }
    else if (param_2 == 0x3f2) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f2);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f2,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa6) = uVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa2) = uVar3;
    }
    else if (param_2 == 0x3f3) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f3);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f3,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9e) = uVar3;
    }
    else if (param_2 == 0x3f4) {
      lVar1 = param_1 + -0x78;
      uVar2 = FUN_14000e460(lVar1,0x3f4);
      uVar3 = FUN_14000e270(lVar1,0x3f4,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xbe) = uVar3;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x299) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29a) = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29b) = 1;
      FUN_1400063f4(lVar1);
    }
    else if (param_2 == 0x3f5) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f5);
      uVar2 = FUN_14000e270(param_1 + -0x78,0x3f5,(ulonglong)uVar2);
      uVar5 = (ulonglong)uVar2;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2) =
           *(undefined4 *)(&DAT_140026ca8 + uVar5 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xae) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb6) =
           *(undefined4 *)(&DAT_140026a98 + uVar5 * 4);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xba) =
           *(undefined4 *)(&DAT_140026b58 + uVar5 * 4);
    }
    else if (param_2 == 0x3f6) {
      uVar2 = FUN_14000e460(param_1 + -0x78,0x3f6);
      uVar3 = FUN_14000e270(param_1 + -0x78,0x3f6,(ulonglong)uVar2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xca) = uVar3;
    }
  }
  else if (param_2 == 0x3f8) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3f8);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3f8,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xda) = uVar3;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xde) = 1;
  }
  else if (param_2 == 0x3f9) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3f9);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3f9,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xce) = uVar3;
  }
  else if (param_2 == 0x3fa) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3fa);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3fa,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd2) = uVar3;
  }
  else if (param_2 == 0x3fb) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x3fb);
    uVar3 = FUN_14000e270(param_1 + -0x78,0x3fb,(ulonglong)uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd6) = uVar3;
  }
  else if (param_2 == 0x40b) {
    uVar2 = FUN_14000e460(param_1 + -0x78,0x40b);
    uVar2 = FUN_14000e270(param_1 + -0x78,0x40b,(ulonglong)uVar2);
    FUN_140001b14(param_1 + 0xd0,(undefined8 *)&local_28,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8a) = local_28;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8a) = local_24;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x92) = local_20;
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x96) = local_1c;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}


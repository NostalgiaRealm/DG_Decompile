/*
 * FUN_140007fec at 140007fec
 * undefined8 __cdecl FUN_140007fec(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140007fec-1400080cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140007fec(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar3;
  
  if (param_2 == 0x40c) {
    uVar2 = FUN_14000ffb8(param_1 + -0x70,0x40c);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = FUN_14000fd78(param_1 + -0x70,0x40c,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xeb) = uVar1;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29d) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29e) = 1;
    uVar3 = extraout_x1_00;
  }
  else {
    if (param_2 != 0x40d) {
      if (param_2 == 0x40e) {
        uVar2 = FUN_14000ffb8(param_1 + -0x70,0x40e);
        uVar1 = FUN_14000fd78(param_1 + -0x70,0x40e,uVar2 & 0xffffffff);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xef) = uVar1;
      }
      goto LAB_1400080a8;
    }
    uVar2 = FUN_14000ffb8(param_1 + -0x70,0x40d);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = FUN_14000fd78(param_1 + -0x70,0x40d,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe7) = uVar1;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x29e) = 1;
    uVar3 = extraout_x1;
  }
  FUN_1400080d0(param_1 + -0x70,uVar3,uVar2,param_4,param_5,param_6,param_7,param_8);
LAB_1400080a8:
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return 1;
}


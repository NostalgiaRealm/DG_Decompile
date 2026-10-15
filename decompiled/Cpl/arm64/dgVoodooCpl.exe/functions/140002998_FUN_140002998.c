/*
 * FUN_140002998 at 140002998
 * undefined8 __cdecl FUN_140002998(longlong param_1, int param_2)
 * Address ranges: 140002998-14000299b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002998(longlong param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0x40f) {
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x40f);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x40f,uVar2 & 0xffffffff);
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + 0x1fb);
  }
  else if (param_2 == 0x410) {
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x410);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x410,uVar2 & 0xffffffff);
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + 0x1ff);
  }
  else if (param_2 == 0x411) {
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x411);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x411,uVar2 & 0xffffffff);
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + 0x203);
  }
  else {
    if (param_2 != 0x412) goto LAB_140002a64;
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x412);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x412,uVar2 & 0xffffffff);
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 8) + 0x207);
  }
  *puVar3 = uVar1;
LAB_140002a64:
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
  return 1;
}


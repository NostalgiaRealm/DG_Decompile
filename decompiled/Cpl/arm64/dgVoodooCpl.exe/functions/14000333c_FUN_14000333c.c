/*
 * FUN_14000333c at 14000333c
 * undefined8 __cdecl FUN_14000333c(longlong param_1, int param_2, undefined8 param_3, ulonglong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 14000333c-140003577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000333c(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0x3f6) {
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x3f6);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x3f6,uVar2 & 0xffffffff);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xfb) = uVar1;
    goto LAB_140003554;
  }
  if (param_2 == 0x3fa) {
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x3fa);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x3fa,uVar2 & 0xffffffff);
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1df);
  }
  else {
    if (param_2 != 0x410) {
      if (param_2 == 0x411) {
        uVar2 = FUN_14000ffb8(param_1 + -0x78,0x411);
        uVar2 = uVar2 & 0xffffffff;
        uVar1 = FUN_14000fd78(param_1 + -0x78,0x411,uVar2);
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1cf) = uVar1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a8) = 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a9) = 1;
        uVar3 = extraout_x1_00;
      }
      else {
        if (param_2 == 0x419) {
          uVar2 = FUN_14000ffb8(param_1 + -0x78,0x419);
          uVar1 = FUN_14000fd78(param_1 + -0x78,0x419,uVar2 & 0xffffffff);
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xf7) = uVar1;
          goto LAB_140003554;
        }
        if (param_2 != 0x41b) {
          if (param_2 == 0x41c) {
            uVar2 = FUN_14000ffb8(param_1 + -0x78,0x41c);
            uVar1 = FUN_14000fd78(param_1 + -0x78,0x41c,uVar2 & 0xffffffff);
            puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1d3);
          }
          else if (param_2 == 0x41d) {
            uVar2 = FUN_14000ffb8(param_1 + -0x78,0x41d);
            uVar1 = FUN_14000fd78(param_1 + -0x78,0x41d,uVar2 & 0xffffffff);
            puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1d7);
          }
          else if (param_2 == 0x41e) {
            uVar2 = FUN_14000ffb8(param_1 + -0x78,0x41e);
            uVar1 = FUN_14000fd78(param_1 + -0x78,0x41e,uVar2 & 0xffffffff);
            puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1db);
          }
          else {
            if (param_2 != 0x41f) goto LAB_140003554;
            uVar2 = FUN_14000ffb8(param_1 + -0x78,0x41f);
            uVar1 = FUN_14000fd78(param_1 + -0x78,0x41f,uVar2 & 0xffffffff);
            puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1eb);
          }
          goto LAB_140003528;
        }
        uVar2 = FUN_14000ffb8(param_1 + -0x78,0x41b);
        uVar2 = uVar2 & 0xffffffff;
        uVar1 = FUN_14000fd78(param_1 + -0x78,0x41b,uVar2);
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1cb) = uVar1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x2a9) = 1;
        uVar3 = extraout_x1;
      }
      FUN_140003900(param_1 + -0x78,uVar3,uVar2,param_4,param_5,param_6,param_7,param_8);
      goto LAB_140003554;
    }
    uVar2 = FUN_14000ffb8(param_1 + -0x78,0x410);
    uVar1 = FUN_14000fd78(param_1 + -0x78,0x410,uVar2 & 0xffffffff);
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1e7);
  }
LAB_140003528:
  *puVar4 = uVar1;
LAB_140003554:
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),1);
  return 1;
}


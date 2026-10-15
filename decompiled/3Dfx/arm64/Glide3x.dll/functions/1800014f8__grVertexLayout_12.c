/*
 * _grVertexLayout@12 at 1800014f8
 * undefined __cdecl _grVertexLayout@12(undefined8 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1800014f8-180001727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grVertexLayout_12(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int extraout_w11;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
                    /* 0x14f8  92  _grVertexLayout@12
                       0x14f8  192  grVertexLayout */
  lVar1 = FUN_180008ce0();
  if (extraout_w11 == 1) {
    puVar2 = (undefined4 *)&DAT_18006f9e0;
    puVar4 = (undefined4 *)0x18006fa18;
    uVar3 = 0;
  }
  else if (extraout_w11 == 2) {
    puVar2 = (undefined4 *)0x18006f9e4;
    puVar4 = (undefined4 *)0x18006fa1c;
    uVar3 = 1;
  }
  else if (extraout_w11 == 3) {
    puVar2 = (undefined4 *)0x18006f9e8;
    puVar4 = (undefined4 *)&DAT_18006fa20;
    uVar3 = 2;
  }
  else if (extraout_w11 == 4) {
    puVar2 = (undefined4 *)0x18006f9f8;
    puVar4 = (undefined4 *)&DAT_18006fa30;
    uVar3 = 6;
  }
  else if (extraout_w11 == 5) {
    puVar2 = (undefined4 *)0x18006f9fc;
    puVar4 = (undefined4 *)0x18006fa34;
    uVar3 = 7;
  }
  else if (extraout_w11 == 0x10) {
    puVar2 = (undefined4 *)&DAT_18006f9f0;
    puVar4 = (undefined4 *)0x18006fa28;
    uVar3 = 4;
  }
  else if (extraout_w11 == 0x20) {
    puVar2 = (undefined4 *)0x18006f9ec;
    puVar4 = (undefined4 *)0x18006fa24;
    uVar3 = 3;
  }
  else if (extraout_w11 == 0x30) {
    puVar2 = (undefined4 *)0x18006f9f4;
    puVar4 = (undefined4 *)0x18006fa2c;
    uVar3 = 5;
  }
  else if (extraout_w11 == 0x40) {
    puVar2 = (undefined4 *)&DAT_18006fa00;
    puVar4 = (undefined4 *)0x18006fa38;
    uVar3 = 8;
  }
  else if (extraout_w11 == 0x41) {
    puVar2 = (undefined4 *)0x18006fa08;
    puVar4 = (undefined4 *)&DAT_18006fa40;
    uVar3 = 10;
  }
  else if (extraout_w11 == 0x42) {
    puVar2 = (undefined4 *)&DAT_18006fa10;
    puVar4 = (undefined4 *)0x18006fa48;
    uVar3 = 0xc;
  }
  else if (extraout_w11 == 0x50) {
    puVar2 = (undefined4 *)0x18006fa04;
    puVar4 = (undefined4 *)0x18006fa3c;
    uVar3 = 9;
  }
  else if (extraout_w11 == 0x51) {
    puVar2 = (undefined4 *)0x18006fa0c;
    puVar4 = (undefined4 *)0x18006fa44;
    uVar3 = 0xb;
  }
  else {
    if (extraout_w11 != 0x52) {
      return;
    }
    puVar2 = &DAT_18006fa14;
    puVar4 = &DAT_18006fa4c;
    uVar3 = 0xd;
  }
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)**(undefined8 **)(lVar1 + 0x18))
              (*(undefined8 **)(lVar1 + 0x18),uVar3,param_2,param_3);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  *puVar2 = param_2;
  *puVar4 = param_3;
  return;
}


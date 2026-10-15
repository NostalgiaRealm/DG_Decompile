/*
 * FUN_1800059e4 at 1800059e4
 * undefined __fastcall FUN_1800059e4(longlong param_1, uint param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800059e4-180005bc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800059e4(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_2 < 0x31) {
    if (param_2 == 0x30) {
      uVar3 = 5;
      puVar1 = (undefined4 *)&DAT_18006da04;
      puVar2 = (undefined4 *)&DAT_18006da3c;
    }
    else if (param_2 == 1) {
      uVar3 = 0;
      puVar1 = (undefined4 *)&DAT_18006d9f0;
      puVar2 = (undefined4 *)&DAT_18006da28;
    }
    else if (param_2 == 2) {
      uVar3 = 1;
      puVar1 = (undefined4 *)&DAT_18006d9f4;
      puVar2 = (undefined4 *)&DAT_18006da2c;
    }
    else if (param_2 == 3) {
      uVar3 = 2;
      puVar1 = (undefined4 *)&DAT_18006d9f8;
      puVar2 = (undefined4 *)&DAT_18006da30;
    }
    else if (param_2 == 4) {
      uVar3 = 6;
      puVar1 = (undefined4 *)&DAT_18006da08;
      puVar2 = (undefined4 *)&DAT_18006da40;
    }
    else if (param_2 == 5) {
      uVar3 = 7;
      puVar1 = (undefined4 *)&DAT_18006da0c;
      puVar2 = (undefined4 *)&DAT_18006da44;
    }
    else if (param_2 == 0x10) {
      uVar3 = 4;
      puVar1 = (undefined4 *)&DAT_18006da00;
      puVar2 = (undefined4 *)&DAT_18006da38;
    }
    else {
      if (param_2 != 0x20) {
        return;
      }
      uVar3 = 3;
      puVar1 = &DAT_18006d9fc;
      puVar2 = &DAT_18006da34;
    }
  }
  else if (param_2 == 0x40) {
    uVar3 = 8;
    puVar1 = (undefined4 *)&DAT_18006da10;
    puVar2 = (undefined4 *)&DAT_18006da48;
  }
  else if (param_2 == 0x41) {
    uVar3 = 10;
    puVar1 = (undefined4 *)&DAT_18006da18;
    puVar2 = (undefined4 *)&DAT_18006da50;
  }
  else if (param_2 == 0x42) {
    uVar3 = 0xc;
    puVar1 = (undefined4 *)&DAT_18006da20;
    puVar2 = (undefined4 *)&DAT_18006da58;
  }
  else if (param_2 == 0x50) {
    uVar3 = 9;
    puVar1 = (undefined4 *)&DAT_18006da14;
    puVar2 = (undefined4 *)&DAT_18006da4c;
  }
  else if (param_2 == 0x51) {
    uVar3 = 0xb;
    puVar1 = (undefined4 *)&DAT_18006da1c;
    puVar2 = (undefined4 *)&DAT_18006da54;
  }
  else {
    if (param_2 != 0x52) {
      return;
    }
    uVar3 = 0xd;
    puVar1 = (undefined4 *)&DAT_18006da24;
    puVar2 = (undefined4 *)&DAT_18006da5c;
  }
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),uVar3);
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  *puVar1 = param_3;
  *puVar2 = param_4;
  return;
}


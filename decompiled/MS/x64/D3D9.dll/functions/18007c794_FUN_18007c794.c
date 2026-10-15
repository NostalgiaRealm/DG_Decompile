/*
 * FUN_18007c794 at 18007c794
 * uint __fastcall FUN_18007c794(undefined8 param_1, uint param_2, longlong param_3, longlong * param_4, char param_5)
 * Address ranges: 18007c794-18007c8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18007c794(undefined8 param_1,uint param_2,longlong param_3,longlong *param_4,char param_5)

{
  uint uVar1;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar1 = param_2 >> 0x10 & 7;
  if (uVar1 == 1) {
    uVar1 = 0x31;
  }
  else if (uVar1 == 2) {
    uVar1 = 0x18;
  }
  else if (uVar1 == 3) {
    uVar1 = 0x1d;
  }
  else if (uVar1 == 4) {
    uVar1 = 0x31;
  }
  else if (uVar1 == 5) {
    uVar1 = 0x39;
  }
  else if (uVar1 == 6) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = 0;
  }
  if (param_5 == '\0') {
    local_68 = FUN_1800ec8c0(param_3 + 0x20,4,'\0');
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    uStack_44 = CONCAT31(uStack_44._1_3_,1);
    uStack_64 = uStack_44;
    local_48 = local_68;
  }
  else {
    local_68 = *(uint *)(param_3 + 800);
    uStack_40 = *(undefined4 *)(param_3 + 0x328);
    uStack_3c = *(undefined4 *)(param_3 + 0x32c);
    local_58 = *(undefined8 *)(param_3 + 0x330);
    uStack_50 = *(undefined8 *)(param_3 + 0x338);
    uStack_64 = *(undefined4 *)(param_3 + 0x324);
  }
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  FUN_1800edd10((uint *)(param_3 + 0x20),param_4,uVar1,&local_68);
  return local_68;
}


/*
 * FUN_180071c38 at 180071c38
 * uint __fastcall FUN_180071c38(undefined8 param_1, uint param_2, uint * param_3, longlong * param_4, char param_5)
 * Address ranges: 180071c38-180071d49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180071c38(undefined8 param_1,uint param_2,uint *param_3,longlong *param_4,char param_5)

{
  uint uVar1;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
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
    local_68 = FUN_1800ec8c0((longlong)param_3,4,'\0');
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    uStack_44 = CONCAT31(uStack_44._1_3_,1);
    uStack_64 = uStack_44;
    local_48 = local_68;
  }
  else {
    local_68 = param_3[0xd0];
    uStack_40 = param_3[0xd2];
    uStack_3c = param_3[0xd3];
    local_58 = *(undefined8 *)(param_3 + 0xd4);
    uStack_50 = *(undefined8 *)(param_3 + 0xd6);
    uStack_64 = param_3[0xd1];
  }
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  FUN_1800edd10(param_3,param_4,uVar1,&local_68);
  return local_68;
}


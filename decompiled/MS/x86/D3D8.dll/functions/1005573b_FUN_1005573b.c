/*
 * FUN_1005573b at 1005573b
 * uint __stdcall FUN_1005573b(int * param_1, int param_2, uint param_3, uint param_4, uint param_5, char param_6)
 * Address ranges: 1005573b-1005591b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005573b(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,char param_6)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (uint)(byte)(&DAT_100b03a0)[(param_4 & 0xff) * 2];
  if (param_6 == '\0') {
    bVar2 = true;
    if (param_5 == 0) goto LAB_10055910;
    uVar1 = 0x36;
LAB_10055906:
    FUN_100a138c((int *)(param_2 + 0x18),param_1,uVar1);
  }
  else {
    if (param_6 == '\x02') {
      if (param_5 == 0) {
        param_5 = FUN_100a05ed(param_2 + 0x18,uVar1,'\x01');
      }
      uVar1 = 0x56;
      goto LAB_10055906;
    }
    if (param_6 == '\x03') {
      if (param_5 == 0) {
        param_5 = FUN_100a05ed(param_2 + 0x18,uVar1,'\x01');
      }
      uVar1 = 0x2b;
      goto LAB_10055906;
    }
    if (param_6 == '\x04') {
      if (param_5 == 0) {
        param_5 = FUN_100a05ed(param_2 + 0x18,uVar1,'\x01');
      }
      if ((param_4 & 7) != 0) {
        FUN_100a138c((int *)(param_2 + 0x18),param_1,0x2b);
      }
      if ((param_4 & 8) != 0) {
        FUN_100a138c((int *)(param_2 + 0x18),param_1,0x36);
      }
    }
    else if (param_6 == -1) {
      if (param_5 == 0) {
        param_5 = FUN_100a05ed(param_2 + 0x18,uVar1,'\x01');
      }
      FUN_100a138c((int *)(param_2 + 0x18),param_1,0x36);
    }
  }
  bVar2 = param_5 == 0;
LAB_10055910:
  if (!bVar2) {
    param_3 = param_5;
  }
  return param_3;
}


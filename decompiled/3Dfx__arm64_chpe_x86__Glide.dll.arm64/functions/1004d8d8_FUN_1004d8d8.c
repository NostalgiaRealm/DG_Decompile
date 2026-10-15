/*
 * FUN_1004d8d8 at 1004d8d8
 * undefined FUN_1004d8d8(void)
 * Address ranges: 1004d8d8-1004dbaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_1004d8d8(int *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                   ushort param_6,undefined1 param_7,undefined4 param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((param_2 & 0x4000) != 0) {
    uVar4 = param_3 & 0x10ff;
    if ((param_3 & 0xf0) != 0x80 && (param_3 & 0xf0) != 0xf0 ||
        ((param_6 & 0x10ff) == uVar4 || ((param_4 & 0x10ff) == uVar4 || (param_5 & 0x10ff) == uVar4)
        )) {
      param_3 = FUN_1004d708(param_1,param_4,param_5,param_6,0,param_7,0);
    }
    FUN_1004d210(param_1,param_3,1);
    FUN_1004d320(param_1,0,param_2,0xff,0,0);
    piVar1 = param_1 + 0x5d;
    iVar7 = 0x3f008081;
    if ((~(param_2 >> 0xd) & 1) == 0) {
      iVar7 = 0x43000000;
    }
    piVar1[0] = 5;
    piVar1[1] = 0x4006;
    param_1[0x62] = iVar7;
    param_1[0x60] = iVar7;
    param_1[0x5f] = iVar7;
    param_1[0x61] = iVar7;
    piVar2 = param_1 + 0x55;
    piVar3 = param_1 + 0x4d;
    uVar5 = 0x31;
    if ((param_2 & 0xf00) != 0x100) {
      uVar5 = 0x1d;
    }
    FUN_10070058(param_8,uVar5 | (*piVar3 + *piVar2 + 6U & 0x7f) << 0x18,piVar3,piVar2,piVar1,0);
    FUN_1004d210(param_1,param_3,param_7);
    FUN_1004d320(param_1,0,param_3,0,0,0);
    uVar5 = FUN_1004d850(param_1,param_3,0xa4);
    param_1[2] = param_1[2] | 1;
    if (*param_1 == 0x51) {
      param_1[0x61] = 5;
      uVar5 = (uVar5 & 0xff) << 4 | 0x308006;
      iVar6 = 0;
      iVar7 = 4;
    }
    else {
      uVar5 = (uVar5 & 0xff) << 4 | 0x208006;
      iVar6 = 5;
      iVar7 = 3;
    }
    *piVar1 = iVar7;
    param_1[0x5e] = uVar5;
    param_1[0x5f] = 0;
    param_1[0x60] = iVar6;
    uVar5 = FUN_1004d850(param_1,param_3,0xa4);
    param_1[0x66] = (uVar5 & 0xff) << 4 | 0x101006;
    param_1[0x67] = 2;
    param_1[0x65] = 2;
    FUN_10070058(param_8,(*piVar3 + *piVar2 + *piVar1 + 3U & 0x7f) << 0x18 | 0x37,piVar3,piVar2,
                 piVar1,param_1 + 0x65);
    param_2 = param_3 | 0x2000;
  }
  return param_2;
}


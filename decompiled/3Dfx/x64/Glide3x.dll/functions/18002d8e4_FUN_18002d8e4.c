/*
 * FUN_18002d8e4 at 18002d8e4
 * ushort __fastcall FUN_18002d8e4(int * param_1, ushort param_2, ushort param_3, ushort param_4, ushort param_5, ushort param_6, byte param_7, longlong * param_8)
 * Address ranges: 18002d8e4-18002db4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_18002d8e4(int *param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                    ushort param_6,byte param_7,longlong *param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar6 = (uint)param_3;
  if ((param_2 >> 0xe & 1) != 0) {
    uVar7 = param_3 & 0x10ff;
    if ((((uVar6 & 0xf0) != 0x80) && ((uVar6 & 0xf0) != 0xf0)) ||
       (uVar7 == (param_6 & 0x10ff) || (uVar7 == (param_4 & 0x10ff) || uVar7 == (param_5 & 0x10ff)))
       ) {
      uVar7 = FUN_18002d760((longlong)param_1,param_4,param_5,param_6,0,param_7,'\0');
      uVar6 = (uint)uVar7;
    }
    uVar4 = 0x1d;
    if ((param_2 & 0xf00) == 0x100) {
      uVar4 = 0x31;
    }
    if ((param_2 >> 0xd & 1) == 0) {
      iVar8 = 0x3f008081;
    }
    else {
      iVar8 = 0x43000000;
    }
    uVar7 = (ushort)uVar6;
    iVar9 = iVar8;
    iVar10 = iVar8;
    iVar11 = iVar8;
    FUN_18002d0b8((longlong)param_1,uVar7,1);
    FUN_18002d248(param_1,0,param_2,0xff,0,'\0');
    puVar1 = (uint *)(param_1 + 0x5f);
    *puVar1 = 5;
    puVar2 = (uint *)(param_1 + 0x4f);
    param_1[0x60] = 0x4006;
    puVar3 = (uint *)(param_1 + 0x57);
    param_1[0x61] = iVar8;
    param_1[0x62] = iVar9;
    param_1[99] = iVar10;
    param_1[100] = iVar11;
    FUN_180057998(param_8,(*puVar2 + *puVar3) * 0x1000000 + 0x6000000 & 0x7f000000 | uVar4,puVar2,
                  puVar3,puVar1,(uint *)0x0);
    FUN_18002d0b8((longlong)param_1,uVar7,param_7);
    FUN_18002d248(param_1,0,uVar7,0,0,'\0');
    uVar5 = FUN_18002d8ac((longlong)param_1,uVar6,0xa4);
    FUN_18002d248(param_1,1,0x50,(byte)uVar5,0,'\0');
    uVar5 = FUN_18002d8ac((longlong)param_1,uVar6,0xa4);
    FUN_18002d248(param_1,2,0x40,(byte)uVar5,0,'\0');
    FUN_180057998(param_8,(param_1[0x67] + *puVar1 + *puVar3 + *puVar2) * 0x1000000 + 0x1000000 &
                          0x7f000000 | 0x37,puVar2,puVar3,puVar1,(uint *)(param_1 + 0x67));
    param_2 = uVar7 | 0x2000;
  }
  return param_2;
}


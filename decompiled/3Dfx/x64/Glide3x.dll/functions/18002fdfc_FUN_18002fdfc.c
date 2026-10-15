/*
 * FUN_18002fdfc at 18002fdfc
 * undefined __fastcall FUN_18002fdfc(ushort * param_1, ushort param_2, ushort param_3, uint param_4, uint param_5, uint param_6, uint * param_7, longlong * param_8)
 * Address ranges: 18002fdfc-180030536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fdfc(ushort *param_1,ushort param_2,ushort param_3,uint param_4,uint param_5,
                  uint param_6,uint *param_7,longlong *param_8)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  
  puVar1 = param_7;
  uVar2 = FUN_18002d760((longlong)param_7,*param_1,param_1[1],param_1[2],param_1[3],7,'\x01');
  FUN_18002d0b8((longlong)param_7,uVar2,7);
  if ((param_2 & 0xf0) == 0) {
    uVar10 = param_2 | 0x2000;
  }
  else {
    FUN_18002f4ec((int *)param_7,param_8,param_2,0xa4,uVar2,uVar2,7,0.01,'\x01');
    uVar10 = uVar2;
  }
  param_7._0_2_ = 0;
  if (param_5 == 0) {
LAB_18003018f:
    if (param_4 == 0) goto LAB_180030351;
  }
  else {
    uVar3 = uVar2;
    if (uVar10 == uVar2) {
      uVar3 = FUN_18002d760((longlong)puVar1,0,0,0,0,7,'\0');
    }
    uVar4 = FUN_18002d760((longlong)puVar1,0,0,0,0,7,'\0');
    param_7._0_2_ = uVar2;
    if (param_4 != 0) {
      param_7._0_2_ = uVar3;
    }
    FUN_18002d0b8((longlong)puVar1,uVar4,7);
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar4,0xa4);
    FUN_18002d248((int *)puVar1,0,uVar10,(byte)uVar6,0,'\x01');
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar4,0xa4);
    uVar5 = FUN_180056924(puVar1,puVar1 + 0x60,(ulonglong)puVar1[0x14],param_6,(byte)uVar6,0,0);
    puVar8 = puVar1 + 0x57;
    puVar12 = puVar1 + 0x4f;
    puVar11 = puVar1 + 0x5f;
    *puVar11 = uVar5;
    FUN_180057998(param_8,(*puVar8 + *puVar12 + uVar5) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x50,
                  puVar12,puVar11,puVar8,(uint *)0x0);
    FUN_18002d0b8((longlong)puVar1,uVar3,7);
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar3,0xa4);
    FUN_18002d248((int *)puVar1,0,uVar10,(byte)uVar6,0,'\x01');
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar3,0xa4);
    uVar5 = FUN_180056924(puVar1,puVar1 + 0x60,(ulonglong)puVar1[0x14],param_5,(byte)uVar6,0,0);
    *puVar11 = uVar5;
    FUN_180057998(param_8,(*puVar8 + *puVar12 + uVar5) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x50,
                  puVar12,puVar8,puVar11,(uint *)0x0);
    FUN_18002d0b8((longlong)puVar1,(ushort)param_7,7);
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)(ushort)param_7,0xa4);
    FUN_18002d248((int *)puVar1,0,uVar3,(byte)uVar6,0,'\0');
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)(ushort)param_7,0xa4);
    FUN_18002d248((int *)puVar1,1,uVar4,(byte)uVar6,0,'\0');
    FUN_180057998(param_8,(*puVar11 + *puVar8 + *puVar12) * 0x1000000 + 0x1000000 & 0x7f000000 | 1,
                  puVar12,puVar8,puVar11,(uint *)0x0);
    FUN_18002d870((longlong)puVar1,uVar4);
    if (param_4 == 0) {
      if (uVar3 == uVar2) goto LAB_180030351;
      FUN_18002d870((longlong)puVar1,uVar3);
      goto LAB_18003018f;
    }
  }
  puVar11 = puVar1 + 0x4f;
  puVar12 = puVar1 + 0x57;
  puVar8 = puVar1 + 0x5f;
  uVar3 = uVar2;
  if ((ushort)param_7 == uVar2) {
    uVar3 = FUN_18002d760((longlong)puVar1,0,0,0,0,7,'\0');
  }
  FUN_18002d0b8((longlong)puVar1,uVar3,7);
  uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar3,0xa4);
  FUN_18002d248((int *)puVar1,0,uVar10,(byte)uVar6,0,'\x01');
  uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar3,0xe4);
  uVar5 = FUN_180056924(puVar1,puVar1 + 0x60,(ulonglong)puVar1[0x14],param_4,(byte)uVar6,0,0);
  *puVar8 = uVar5;
  FUN_180057998(param_8,(*puVar12 + *puVar11 + uVar5) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x20,
                puVar11,puVar12,puVar8,(uint *)0x0);
  if ((ushort)param_7 != 0) {
    FUN_18002d0b8((longlong)puVar1,uVar2,7);
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar2,0xa4);
    FUN_18002d248((int *)puVar1,0,(ushort)param_7,(byte)uVar6,0,'\0');
    uVar6 = FUN_18002d8ac((longlong)puVar1,(uint)uVar2,0xa4);
    FUN_18002d248((int *)puVar1,1,uVar3,(byte)uVar6,0,'\0');
    FUN_180057998(param_8,(*puVar8 + *puVar12 + *puVar11) * 0x1000000 + 0x1000000 & 0x7f000000 |
                          0x3c,puVar11,puVar12,puVar8,(uint *)0x0);
  }
  if ((ushort)param_7 == uVar2) {
    FUN_18002d870((longlong)puVar1,uVar3);
  }
LAB_180030351:
  puVar8 = puVar1 + 0x4f;
  puVar11 = puVar1 + 0x57;
  puVar12 = puVar1 + 0x5f;
  FUN_18002d0b8((longlong)puVar1,uVar2,1);
  FUN_18002d248((int *)puVar1,0,uVar2,0,0,'\0');
  FUN_18002d248((int *)puVar1,1,uVar2,0x55,0,'\0');
  uVar5 = (*puVar12 + *puVar11 + *puVar8) * 0x1000000 + 0x1000000 & 0x7f000000 | 1;
  FUN_180057998(param_8,uVar5,puVar8,puVar11,puVar12,(uint *)0x0);
  FUN_18002d248((int *)puVar1,1,uVar2,0xaa,0,'\0');
  uVar7 = (ulonglong)uVar5;
  FUN_180057998(param_8,uVar5,puVar8,puVar11,puVar12,(uint *)0x0);
  if (((byte)param_3 & 0xf0) == 0x10) {
    FUN_180057998(param_8,(*puVar11 + *puVar8) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x3b,puVar8,
                  puVar11,(uint *)0x0,(uint *)0x0);
    FUN_18002d0b8((longlong)puVar1,param_3,0xf);
    FUN_18002d248((int *)puVar1,0,param_3,0xe4,0,'\0');
    FUN_18002d248((int *)puVar1,1,uVar2,0,0,'\0');
    uVar5 = (*puVar12 + *puVar11 + *puVar8) * 0x1000000 + 0x1000000 & 0x7f000000 | 1;
    puVar9 = puVar11;
  }
  else {
    FUN_18002d6a8((longlong)puVar1,uVar7,(uint)uVar2,0);
    puVar12 = (uint *)0x0;
    uVar5 = *puVar11 * 0x1000000 + 0x1000000 & 0x7f000000 | 0x4000d;
    puVar9 = (uint *)0x0;
    puVar8 = puVar11;
  }
  FUN_180057998(param_8,uVar5,puVar8,puVar9,puVar12,(uint *)0x0);
  FUN_18002d870((longlong)puVar1,(ushort)param_7);
  FUN_18002d870((longlong)puVar1,uVar2);
  *(undefined1 *)(puVar1 + 0x2b) = 0;
  return;
}


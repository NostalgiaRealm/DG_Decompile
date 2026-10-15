/*
 * FUN_100277fd at 100277fd
 * longlong __fastcall FUN_100277fd(uint * param_1, uint param_2)
 * Address ranges: 100277fd-10027aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_100277fd(uint *param_1,uint param_2)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  uint in_EAX;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  
  switch(param_2) {
  case 0:
    return CONCAT44(param_2,in_EAX);
  case 1:
    goto LAB_1002783b;
  case 2:
    goto LAB_1002783b;
  case 3:
    break;
  default:
    uVar3 = *param_1;
    auVar2[0xc] = (char)(uVar3 >> 0x18);
    auVar2._0_12_ = ZEXT712(0);
    auVar11._0_4_ = (float)(uVar3 & 0xff);
    auVar11._4_4_ = (float)(uVar3 >> 8 & 0xff);
    auVar11._8_4_ = (float)(int)CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar3 >> 0x10));
    auVar11._12_4_ = (float)(uint3)(auVar2._10_3_ >> 0x10);
    divps(auVar11,_DAT_100d97d0);
    return (ulonglong)param_2 << 0x20;
  case 5:
    in_EAX = 0;
    break;
  case 6:
    in_EAX = (uint)(short)*param_1;
    goto LAB_1002783b;
  case 7:
    in_EAX = (uint)*(short *)((int)param_1 + 6);
LAB_1002783b:
    return CONCAT44(param_2,in_EAX);
  case 8:
    uVar3 = *param_1;
    in_EAX = 0;
    auVar1[0xc] = (char)(uVar3 >> 0x18);
    auVar1._0_12_ = ZEXT712(0);
    auVar5._0_4_ = (float)(uVar3 & 0xff);
    auVar5._4_4_ = (float)(uVar3 >> 8 & 0xff);
    auVar5._8_4_ = (float)(int)CONCAT32(auVar1._10_3_,(ushort)(byte)(uVar3 >> 0x10));
    auVar5._12_4_ = (float)(uint3)(auVar1._10_3_ >> 0x10);
    divps(auVar5,_DAT_100d97d0);
    break;
  case 9:
    in_EAX = (uint)*(short *)((int)param_1 + 2);
    uVar4 = (ulonglong)(uint)(float)(int)(short)*param_1;
    fVar12 = 32767.0;
    uVar3 = in_EAX;
    goto LAB_10027914;
  case 10:
    in_EAX = (uint)*(short *)((int)param_1 + 6);
    fVar12 = (float)(int)in_EAX;
    uVar4 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    uVar3 = (int)*(short *)((int)param_1 + 2);
LAB_10027914:
    auVar7._8_4_ = (int)(uVar4 >> 0x20);
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = fVar12;
    auVar6._8_8_ = auVar7._8_8_;
    auVar6._0_4_ = (undefined4)uVar4;
    auVar6._4_4_ = (float)(int)uVar3;
    divps(auVar6,_DAT_100d9800);
    break;
  case 0xb:
    in_EAX = (uint)*(short *)((int)param_1 + 2);
    uVar4 = (ulonglong)(uint)(float)(int)(short)*param_1;
    fVar12 = 65535.0;
    uVar3 = in_EAX;
    goto LAB_10027976;
  case 0xc:
    in_EAX = (uint)*(short *)((int)param_1 + 6);
    fVar12 = (float)(int)in_EAX;
    uVar4 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    uVar3 = (int)*(short *)((int)param_1 + 2);
LAB_10027976:
    auVar9._8_4_ = (int)(uVar4 >> 0x20);
    auVar9._0_8_ = uVar4;
    auVar9._12_4_ = fVar12;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._0_4_ = (undefined4)uVar4;
    auVar8._4_4_ = (float)(int)uVar3;
    divps(auVar8,_DAT_100d9810);
    break;
  case 0xd:
    in_EAX = 0;
    goto LAB_10027a50;
  case 0xe:
LAB_10027a50:
    return CONCAT44(param_2,in_EAX);
  case 0xf:
    param_2 = *param_1 & 0x3ff;
    in_EAX = *param_1 >> 10 & 0x3ff;
    break;
  case 0x10:
    uVar3 = *param_1;
    param_2 = uVar3 << 0x16;
    in_EAX = uVar3 << 2;
    auVar10._0_4_ = (float)((int)param_2 >> 0x16);
    auVar10._4_4_ = (float)((int)(uVar3 << 0xc) >> 0x16);
    auVar10._8_4_ = (float)((int)in_EAX >> 0x16);
    auVar10._12_4_ = 0x43ff8000;
    divps(auVar10,_DAT_100d97e0);
  }
  return CONCAT44(param_2,in_EAX);
}


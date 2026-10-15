/*
 * FUN_10026de3 at 10026de3
 * ulonglong __fastcall FUN_10026de3(uint * param_1, uint param_2)
 * Address ranges: 10026de3-100270c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall FUN_10026de3(uint *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  
  switch(param_2) {
  case 0:
    return CONCAT44(param_2,in_EAX);
  case 1:
    return CONCAT44(param_2,in_EAX);
  default:
    return CONCAT44(param_2,in_EAX);
  case 3:
    return CONCAT44(param_2,in_EAX);
  case 4:
    uVar2 = *param_1;
    auVar3[0xc] = (char)(uVar2 >> 0x18);
    auVar3._0_12_ = ZEXT712(0);
    auVar8._0_4_ = (float)(uVar2 & 0xff);
    auVar8._4_4_ = (float)(uVar2 >> 8 & 0xff);
    auVar8._8_4_ = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar8._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
    divps(auVar8,_DAT_100d97d0);
    return (ulonglong)param_2 << 0x20;
  case 5:
    return (ulonglong)param_2 << 0x20;
  case 6:
    sVar1 = *(short *)((int)param_1 + 2);
    break;
  case 7:
    sVar1 = *(short *)((int)param_1 + 6);
    break;
  case 8:
    uVar2 = *param_1;
    auVar4[0xc] = (char)(uVar2 >> 0x18);
    auVar4._0_12_ = ZEXT712(0);
    auVar9._0_4_ = (float)(uVar2 & 0xff);
    auVar9._4_4_ = (float)(uVar2 >> 8 & 0xff);
    auVar9._8_4_ = (float)(int)CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar9._12_4_ = (float)(uint3)(auVar4._10_3_ >> 0x10);
    divps(auVar9,_DAT_100d97d0);
    return (ulonglong)param_2 << 0x20;
  case 9:
    iVar6 = (int)*(short *)((int)param_1 + 2);
    uVar7 = (ulonglong)(uint)(float)(int)(short)*param_1;
    fVar15 = 32767.0;
    iVar5 = iVar6;
    goto LAB_10026f0f;
  case 10:
    iVar6 = (int)*(short *)((int)param_1 + 6);
    fVar15 = (float)iVar6;
    uVar7 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    iVar5 = (int)*(short *)((int)param_1 + 2);
LAB_10026f0f:
    auVar11._8_4_ = (int)(uVar7 >> 0x20);
    auVar11._0_8_ = uVar7;
    auVar11._12_4_ = fVar15;
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_4_ = (undefined4)uVar7;
    auVar10._4_4_ = (float)iVar5;
    divps(auVar10,_DAT_100d9800);
    return CONCAT44(param_2,iVar6);
  case 0xb:
    iVar6 = (int)*(short *)((int)param_1 + 2);
    uVar7 = (ulonglong)(uint)(float)(int)(short)*param_1;
    fVar15 = 65535.0;
    iVar5 = iVar6;
    goto LAB_10026f6e;
  case 0xc:
    iVar6 = (int)*(short *)((int)param_1 + 6);
    fVar15 = (float)iVar6;
    uVar7 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    iVar5 = (int)*(short *)((int)param_1 + 2);
LAB_10026f6e:
    auVar13._8_4_ = (int)(uVar7 >> 0x20);
    auVar13._0_8_ = uVar7;
    auVar13._12_4_ = fVar15;
    auVar12._8_8_ = auVar13._8_8_;
    auVar12._0_4_ = (undefined4)uVar7;
    auVar12._4_4_ = (float)iVar5;
    divps(auVar12,_DAT_100d9810);
    return CONCAT44(param_2,iVar6);
  case 0xd:
    in_EAX = 0;
    goto LAB_1002703f;
  case 0xe:
LAB_1002703f:
    return CONCAT44(param_2,in_EAX);
  case 0xf:
    return CONCAT44(*param_1,*param_1 >> 10) & 0x3ff000003ff;
  case 0x10:
    uVar2 = *param_1;
    auVar14._0_4_ = (float)((int)(uVar2 << 0x16) >> 0x16);
    auVar14._4_4_ = (float)((int)(uVar2 << 0xc) >> 0x16);
    auVar14._8_4_ = (float)((int)(uVar2 << 2) >> 0x16);
    auVar14._12_4_ = 0x43ff8000;
    divps(auVar14,_DAT_100d97e0);
    return CONCAT44(uVar2 << 0x16,uVar2 << 2);
  }
  return CONCAT44(param_2,(int)sVar1);
}


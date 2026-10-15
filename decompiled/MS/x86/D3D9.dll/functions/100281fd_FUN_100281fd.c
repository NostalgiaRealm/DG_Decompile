/*
 * FUN_100281fd at 100281fd
 * ulonglong __fastcall FUN_100281fd(uint * param_1, int param_2)
 * Address ranges: 100281fd-100284df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall FUN_100281fd(uint *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  
  uVar7 = param_2 - 1;
  switch(uVar7) {
  case 0:
    return CONCAT44(uVar7,in_EAX);
  case 1:
    return CONCAT44(uVar7,in_EAX);
  case 2:
    return CONCAT44(uVar7,in_EAX);
  case 3:
    uVar2 = *param_1;
    auVar3[0xc] = (char)(uVar2 >> 0x18);
    auVar3._0_12_ = ZEXT712(0);
    auVar9._0_4_ = (float)(uVar2 & 0xff);
    auVar9._4_4_ = (float)(uVar2 >> 8 & 0xff);
    auVar9._8_4_ = (float)(int)CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar9._12_4_ = (float)(uint3)(auVar3._10_3_ >> 0x10);
    divps(auVar9,_DAT_100d97d0);
    return (ulonglong)uVar7 << 0x20;
  case 4:
    return (ulonglong)uVar7 << 0x20;
  case 5:
    sVar1 = *(short *)((int)param_1 + 2);
    break;
  case 6:
    sVar1 = *(short *)((int)param_1 + 6);
    break;
  case 7:
    uVar2 = *param_1;
    auVar4[0xc] = (char)(uVar2 >> 0x18);
    auVar4._0_12_ = ZEXT712(0);
    auVar10._0_4_ = (float)(uVar2 & 0xff);
    auVar10._4_4_ = (float)(uVar2 >> 8 & 0xff);
    auVar10._8_4_ = (float)(int)CONCAT32(auVar4._10_3_,(ushort)(byte)(uVar2 >> 0x10));
    auVar10._12_4_ = (float)(uint3)(auVar4._10_3_ >> 0x10);
    divps(auVar10,_DAT_100d97d0);
    return (ulonglong)uVar7 << 0x20;
  case 8:
    iVar6 = (int)*(short *)((int)param_1 + 2);
    uVar8 = (ulonglong)(uint)(float)(int)(short)*param_1;
    fVar16 = 32767.0;
    iVar5 = iVar6;
    goto LAB_10028308;
  case 9:
    iVar6 = (int)*(short *)((int)param_1 + 6);
    fVar16 = (float)iVar6;
    uVar8 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    iVar5 = (int)*(short *)((int)param_1 + 2);
LAB_10028308:
    auVar12._8_4_ = (int)(uVar8 >> 0x20);
    auVar12._0_8_ = uVar8;
    auVar12._12_4_ = fVar16;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._0_4_ = (undefined4)uVar8;
    auVar11._4_4_ = (float)iVar5;
    divps(auVar11,_DAT_100d9800);
    return CONCAT44(uVar7,iVar6);
  case 10:
    iVar6 = (int)*(short *)((int)param_1 + 2);
    uVar8 = (ulonglong)(uint)(float)(int)(short)*param_1;
    fVar16 = 65535.0;
    iVar5 = iVar6;
    goto LAB_10028367;
  case 0xb:
    iVar6 = (int)*(short *)((int)param_1 + 6);
    fVar16 = (float)iVar6;
    uVar8 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    iVar5 = (int)*(short *)((int)param_1 + 2);
LAB_10028367:
    auVar14._8_4_ = (int)(uVar8 >> 0x20);
    auVar14._0_8_ = uVar8;
    auVar14._12_4_ = fVar16;
    auVar13._8_8_ = auVar14._8_8_;
    auVar13._0_4_ = (undefined4)uVar8;
    auVar13._4_4_ = (float)iVar5;
    divps(auVar13,_DAT_100d9810);
    return CONCAT44(uVar7,iVar6);
  case 0xc:
    in_EAX = 0;
    goto LAB_10028438;
  case 0xd:
LAB_10028438:
    return CONCAT44(uVar7,in_EAX);
  case 0xe:
    return CONCAT44(*param_1,*param_1 >> 10) & 0x3ff000003ff;
  case 0xf:
    uVar7 = *param_1;
    auVar15._0_4_ = (float)((int)(uVar7 << 0x16) >> 0x16);
    auVar15._4_4_ = (float)((int)(uVar7 << 0xc) >> 0x16);
    auVar15._8_4_ = (float)((int)(uVar7 << 2) >> 0x16);
    auVar15._12_4_ = 0x43ff8000;
    divps(auVar15,_DAT_100d97e0);
    return CONCAT44(uVar7 << 0x16,uVar7 << 2);
  default:
    return CONCAT44(uVar7,in_EAX);
  }
  return CONCAT44(uVar7,(int)sVar1);
}


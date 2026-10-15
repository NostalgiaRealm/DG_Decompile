/*
 * FUN_10027b35 at 10027b35
 * longlong __fastcall FUN_10027b35(uint * param_1, uint param_2)
 * Address ranges: 10027b35-10027e42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_10027b35(uint *param_1,uint param_2)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    return (ulonglong)param_2 << 0x20;
  case 5:
    in_EAX = 0;
    break;
  case 6:
    sVar1 = *(short *)((int)param_1 + 2);
    goto LAB_10027be8;
  case 7:
    sVar1 = *(short *)((int)param_1 + 6);
LAB_10027be8:
    in_EAX = (uint)sVar1;
    break;
  case 8:
    in_EAX = 0;
    break;
  case 9:
    uVar5 = (ulonglong)(uint)(float)(int)(short)*param_1;
    in_EAX = (uint)*(short *)((int)param_1 + 2);
    fVar3 = 32767.0;
    uVar2 = in_EAX;
    goto LAB_10027c68;
  case 10:
    in_EAX = (uint)*(short *)((int)param_1 + 6);
    fVar3 = (float)(int)in_EAX;
    uVar5 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    uVar2 = (int)*(short *)((int)param_1 + 2);
LAB_10027c68:
    auVar7._8_4_ = (int)(uVar5 >> 0x20);
    auVar7._0_8_ = uVar5;
    auVar7._12_4_ = fVar3;
    auVar6._8_8_ = auVar7._8_8_;
    auVar6._0_4_ = (undefined4)uVar5;
    auVar6._4_4_ = (float)(int)uVar2;
    divps(auVar6,_DAT_100d9800);
    break;
  case 0xb:
    uVar5 = (ulonglong)(uint)(float)(int)(short)*param_1;
    in_EAX = (uint)*(short *)((int)param_1 + 2);
    fVar3 = 65535.0;
    uVar2 = in_EAX;
    goto LAB_10027cca;
  case 0xc:
    in_EAX = (uint)*(short *)((int)param_1 + 6);
    fVar3 = (float)(int)in_EAX;
    uVar5 = CONCAT44((float)(int)(short)param_1[1],(float)(int)(short)*param_1);
    uVar2 = (int)*(short *)((int)param_1 + 2);
LAB_10027cca:
    auVar9._8_4_ = (int)(uVar5 >> 0x20);
    auVar9._0_8_ = uVar5;
    auVar9._12_4_ = fVar3;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._0_4_ = (undefined4)uVar5;
    auVar8._4_4_ = (float)(int)uVar2;
    divps(auVar8,_DAT_100d9810);
    break;
  case 0xd:
    in_EAX = 0;
    break;
  case 0xe:
    break;
  case 0xf:
    param_2 = *param_1 & 0x3ff;
    in_EAX = *param_1 >> 10 & 0x3ff;
    break;
  case 0x10:
    uVar2 = *param_1;
    param_2 = uVar2 << 0x16;
    in_EAX = uVar2 << 2;
    auVar4._0_4_ = (float)((int)param_2 >> 0x16);
    auVar4._4_4_ = (float)((int)(uVar2 << 0xc) >> 0x16);
    auVar4._8_4_ = (float)((int)in_EAX >> 0x16);
    auVar4._12_4_ = 0x43ff8000;
    divps(auVar4,_DAT_100d97e0);
  }
  return CONCAT44(param_2,in_EAX);
}


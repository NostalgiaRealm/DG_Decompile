/*
 * FUN_10026db5 at 10026db5
 * byte __fastcall FUN_10026db5(int * param_1, ushort param_2, uint param_3, byte param_4, byte param_5, void * param_6, char param_7)
 * Address ranges: 10026db5-100270dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __fastcall
FUN_10026db5(int *param_1,ushort param_2,uint param_3,byte param_4,byte param_5,void *param_6,
            char param_7)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_EDX;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  int *piVar14;
  int *piVar15;
  
  cVar6 = FUN_10023e61();
  if ((cVar6 != '\0') || (((ushort)extraout_EDX & 0xff0) == 0x100)) {
    param_4 = 0;
  }
  uVar8 = FUN_10026b80(param_1,extraout_EDX,param_3,0,0,0,param_5,param_6);
  uVar10 = uVar8 & 0xffff;
  bVar5 = 1;
  if ((((byte)param_3 & 0xf0) == 0x70) || (param_4 != 0)) {
    param_7 = '\x01';
  }
  if (param_5 == 0xf) {
    bVar7 = 0xe4;
  }
  else {
    bVar7 = ((param_5 != 7) - 1U & 0xa5) - 1;
  }
  bVar7 = FUN_10026b29((int)param_1,param_3,bVar7);
  FUN_1002657e((int)param_1,(ushort)param_3,param_5);
  FUN_1002664a(param_1,0,uVar10,bVar7,0,'\0');
  piVar1 = param_1 + 0x4d;
  piVar2 = param_1 + 0x55;
  uVar11 = *piVar1 + *piVar2 + 1;
  uVar3 = (ushort)uVar8;
  uVar9 = -(uint)((uVar3 & 0xff0) != 0x100) & uVar8 & 0xf00;
  if (uVar9 == 0) {
    if (((uVar8 & 0x2000) == 0) || (param_7 == '\0')) {
      if (param_4 == 1) {
        piVar15 = (int *)0x0;
        uVar8 = (*piVar2 + uVar11 & 0x7f) << 0x18 | 0x2000;
        piVar14 = piVar2;
        goto LAB_100270b3;
      }
      if (param_4 != 2) {
        piVar15 = (int *)0x0;
        piVar14 = (int *)0x0;
        uVar8 = (uVar11 & 0x7f) << 0x18 | 0x36;
        goto LAB_1002707c;
      }
      fVar4 = 4.0;
    }
    else {
      fVar4 = (float)(1 << (param_4 & 0x1f)) / 255.0;
    }
    piVar14 = param_1 + 0x5d;
    FUN_100269ca(piVar14,bVar7,(int)fVar4);
    piVar15 = (int *)0x0;
    uVar8 = (*piVar14 + uVar11 & 0x7f) << 0x18 | 0x2038;
  }
  else {
    if (uVar9 != 0x100) {
      if ((uVar9 != 0x300) && (uVar9 != 0x500)) goto LAB_100270bf;
      param_7 = '\x01';
    }
    if (((uVar8 & 0x2000) == 0) || (param_7 == '\0')) {
      fVar12 = FUN_100241f5(uVar10);
      piVar14 = param_1 + 0x5d;
      if (param_4 == 0) {
        FUN_100269ca(piVar14,bVar7,(int)(float)fVar12);
        piVar15 = (int *)0x0;
        uVar8 = (*piVar14 + uVar11 & 0x7f) << 0x18 | ~uVar10 & 0x2000;
      }
      else {
        fVar13 = (float10)FUN_100269ca(param_1 + 0x5d,bVar7,(int)(float)(1 << (param_4 & 0x1f)));
        piVar15 = param_1 + 0x65;
        FUN_100269ca(piVar15,bVar7,(int)(float)(fVar13 * (float10)(float)fVar12));
        uVar8 = (*piVar15 + *piVar14 + uVar11 & 0x7f) << 0x18 | 0x2032;
      }
LAB_1002707c:
      FUN_1004e6d0(param_6,uVar8,piVar1,piVar2,piVar14,piVar15);
      bVar5 = ~(byte)(uVar10 >> 0xd) & 1;
      goto LAB_100270bf;
    }
    piVar14 = param_1 + 0x5d;
    FUN_100269ca(piVar14,bVar7,0x3b808081);
    piVar15 = param_1 + 0x65;
    fVar12 = FUN_100241f5(uVar10);
    FUN_100269ca(piVar15,bVar7,(int)(float)(fVar12 / (float10)255.0));
    uVar8 = (*piVar15 + *piVar14 + uVar11 & 0x7f) << 0x18 | 0x2032;
  }
LAB_100270b3:
  FUN_1004e6d0(param_6,uVar8,piVar1,piVar2,piVar14,piVar15);
LAB_100270bf:
  if ((uVar3 != param_2) && (uVar3 != (ushort)param_3)) {
    FUN_10026afe((int)param_1,uVar10);
  }
  return bVar5;
}


/*
 * FUN_18001ea50 at 18001ea50
 * undefined FUN_18001ea50(void)
 * Address ranges: 18001ea50-18001eb33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [16] FUN_18001ea50(float *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  
  if (param_2 == 1) {
LAB_18001eb18:
    fVar7 = *param_1;
    fVar6 = param_1[1];
  }
  else {
    if (param_2 != 6) {
      if (param_2 == 9) {
        sVar1 = *(short *)((longlong)param_1 + 2);
        sVar2 = *(short *)param_1;
        fVar6 = 32767.0;
        fVar7 = 32767.0;
      }
      else {
        if (param_2 != 0xb) {
          if (param_2 == 0xd) {
            uVar3 = CONCAT44((float)(float2)((uint)*param_1 >> 0x10),(float)SUB42(*param_1,0));
            uVar5 = CONCAT44((float)FLOAT_UNKNOWN,(float)FLOAT_UNKNOWN);
            goto LAB_18001eb2c;
          }
          goto LAB_18001eb18;
        }
        sVar1 = *(short *)((longlong)param_1 + 2);
        sVar2 = *(short *)param_1;
        fVar6 = 65535.0;
        fVar7 = 65535.0;
      }
      uVar3 = CONCAT44((float)(int)sVar1 / fVar6,(float)(int)sVar2 / fVar6);
      uVar5 = CONCAT44(0.0 / fVar6,fVar7 / fVar6);
      goto LAB_18001eb2c;
    }
    fVar6 = (float)(int)*(short *)((longlong)param_1 + 2);
    fVar7 = (float)(int)*(short *)param_1;
  }
  uVar3 = CONCAT44(fVar6,fVar7);
  uVar5 = 0x3f800000;
LAB_18001eb2c:
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


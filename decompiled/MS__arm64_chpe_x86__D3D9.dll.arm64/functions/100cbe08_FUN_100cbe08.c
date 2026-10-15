/*
 * FUN_100cbe08 at 100cbe08
 * undefined FUN_100cbe08(void)
 * Address ranges: 100cbe08-100cbee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100cbe08(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                 ,float *param_6)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int extraout_w1;
  float fVar4;
  
  if ((param_5 & 1) == 0) {
    bVar2 = true;
    uVar3 = FUN_100cb1a8(param_1,param_2,param_3,param_4);
    iVar1 = extraout_w1 * 0x2c;
    *param_6 = (float)((uint)(byte)(&DAT_1016f238)[iVar1] & uVar3 >> 0x18) / 255.0;
    param_6[1] = (float)((uint)(byte)(&DAT_1016f239)[iVar1] & uVar3 >> 0x10) / 255.0;
    param_6[2] = (float)((uint)(byte)(&DAT_1016f23a)[iVar1] & uVar3 >> 8) / 255.0;
    fVar4 = (float)((byte)(&DAT_1016f23b)[iVar1] & uVar3) / 255.0;
  }
  else {
    param_6[2] = 0.0;
    fVar4 = 0.0;
    param_6[1] = 0.0;
    *param_6 = (float)param_4;
    bVar2 = param_4 == (int)(float)param_4;
  }
  param_6[3] = fVar4;
  return bVar2;
}


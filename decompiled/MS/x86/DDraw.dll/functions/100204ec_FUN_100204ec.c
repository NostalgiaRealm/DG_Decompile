/*
 * FUN_100204ec at 100204ec
 * undefined8 __stdcall FUN_100204ec(int param_1, int param_2, uint param_3, char param_4, float * param_5)
 * Address ranges: 100204ec-10020614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100204ec(int param_1,int param_2,uint param_3,char param_4,float *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  longlong lVar6;
  
  if (param_4 == '\0') {
    uVar2 = FUN_1001fb19(param_1,param_2,param_3);
    iVar3 = param_1 * 0x2c;
    puVar4 = &DAT_100693f0 + iVar3;
    *param_5 = ((float)((uint)(byte)(&DAT_10069418)[iVar3] & uVar2 >> 0x18) + 0.0) / 255.0;
    param_5[1] = ((float)((uint)(byte)(&DAT_10069419)[iVar3] & uVar2 >> 0x10) + 0.0) / 255.0;
    param_5[2] = ((float)((uint)(byte)(&DAT_1006941a)[iVar3] & uVar2 >> 8) + 0.0) / 255.0;
    uVar1 = 1;
    fVar5 = ((float)((byte)(&DAT_1006941b)[iVar3] & uVar2) + 0.0) / 255.0;
  }
  else {
    param_5[2] = 0.0;
    param_5[1] = 0.0;
    *param_5 = (float)((double)(int)param_3 + (double)(&DAT_10066fd0)[-((int)param_3 >> 0x1f)]);
    lVar6 = FUN_10061a10();
    puVar4 = (undefined *)((ulonglong)lVar6 >> 0x20);
    fVar5 = 0.0;
    uVar1 = CONCAT31((int3)((ulonglong)lVar6 >> 8),param_3 == (uint)lVar6);
  }
  param_5[3] = fVar5;
  return CONCAT44(puVar4,uVar1);
}


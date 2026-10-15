/*
 * FUN_100774d8 at 100774d8
 * undefined8 __stdcall FUN_100774d8(int param_1, int param_2, uint param_3, char param_4, float * param_5)
 * Address ranges: 100774d8-10077600
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100774d8(int param_1,int param_2,uint param_3,char param_4,float *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  longlong lVar6;
  
  if (param_4 == '\0') {
    uVar2 = FUN_10076aaf(param_1,param_2,param_3);
    iVar3 = param_1 * 0x2c;
    puVar4 = &DAT_100b8a58 + iVar3;
    *param_5 = ((float)((uint)(byte)(&DAT_100b8a80)[iVar3] & uVar2 >> 0x18) + 0.0) / 255.0;
    param_5[1] = ((float)((uint)(byte)(&DAT_100b8a81)[iVar3] & uVar2 >> 0x10) + 0.0) / 255.0;
    param_5[2] = ((float)((uint)(byte)(&DAT_100b8a82)[iVar3] & uVar2 >> 8) + 0.0) / 255.0;
    uVar1 = 1;
    fVar5 = ((float)((byte)(&DAT_100b8a83)[iVar3] & uVar2) + 0.0) / 255.0;
  }
  else {
    param_5[2] = 0.0;
    param_5[1] = 0.0;
    *param_5 = (float)((double)(int)param_3 + (double)(&DAT_100b5ce0)[-((int)param_3 >> 0x1f)]);
    lVar6 = FUN_100ae2c0();
    puVar4 = (undefined *)((ulonglong)lVar6 >> 0x20);
    fVar5 = 0.0;
    uVar1 = CONCAT31((int3)((ulonglong)lVar6 >> 8),param_3 == (uint)lVar6);
  }
  param_5[3] = fVar5;
  return CONCAT44(puVar4,uVar1);
}


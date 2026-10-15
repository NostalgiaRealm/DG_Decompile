/*
 * FUN_1008d688 at 1008d688
 * undefined8 __stdcall FUN_1008d688(int param_1, int param_2, uint param_3, char param_4, float * param_5)
 * Address ranges: 1008d688-1008d7b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1008d688(int param_1,int param_2,uint param_3,char param_4,float *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  float fVar5;
  longlong lVar6;
  
  if (param_4 == '\0') {
    uVar2 = FUN_1008cc6c(param_1,param_2,param_3);
    iVar3 = param_1 * 0x2c;
    puVar4 = &DAT_100dcd80 + iVar3;
    *param_5 = ((float)((uint)(byte)(&DAT_100dcda8)[iVar3] & uVar2 >> 0x18) + 0.0) / 255.0;
    param_5[1] = ((float)((uint)(byte)(&DAT_100dcda9)[iVar3] & uVar2 >> 0x10) + 0.0) / 255.0;
    param_5[2] = ((float)((uint)(byte)(&DAT_100dcdaa)[iVar3] & uVar2 >> 8) + 0.0) / 255.0;
    uVar1 = 1;
    fVar5 = ((float)((byte)(&DAT_100dcdab)[iVar3] & uVar2) + 0.0) / 255.0;
  }
  else {
    param_5[2] = 0.0;
    param_5[1] = 0.0;
    *param_5 = (float)((double)(int)param_3 + (double)(&DAT_100d97a0)[-((int)param_3 >> 0x1f)]);
    lVar6 = FUN_100d0ba0();
    puVar4 = (undefined *)((ulonglong)lVar6 >> 0x20);
    fVar5 = 0.0;
    uVar1 = CONCAT31((int3)((ulonglong)lVar6 >> 8),param_3 == (uint)lVar6);
  }
  param_5[3] = fVar5;
  return CONCAT44(puVar4,uVar1);
}


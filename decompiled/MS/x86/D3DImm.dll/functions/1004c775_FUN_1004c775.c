/*
 * FUN_1004c775 at 1004c775
 * undefined4 __thiscall FUN_1004c775(void * this, int * param_1)
 * Address ranges: 1004c775-1004c8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004c775(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  uVar4 = 0x80070057;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x2c) {
      uVar4 = 0x88760306;
      if (*(void **)((int)this + 0x84) != (void *)0x0) {
        local_28 = param_1[4];
        local_38 = 0x2c;
        iVar1 = param_1[1];
        iVar2 = param_1[3];
        local_30 = param_1[2];
        local_14 = 0;
        local_10 = 0x3f800000;
        uVar4 = 0x80070057;
        fVar6 = (float)((double)iVar2 + (double)(&DAT_100601f0)[-(iVar2 >> 0x1f)]) /
                ((float)param_1[5] + (float)param_1[5]);
        fVar8 = fVar6 * -1.0;
        fVar6 = fVar6 - fVar8;
        fVar7 = (float)((double)local_28 + (double)(&DAT_100601f0)[-(local_28 >> 0x1f)]) /
                ((float)param_1[6] + (float)param_1[6]);
        fVar5 = fVar7 + fVar7;
        local_34 = iVar1;
        local_2c = iVar2;
        local_24 = fVar8;
        local_20 = fVar7;
        local_1c = fVar6;
        local_18 = fVar5;
        local_c = local_28;
        local_8 = local_30;
        uVar3 = FUN_10040b88(*(void **)((int)this + 0x84),(int)&local_38);
        if ((char)uVar3 != '\0') {
          uVar4 = 0;
          *(undefined4 *)((int)this + 0xa4) = 0x2c;
          *(int *)((int)this + 0xa8) = iVar1;
          *(int *)((int)this + 0xac) = local_8;
          *(int *)((int)this + 0xb0) = iVar2;
          *(int *)((int)this + 0xb4) = local_c;
          *(float *)((int)this + 0xb8) = fVar8;
          *(float *)((int)this + 0xbc) = fVar7;
          *(float *)((int)this + 0xc0) = fVar6;
          *(float *)((int)this + 0xc4) = fVar5;
          *(undefined4 *)((int)this + 200) = 0;
          *(undefined4 *)((int)this + 0xcc) = 0x3f800000;
        }
        *(undefined1 *)((int)this + 0xd2) = 1;
        *(undefined1 *)((int)this + 0xd0) = 1;
      }
    }
  }
  return uVar4;
}


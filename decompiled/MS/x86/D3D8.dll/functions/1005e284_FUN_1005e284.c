/*
 * FUN_1005e284 at 1005e284
 * undefined __thiscall FUN_1005e284(void * this, undefined4 * param_1)
 * Address ranges: 1005e284-1005e4c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005e284(void *this,undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  void *this_00;
  int iVar3;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = *(int *)(*(int *)((int)this + 8) + 0x1c);
  if (iVar3 != 0) {
    fVar1 = (float)param_1[8];
    fVar2 = (float)param_1[7];
    FUN_100920c7(*(void **)(*(int *)((int)this + 4) + 0x1cf00),
                 *(int *)(*(int *)((int)this + 4) + 0x14),param_1[1],param_1[4],param_1[5],
                 fVar2 * 0.0 + (float)param_1[9],fVar1 * 0.0 + (float)param_1[10],
                 (float)((double)(int)param_1[2] +
                        (double)(&DAT_100b5ce0)[-((int)param_1[2] >> 0x1f)]) * fVar2 +
                 (float)param_1[9],
                 (float)((double)(int)param_1[3] +
                        (double)(&DAT_100b5ce0)[-((int)param_1[3] >> 0x1f)]) * fVar1 +
                 (float)param_1[10],
                 (float)((double)iVar3 + (double)(&DAT_100b5ce0)[-(iVar3 >> 0x1f)]) * fVar2,
                 (float)((double)iVar3 + (double)(&DAT_100b5ce0)[-(iVar3 >> 0x1f)]) * fVar1);
  }
  if (*(char *)(*(int *)((int)this + 8) + 0x20) != '\0') {
    FUN_10077253(*(void **)((int)this + 4),(int *)param_1[6]);
    if (*(int *)(*(int *)((int)this + 4) + 0x1d200) != 0) {
      iVar3 = FUN_10077346(*(int *)((int)this + 4));
      if ((char)iVar3 != '\0') {
        iVar3 = *(int *)((int)this + 4);
        FUN_10092b9a(*(void **)(iVar3 + 0x1cf00),*(int *)(iVar3 + 0x14),(int *)&DAT_100b9410,iVar3,
                     -1);
        FUN_10092c09(*(void **)(*(int *)((int)this + 4) + 0x1cf00),
                     *(int *)(*(int *)((int)this + 4) + 0x14),(int *)&DAT_100b0c30,0);
        FUN_10092c76(*(void **)(*(int *)((int)this + 4) + 0x1cf00),
                     *(int *)(*(int *)((int)this + 4) + 0x14),(uint *)&DAT_100b0c08);
        iVar3 = *(int *)((int)this + 4);
        FUN_10092d89(*(void **)(iVar3 + 0x1cf00),*(int *)(iVar3 + 0x14),iVar3,iVar3,
                     (uint *)&DAT_100b2864);
        this_00 = *(void **)((int)this + 4);
        FUN_10077302(this_00,&local_68,param_1[6]);
        local_58 = (float)local_68;
        local_38 = 0;
        local_28 = *param_1;
        local_24 = param_1[1];
        local_54 = (float)local_64;
        local_1c = *(undefined4 *)((int)this_00 + 0x1d1fc);
        local_18 = *(undefined4 *)((int)this_00 + 0x1d200);
        local_50 = (float)local_60;
        local_34 = 0;
        local_20 = 0;
        local_14 = 0;
        local_10 = 0;
        local_4c = (float)local_5c;
        local_c = 0;
        local_30 = 0;
        local_2c = 0;
        local_48 = 0;
        uStack_44 = 0x3f800000;
        uStack_40 = 0x3f800000;
        uStack_3c = 0;
        FUN_1005e545(this_00,&local_58,*(int *)((int)this_00 + 0x1cf80),0,0);
      }
    }
  }
  return;
}


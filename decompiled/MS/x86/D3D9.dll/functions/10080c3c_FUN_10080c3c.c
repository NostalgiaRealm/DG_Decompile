/*
 * FUN_10080c3c at 10080c3c
 * undefined __thiscall FUN_10080c3c(void * this, uint * param_1)
 * Address ranges: 10080c3c-10081033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10080c3c(void *this,uint *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_EBX;
  int iVar9;
  int unaff_ESI;
  int unaff_EDI;
  int iStack_ac;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int local_94 [11];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  int iStack_30;
  undefined4 auStack_28 [2];
  int local_20 [2];
  undefined4 local_18;
  
  iVar6 = *(int *)(*(int *)((int)this + 8) + 0x1c);
  if (iVar6 != 0) {
    fVar1 = (float)param_1[9];
    fVar2 = (float)param_1[8];
    FUN_100c5c5e(*(void **)(*(int *)((int)this + 4) + 0x1cf00),
                 *(int *)(*(int *)((int)this + 4) + 0x14),(int *)*param_1,param_1[1],param_1[2],
                 fVar2 * 0.0 + (float)param_1[10],fVar1 * 0.0 + (float)param_1[0xb],
                 (float)((double)(int)param_1[3] +
                        (double)(&DAT_100d97a0)[-((int)param_1[3] >> 0x1f)]) * fVar2 +
                 (float)param_1[10],
                 (float)((double)(int)param_1[4] +
                        (double)(&DAT_100d97a0)[-((int)param_1[4] >> 0x1f)]) * fVar1 +
                 (float)param_1[0xb],
                 (float)((double)iVar6 + (double)(&DAT_100d97a0)[-(iVar6 >> 0x1f)]) * fVar2,
                 (float)((double)iVar6 + (double)(&DAT_100d97a0)[-(iVar6 >> 0x1f)]) * fVar1);
  }
  if (*(char *)(*(int *)((int)this + 8) + 0x20) != '\0') {
    FUN_1008d403(*(void **)((int)this + 4),(int *)param_1[7]);
    if (*(int *)(*(int *)((int)this + 4) + 0x1d044) != 0) {
      iVar6 = FUN_1008d4f6(*(int *)((int)this + 4));
      if ((char)iVar6 != '\0') {
        iVar6 = *(int *)(*(int *)((int)this + 4) + 0x1cf04);
        cVar5 = FUN_100c2028(*(void **)(iVar6 + 0x15e8),1,*(uint *)(*(int *)(iVar6 + 0x1300) + 0xc),
                             *(uint *)(*(int *)(iVar6 + 0x1304) + 0x938),
                             *(uint *)(*(int *)(iVar6 + 0x1304) + 0x93c),local_20);
        if (cVar5 != '\0') {
          iVar6 = *(int *)((int)this + 4);
          iVar9 = *(int *)(iVar6 + 0x14) * 0x18;
          iVar3 = *(int *)(iVar6 + 0x1cf00);
          iVar4 = **(int **)(iVar9 + 0x520 + iVar3);
          piVar7 = FUN_100ba192(*(void **)(*(int *)(iVar6 + 0x1cf04) + 0x15d8),local_94,
                                *(uint *)(iVar6 + 0x1d048),0);
          iVar6 = 0;
          (**(code **)(iVar4 + 0x60))(*(undefined4 *)(iVar9 + 0x520 + iVar3),1,local_18,*piVar7);
          FUN_100baf54(*(void **)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),
                       *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf0c));
          FUN_100bb59b(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),
                       *(int *)(*(int *)(iVar6 + 4) + 0x1cf0c));
          FUN_100baf7e(*(void **)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),*param_1,0,0,4);
          FUN_100baf7e(*(void **)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),
                       *(uint *)(*(int *)(iVar6 + 4) + 0x1d044),0,0,0x80);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf44) = 1;
          uVar8 = FUN_1007f976((void *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1600),
                               (int *)&DAT_100ddb28);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf28) = uVar8;
          uVar8 = FUN_10044780((void *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x15f0),
                               (int *)&DAT_100d4060);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf34) = uVar8;
          uVar8 = FUN_10044240((void *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1620),
                               (uint *)&DAT_100d4094);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf30) = uVar8;
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf38) =
               *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1d028);
          *(uint *)(*(int *)(iVar6 + 4) + 0x1cf48) = param_1[2];
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x1cf4c) = 0;
          FUN_100bb51f(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),1,auStack_28);
          FUN_100bb78a(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),6,iStack_34,
                       iStack_30);
          FUN_100bbcc8(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0x1cf04) + 0x1304),1,
                       (int *)(param_1 + 1),0,(int *)0x0);
          this_00 = *(void **)(iVar6 + 4);
          FUN_1008d4b2(this_00,(int *)&stack0xffffff48,param_1[7]);
          fStack_a4 = (float)unaff_EDI;
          local_94[10] = *param_1;
          local_94[4] = 0;
          fStack_a0 = (float)unaff_ESI;
          local_94[5] = 0;
          local_94[6] = 0;
          local_94[7] = 0;
          local_94[8] = 0;
          local_94[9] = 0;
          fStack_9c = (float)unaff_EBX;
          uStack_68 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_4c = 0;
          uStack_44 = 0;
          fStack_98 = (float)iStack_ac;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          local_94[0] = 0;
          local_94[1] = 0x3f800000;
          local_94[2] = 0x3f800000;
          local_94[3] = 0;
          FUN_1007cc07(this_00,&fStack_a4,*(undefined4 *)((int)this_00 + 0x1cffc));
        }
      }
    }
  }
  return;
}


/*
 * FUN_10014495 at 10014495
 * undefined __thiscall FUN_10014495(void * this, uint * param_1)
 * Address ranges: 10014495-1001488c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10014495(void *this,uint *param_1)

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
    FUN_1004d4be(*(void **)(*(int *)((int)this + 4) + 0xcf00),
                 *(int *)(*(int *)((int)this + 4) + 0x14),(int *)*param_1,param_1[1],param_1[2],
                 fVar2 * 0.0 + (float)param_1[10],fVar1 * 0.0 + (float)param_1[0xb],
                 (float)((double)(int)param_1[3] +
                        (double)(&DAT_10066fd0)[-((int)param_1[3] >> 0x1f)]) * fVar2 +
                 (float)param_1[10],
                 (float)((double)(int)param_1[4] +
                        (double)(&DAT_10066fd0)[-((int)param_1[4] >> 0x1f)]) * fVar1 +
                 (float)param_1[0xb],
                 (float)((double)iVar6 + (double)(&DAT_10066fd0)[-(iVar6 >> 0x1f)]) * fVar2,
                 (float)((double)iVar6 + (double)(&DAT_10066fd0)[-(iVar6 >> 0x1f)]) * fVar1);
  }
  if (*(char *)(*(int *)((int)this + 8) + 0x20) != '\0') {
    FUN_10020267(*(void **)((int)this + 4),(int *)param_1[7]);
    if (*(int *)(*(int *)((int)this + 4) + 0xd044) != 0) {
      iVar6 = FUN_1002035a(*(int *)((int)this + 4));
      if ((char)iVar6 != '\0') {
        iVar6 = *(int *)(*(int *)((int)this + 4) + 0xcf04);
        cVar5 = FUN_100520b0(*(void **)(iVar6 + 0x15e8),1,*(uint *)(*(int *)(iVar6 + 0x1300) + 0xc),
                             *(uint *)(*(int *)(iVar6 + 0x1304) + 0x938),
                             *(uint *)(*(int *)(iVar6 + 0x1304) + 0x93c),local_20);
        if (cVar5 != '\0') {
          iVar6 = *(int *)((int)this + 4);
          iVar9 = *(int *)(iVar6 + 0x14) * 0x18;
          iVar3 = *(int *)(iVar6 + 0xcf00);
          iVar4 = **(int **)(iVar9 + 0x520 + iVar3);
          piVar7 = FUN_1004be7b(*(void **)(*(int *)(iVar6 + 0xcf04) + 0x15d8),local_94,
                                *(uint *)(iVar6 + 0xd048),0);
          iVar6 = 0;
          (**(code **)(iVar4 + 0x60))(*(undefined4 *)(iVar9 + 0x520 + iVar3),1,local_18,*piVar7);
          FUN_10052baa(*(void **)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),
                       *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf0c));
          FUN_100531e5(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),
                       *(int *)(*(int *)(iVar6 + 4) + 0xcf0c));
          FUN_10052bd4(*(void **)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),*param_1,0,0,4);
          FUN_10052bd4(*(void **)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),
                       *(uint *)(*(int *)(iVar6 + 4) + 0xd044),0,0,0x80);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf44) = 1;
          uVar8 = FUN_10012e5b((void *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1600),
                               (int *)&DAT_1006b138);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf28) = uVar8;
          uVar8 = FUN_10012f0a((void *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x15f0),
                               (int *)&DAT_10063040);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf34) = uVar8;
          uVar8 = FUN_10012d49((void *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1620),
                               (uint *)&DAT_10063074);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf30) = uVar8;
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf38) =
               *(undefined4 *)(*(int *)(iVar6 + 4) + 0xd028);
          *(uint *)(*(int *)(iVar6 + 4) + 0xcf48) = param_1[2];
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0xcf4c) = 0;
          FUN_10053169(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),1,auStack_28);
          FUN_100533d4(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),6,iStack_34,
                       iStack_30);
          FUN_10053912(*(int *)(*(int *)(*(int *)(iVar6 + 4) + 0xcf04) + 0x1304),1,
                       (int *)(param_1 + 1),0,(int *)0x0);
          this_00 = *(void **)(iVar6 + 4);
          FUN_10020316(this_00,(int *)&stack0xffffff48,param_1[7]);
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
          FUN_1000fe22(this_00,&fStack_a4,*(undefined4 *)((int)this_00 + 0xcffc));
        }
      }
    }
  }
  return;
}


/*
 * FUN_180099bb0 at 180099bb0
 * undefined __fastcall FUN_180099bb0(longlong param_1, ulonglong * param_2)
 * Address ranges: 180099bb0-180099ff1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180099bb0(longlong param_1,ulonglong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  longlong local_res8;
  longlong *plVar13;
  int local_118 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48 [4];
  
  iVar11 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0) {
    fVar1 = *(float *)((longlong)param_2 + 0x34);
    fVar2 = *(float *)(param_2 + 6);
    fVar12 = (float)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
    FUN_1800f0050(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x28),(longlong *)*param_2,
                  param_2[1],(int)param_2[2],fVar2 * 0.0 + *(float *)(param_2 + 7),
                  fVar1 * 0.0 + *(float *)((longlong)param_2 + 0x3c),
                  (float)*(uint *)((longlong)param_2 + 0x14) * fVar2 + *(float *)(param_2 + 7),
                  (float)(uint)param_2[3] * fVar1 + *(float *)((longlong)param_2 + 0x3c),
                  fVar2 * fVar12,fVar1 * fVar12);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x24) != '\0') {
    FUN_1800a9f2c(*(longlong **)(param_1 + 8),(undefined8 *)param_2[5]);
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d150) != 0) {
      uVar8 = FUN_1800aa004(*(longlong *)(param_1 + 8));
      if ((char)uVar8 != '\0') {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18);
        plVar13 = &local_58;
        cVar7 = FUN_1800eb61c(*(longlong *)(lVar5 + 0x1950),1,
                              *(undefined8 *)(*(longlong *)(lVar5 + 0x1500) + 0x18),
                              *(undefined8 *)(*(longlong *)(lVar5 + 0x1508) + 0xb78),plVar13);
        if (cVar7 != '\0') {
          lVar5 = *(longlong *)(param_1 + 8);
          plVar6 = *(longlong **)
                    ((ulonglong)*(uint *)(lVar5 + 0x28) * 0x20 + 0x6d0 +
                    *(longlong *)(lVar5 + 0x1cf10));
          lVar10 = *plVar6;
          plVar9 = FUN_1800e1d04(*(longlong *)(*(longlong *)(lVar5 + 0x1cf18) + 0x1930),&local_res8,
                                 *(uint *)(lVar5 + 0x1d158),0);
          (**(code **)(lVar10 + 0xc0))
                    (plVar6,1,local_50,*plVar9,(ulonglong)plVar13 & 0xffffffff00000000);
          FUN_1800e2cec(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x1cf28));
          FUN_1800e3400(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf28));
          FUN_1800e2d18(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *param_2,0,0,4);
          FUN_1800e2d18(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x1d150),0,0,0x80);
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf90) = 1;
          uVar8 = FUN_180098258((longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1978),
                                (int *)&DAT_180110d10);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf60) = uVar8;
          uVar8 = FUN_18004c500((longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1960),
                                (int *)&DAT_180100480);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf78) = uVar8;
          uVar8 = FUN_18004bf30((longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x19a8),
                                (uint *)&DAT_1801004b8);
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf70) = uVar8;
          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf80) =
               *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1d120);
          *(int *)(*(longlong *)(param_1 + 8) + 0x1cf94) = (int)param_2[2];
          *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1cf98) = 0;
          FUN_1800e3368(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        1,local_48);
          FUN_1800e3664(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        6,local_58);
          FUN_1800e3a7c(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf18) + 0x1508),
                        1,(longlong *)(param_2 + 1),0,(longlong *)0x0);
          lVar5 = *(longlong *)(param_1 + 8);
          iVar3 = *(int *)(param_2[5] + 8);
          iVar4 = *(int *)(param_2[5] + 0xc);
          local_118[0] = (iVar3 - *(int *)(lVar5 + 0xa0)) + -10;
          local_118[1] = (iVar4 - *(int *)(lVar5 + 0xa4)) + -10;
          local_118[2] = iVar3 + -10;
          local_118[3] = iVar4 + -10;
          do {
            lVar10 = (longlong)iVar11;
            iVar11 = iVar11 + 4;
            *(float *)((longlong)&local_68 + lVar10) = (float)*(int *)((longlong)local_118 + lVar10)
            ;
          } while (iVar11 != 0x10);
          local_d0 = *param_2;
          local_108 = local_68;
          uStack_100 = uStack_60;
          local_f8 = 0x3f80000000000000;
          uStack_f0 = 0x3f800000;
          local_e8 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_c8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_90 = 0;
          local_80 = 0;
          local_78 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_88 = 0;
          FUN_1800947bc(lVar5,(undefined4 *)&local_108,*(undefined8 *)(lVar5 + 0x1d0c8));
        }
      }
    }
  }
  return;
}


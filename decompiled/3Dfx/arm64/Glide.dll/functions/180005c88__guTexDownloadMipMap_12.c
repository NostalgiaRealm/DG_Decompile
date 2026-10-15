/*
 * _guTexDownloadMipMap@12 at 180005c88
 * undefined __cdecl _guTexDownloadMipMap@12(uint param_1, undefined8 * param_2, undefined8 * param_3)
 * Address ranges: 180005c88-180005f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexDownloadMipMap_12(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong extraout_x1;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int extraout_w15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
                    /* 0x5c88  135  _guTexDownloadMipMap@12
                       0x5c88  296  guTexDownloadMipMap */
  lVar7 = FUN_180017788();
  if (*(char *)(lVar7 + 100) != '\0') {
    FUN_180061700((uint *)(lVar7 + 0x60));
    if ((*(longlong *)(lVar7 + 0xa0) != 0 && param_1 != 0xffffffff) &&
       (param_1 < *(uint *)(lVar7 + 0xa8))) {
      lVar16 = *(longlong *)(lVar7 + 0xa0) + (ulonglong)param_1 * 0xd0;
      iVar3 = *(int *)(lVar16 + 0x4c);
      if (iVar3 < *(int *)(*(longlong *)(lVar7 + 0x30) + 0x833)) {
        if ((((param_1 == *(uint *)(lVar7 + 0xb8)) || (param_1 == *(uint *)(lVar7 + 0xbc))) ||
            (param_1 == *(uint *)(lVar7 + 0xc0))) && (*(char *)(lVar7 + 100) != '\0')) {
          FUN_180061700((uint *)(lVar7 + 0x60));
          (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x30))();
          FUN_1800616f0((uint *)(lVar7 + 0x60));
        }
        *(undefined8 **)(lVar16 + 0x18) = param_2;
        if (*(char *)(lVar7 + 100) != '\0') {
          uVar1 = *(uint *)(lVar16 + 0x50);
          uVar17 = *(uint *)(lVar16 + 0x54);
          uVar4 = *(uint *)(lVar16 + 0x20);
          uVar5 = *(uint *)(lVar16 + 0x10);
          uVar2 = *(uint *)(lVar16 + 0x44);
          uVar14 = *(uint *)(lVar16 + 0x48);
          uVar8 = FUN_180061700((uint *)(lVar7 + 0x60));
          if ((iVar3 < *(int *)(*(longlong *)(lVar7 + 0x30) + 0x833)) &&
             (uVar17 = uVar17 & 0xfffffff8, uVar17 < *(uint *)(*(longlong *)(lVar7 + 0x30) + 0x82f))
             ) {
            uVar12 = (ulonglong)uVar4;
            uVar13 = uVar14;
            uVar11 = uVar5;
            uVar9 = FUN_180019880(uVar8,uVar2,uVar14,uVar5,uVar4);
            if ((uVar9 & 1) != 0) {
              uVar9 = FUN_1800198c0(uVar1,extraout_x1,uVar13,uVar11,uVar12);
              uVar13 = (uint)uVar9;
              if (uVar13 != 0) {
                if (extraout_w15 == 3) {
                  lVar15 = *(longlong *)(lVar7 + 0x18) + (longlong)iVar3 * 0x4e8;
                  lVar18 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x2b0);
                  uVar1 = *(uint *)(lVar15 + 700);
                  if (uVar1 < uVar13 + uVar17) {
                    uVar13 = uVar1 - uVar17;
                  }
                  uVar1 = *(int *)(lVar15 + 0x2b8) + uVar17;
                  thunk_FUN_180001218((undefined8 *)(lVar18 + (ulonglong)uVar1),param_2,
                                      (ulonglong)uVar13);
                  plVar10 = *(longlong **)(lVar7 + 0x18);
                  (**(code **)(*plVar10 + 0x250))
                            (plVar10,lVar18 + (ulonglong)uVar1,
                             (int)plVar10[(longlong)iVar3 * 0x9d + 0x57] + uVar17,(ulonglong)uVar13)
                  ;
                }
                else {
                  uVar13 = 0xffffffff;
                  if (uVar14 < 9) {
                    uVar13 = (uint)(byte)(&DAT_180064bb8)[(int)uVar14];
                  }
                  while( true ) {
                    uVar14 = 0xffffffff;
                    if (uVar2 < 9) {
                      uVar14 = (uint)(byte)(&DAT_180064bb8)[(int)uVar2];
                    }
                    if ((int)uVar13 < (int)uVar14) break;
                    uVar9 = FUN_1800198c0(3,(ulonglong)(uint)(&DAT_1800627e8)[(int)uVar13],
                                          (&DAT_1800627e8)[(int)uVar13],uVar5,(ulonglong)uVar4);
                    uVar12 = uVar9 & 0xffffffff;
                    bVar6 = FUN_180019840(uVar13,uVar1);
                    if (bVar6) {
                      lVar15 = *(longlong *)(lVar7 + 0x18);
                      lVar18 = *(longlong *)(lVar15 + 0x2b0);
                      uVar11 = *(uint *)(lVar15 + (longlong)iVar3 * 0x4e8 + 700);
                      uVar14 = (uint)uVar9;
                      if (uVar11 < (uint)uVar9 + uVar17) {
                        uVar14 = uVar11 - uVar17;
                      }
                      uVar12 = (ulonglong)uVar14;
                      uVar11 = *(int *)(lVar15 + (longlong)iVar3 * 0x4e8 + 0x2b8) + uVar17;
                      thunk_FUN_180001218((undefined8 *)(lVar18 + (ulonglong)uVar11),param_2,uVar12)
                      ;
                      plVar10 = *(longlong **)(lVar7 + 0x18);
                      (**(code **)(*plVar10 + 0x250))
                                (plVar10,lVar18 + (ulonglong)uVar11,
                                 (int)plVar10[(longlong)iVar3 * 0x9d + 0x57] + uVar17,uVar12);
                      uVar17 = uVar14 + uVar17;
                    }
                    param_2 = (undefined8 *)((longlong)param_2 + uVar12);
                    uVar13 = uVar13 - 1;
                  }
                }
              }
            }
          }
          FUN_1800616f0((uint *)(lVar7 + 0x60));
        }
        if (((*(int *)(lVar16 + 0x20) - 1U & 0xfffffff7) == 0) && (param_3 != (undefined8 *)0x0)) {
          uVar20 = *param_3;
          uVar19 = param_3[3];
          uVar8 = param_3[2];
          *(undefined8 *)(lVar16 + 100) = param_3[1];
          *(undefined8 *)(lVar16 + 0x5c) = uVar20;
          *(undefined8 *)(lVar16 + 0x74) = uVar19;
          *(undefined8 *)(lVar16 + 0x6c) = uVar8;
          uVar20 = param_3[4];
          uVar19 = param_3[7];
          uVar8 = param_3[6];
          *(undefined8 *)(lVar16 + 0x84) = param_3[5];
          *(undefined8 *)(lVar16 + 0x7c) = uVar20;
          *(undefined8 *)(lVar16 + 0x94) = uVar19;
          *(undefined8 *)(lVar16 + 0x8c) = uVar8;
          uVar20 = param_3[8];
          uVar19 = param_3[0xb];
          uVar8 = param_3[10];
          *(undefined8 *)(lVar16 + 0xa4) = param_3[9];
          *(undefined8 *)(lVar16 + 0x9c) = uVar20;
          *(undefined8 *)(lVar16 + 0xb4) = uVar19;
          *(undefined8 *)(lVar16 + 0xac) = uVar8;
          uVar8 = param_3[0xc];
          *(undefined8 *)(lVar16 + 0xc4) = param_3[0xd];
          *(undefined8 *)(lVar16 + 0xbc) = uVar8;
        }
      }
    }
    FUN_1800616f0((uint *)(lVar7 + 0x60));
  }
  return;
}


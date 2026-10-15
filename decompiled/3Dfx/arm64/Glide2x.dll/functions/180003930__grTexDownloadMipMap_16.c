/*
 * _grTexDownloadMipMap@16 at 180003930
 * undefined __cdecl _grTexDownloadMipMap@16(int param_1, uint param_2, uint param_3, uint * param_4)
 * Address ranges: 180003930-180003b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMap_16(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong extraout_x1;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  
                    /* 0x3930  88  _grTexDownloadMipMap@16
                       0x3930  245  grTexDownloadMipMap */
  lVar5 = FUN_180016878();
  if (*(char *)(lVar5 + 100) != '\0') {
    puVar16 = *(undefined8 **)(param_4 + 4);
    uVar1 = param_4[2];
    uVar3 = param_4[3];
    uVar2 = *param_4;
    uVar11 = param_4[1];
    uVar6 = FUN_1800608b0((uint *)(lVar5 + 0x60));
    if ((param_1 < *(int *)(*(longlong *)(lVar5 + 0x30) + 0x833)) &&
       (uVar14 = param_2 & 0xfffffff8, uVar14 < *(uint *)(*(longlong *)(lVar5 + 0x30) + 0x82f))) {
      uVar10 = (ulonglong)uVar3;
      uVar15 = uVar11;
      uVar9 = uVar1;
      uVar7 = FUN_180018a30(uVar6,uVar2,uVar11,uVar1,uVar3);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_180018a70(param_3,extraout_x1,uVar15,uVar9,uVar10);
        uVar15 = (uint)uVar7;
        if (uVar15 != 0) {
          if (param_3 == 3) {
            lVar12 = *(longlong *)(lVar5 + 0x18) + (longlong)param_1 * 0x4e8;
            lVar13 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x2b0);
            uVar1 = *(uint *)(lVar12 + 700);
            if (uVar1 < uVar15 + uVar14) {
              uVar15 = uVar1 - uVar14;
            }
            uVar1 = *(int *)(lVar12 + 0x2b8) + uVar14;
            thunk_FUN_180001218((undefined8 *)(lVar13 + (ulonglong)uVar1),puVar16,(ulonglong)uVar15)
            ;
            plVar8 = *(longlong **)(lVar5 + 0x18);
            (**(code **)(*plVar8 + 0x250))
                      (plVar8,lVar13 + (ulonglong)uVar1,
                       (int)plVar8[(longlong)param_1 * 0x9d + 0x57] + uVar14,(ulonglong)uVar15);
          }
          else {
            uVar15 = 0xffffffff;
            if (uVar11 < 9) {
              uVar15 = (uint)(byte)(&DAT_180063bb8)[(int)uVar11];
            }
            while( true ) {
              uVar11 = 0xffffffff;
              if (uVar2 < 9) {
                uVar11 = (uint)(byte)(&DAT_180063bb8)[(int)uVar2];
              }
              if ((int)uVar15 < (int)uVar11) break;
              uVar7 = FUN_180018a70(3,(ulonglong)(uint)(&DAT_1800617e8)[(int)uVar15],
                                    (&DAT_1800617e8)[(int)uVar15],uVar1,(ulonglong)uVar3);
              uVar10 = uVar7 & 0xffffffff;
              bVar4 = FUN_1800189f0(uVar15,param_3);
              if (bVar4) {
                lVar12 = *(longlong *)(lVar5 + 0x18);
                lVar13 = *(longlong *)(lVar12 + 0x2b0);
                uVar9 = *(uint *)(lVar12 + (longlong)param_1 * 0x4e8 + 700);
                uVar11 = (uint)uVar7;
                if (uVar9 < (uint)uVar7 + uVar14) {
                  uVar11 = uVar9 - uVar14;
                }
                uVar10 = (ulonglong)uVar11;
                uVar9 = *(int *)(lVar12 + (longlong)param_1 * 0x4e8 + 0x2b8) + uVar14;
                thunk_FUN_180001218((undefined8 *)(lVar13 + (ulonglong)uVar9),puVar16,uVar10);
                plVar8 = *(longlong **)(lVar5 + 0x18);
                (**(code **)(*plVar8 + 0x250))
                          (plVar8,lVar13 + (ulonglong)uVar9,
                           (int)plVar8[(longlong)param_1 * 0x9d + 0x57] + uVar14,uVar10);
                uVar14 = uVar11 + uVar14;
              }
              puVar16 = (undefined8 *)((longlong)puVar16 + uVar10);
              uVar15 = uVar15 - 1;
            }
          }
        }
      }
    }
    FUN_1800608a0((uint *)(lVar5 + 0x60));
  }
  return;
}


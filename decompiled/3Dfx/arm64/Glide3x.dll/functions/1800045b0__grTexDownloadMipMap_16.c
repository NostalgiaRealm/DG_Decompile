/*
 * _grTexDownloadMipMap@16 at 1800045b0
 * undefined __cdecl _grTexDownloadMipMap@16(int param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 1800045b0-1800047a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMap_16(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
                    /* 0x45b0  75  _grTexDownloadMipMap@16
                       0x45b0  175  grTexDownloadMipMap */
  lVar6 = FUN_180008ce0();
  if (*(char *)(lVar6 + 100) != '\0') {
    puVar12 = *(undefined8 **)(param_4 + 4);
    iVar1 = param_4[2];
    uVar3 = param_4[3];
    iVar2 = *param_4;
    uVar9 = param_4[1];
    FUN_1800643e0((uint *)(lVar6 + 0x60));
    if ((((param_1 < *(int *)(*(longlong *)(lVar6 + 0x30) + 0x833)) &&
         (uVar10 = param_2 & 0xfffffff8,
         uVar10 < *(uint *)(*(longlong *)(lVar6 + 0x30) + 0x82f) && (int)uVar9 < 9)) &&
        (iVar2 < 9 && uVar3 < 0x10)) &&
       ((iVar1 + 3U < 7 && (uVar5 = FUN_180008380(param_3,iVar2,uVar9,iVar1,uVar3), uVar5 != 0)))) {
      if (param_3 == 3) {
        lVar8 = *(longlong *)(lVar6 + 0x18) + (longlong)param_1 * 0x4e8;
        lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + 0x328);
        uVar3 = *(uint *)(lVar8 + 0x334);
        if (uVar3 < uVar5 + uVar10) {
          uVar5 = uVar3 - uVar10;
        }
        uVar3 = *(int *)(lVar8 + 0x330) + uVar10;
        thunk_FUN_1800010d8((undefined8 *)(lVar11 + (ulonglong)uVar3),puVar12,(ulonglong)uVar5);
        plVar7 = *(longlong **)(lVar6 + 0x18);
        (**(code **)(*plVar7 + 0x290))
                  (plVar7,lVar11 + (ulonglong)uVar3,
                   (int)plVar7[(longlong)param_1 * 0x9d + 0x66] + uVar10,(ulonglong)uVar5);
      }
      else if (iVar2 <= (int)uVar9) {
        do {
          uVar5 = FUN_180008380(3,uVar9,uVar9,iVar1,uVar3);
          if ((uVar9 & 1) == (uint)(param_3 != 1)) {
            lVar8 = *(longlong *)(lVar6 + 0x18);
            lVar11 = *(longlong *)(lVar8 + 0x328);
            uVar4 = *(uint *)(lVar8 + (longlong)param_1 * 0x4e8 + 0x334);
            if (uVar4 < uVar5 + uVar10) {
              uVar5 = uVar4 - uVar10;
            }
            uVar4 = *(int *)(lVar8 + (longlong)param_1 * 0x4e8 + 0x330) + uVar10;
            thunk_FUN_1800010d8((undefined8 *)(lVar11 + (ulonglong)uVar4),puVar12,(ulonglong)uVar5);
            plVar7 = *(longlong **)(lVar6 + 0x18);
            (**(code **)(*plVar7 + 0x290))
                      (plVar7,lVar11 + (ulonglong)uVar4,
                       (int)plVar7[(longlong)param_1 * 0x9d + 0x66] + uVar10,(ulonglong)uVar5);
            uVar10 = uVar5 + uVar10;
          }
          uVar9 = uVar9 - 1;
          puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)uVar5);
        } while (iVar2 <= (int)uVar9);
      }
    }
    FUN_1800643d0((uint *)(lVar6 + 0x60));
  }
  return;
}


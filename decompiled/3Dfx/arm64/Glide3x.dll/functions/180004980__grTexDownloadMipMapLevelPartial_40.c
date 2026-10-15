/*
 * _grTexDownloadMipMapLevelPartial@40 at 180004980
 * undefined __cdecl _grTexDownloadMipMapLevelPartial@40(int param_1, uint param_2, uint param_3, int param_4, int param_5, uint param_6, uint param_7, undefined8 * param_8, uint param_9, uint param_10)
 * Address ranges: 180004980-180004b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevelPartial_40
               (int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
               uint param_7,undefined8 *param_8,uint param_9,uint param_10)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int extraout_w1;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
                    /* 0x4980  77  _grTexDownloadMipMapLevelPartial@40
                       0x4980  177  grTexDownloadMipMapLevelPartial */
  lVar10 = FUN_180008ce0();
  if (*(char *)(lVar10 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar10 + 0x60));
    uVar12 = (ulonglong)param_9;
    uVar13 = (ulonglong)param_10;
    bVar1 = param_1 < *(int *)(*(longlong *)(lVar10 + 0x30) + 0x833);
    bVar7 = (int)param_9 <= (int)param_10;
    bVar8 = -1 < (int)param_9;
    bVar2 = ((((bVar1 && bVar7) && bVar8) && param_4 < 9) && (int)(param_3 - 8) < 0) !=
            ((((bVar1 && bVar7) && bVar8) && param_4 < 9) && SBORROW4(param_3,8));
    if (((((((bVar1 && bVar7) && bVar8) && param_4 < 9) && param_3 == 8 || bVar2) && param_6 < 0xf
          || ((((bVar1 && bVar7) && bVar8) && param_4 < 9) && param_3 == 8 || bVar2) &&
             param_6 == 0xf) && (param_5 + 3U < 7)) &&
       ((param_7 == 3 || ((param_3 & 1) == (uint)(param_7 != 1))))) {
      uVar11 = param_2 & 0xfffffff8;
      while ((int)param_3 < param_4) {
        iVar9 = FUN_180008380(param_7,param_4,param_4,param_5,param_6);
        param_10 = (uint)uVar13;
        param_9 = (uint)uVar12;
        uVar11 = iVar9 + uVar11;
        param_4 = extraout_w1 + -1;
      }
      lVar14 = *(longlong *)(lVar10 + 0x18) + (longlong)param_1 * 0x4e8;
      uVar4 = *(uint *)(lVar14 + 0x334);
      if (uVar11 < uVar4) {
        uVar5 = *(uint *)(&DAT_1800668d8 + (longlong)(int)param_3 * 4);
        uVar6 = uVar5 >> (ulonglong)((byte)(&DAT_1800668d3)[param_5] & 0x1f);
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        uVar3 = uVar5;
        if (param_5 < 0) {
          uVar3 = uVar6;
          uVar6 = uVar5;
        }
        lVar15 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x328);
        iVar9 = ((uVar6 | uVar3 << 0x10) >> 0x10) * (uint)(byte)(&DAT_180066908)[(int)param_6];
        uVar6 = iVar9 + (param_10 - param_9) * iVar9;
        if (uVar4 < uVar6 + uVar11) {
          uVar6 = uVar4 - uVar11;
        }
        uVar11 = *(int *)(lVar14 + 0x330) + uVar11 + iVar9 * param_9;
        thunk_FUN_1800010d8((undefined8 *)(lVar15 + (ulonglong)uVar11),param_8,(ulonglong)uVar6);
        (**(code **)(**(longlong **)(lVar10 + 0x18) + 0x290))
                  (*(longlong **)(lVar10 + 0x18),lVar15 + (ulonglong)uVar11,uVar11,(ulonglong)uVar6)
        ;
      }
    }
    FUN_1800643d0((uint *)(lVar10 + 0x60));
  }
  return;
}


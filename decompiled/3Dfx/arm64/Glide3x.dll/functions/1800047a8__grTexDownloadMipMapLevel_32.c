/*
 * _grTexDownloadMipMapLevel@32 at 1800047a8
 * undefined __cdecl _grTexDownloadMipMapLevel@32(int param_1, uint param_2, uint param_3, int param_4, int param_5, uint param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 1800047a8-18000497f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevel_32
               (int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
               uint param_7,undefined8 *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int extraout_w1;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
                    /* 0x47a8  76  _grTexDownloadMipMapLevel@32
                       0x47a8  176  grTexDownloadMipMapLevel */
  lVar7 = FUN_180008ce0();
  uVar9 = *(uint *)(&DAT_1800668d8 + (longlong)(int)param_3 * 4) >>
          (ulonglong)((byte)(&DAT_1800668d3)[param_5] & 0x1f);
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  if (param_5 < 0) {
    uVar9 = *(uint *)(&DAT_1800668d8 + (longlong)(int)param_3 * 4);
  }
  if (*(char *)(lVar7 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar7 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar7 + 0x30) + 0x833)) {
      uVar9 = uVar9 & 0xffff;
      uVar10 = (ulonglong)uVar9;
      bVar5 = -1 < (int)(uVar9 - 1);
      if (((((bVar5 && param_4 < 9) && (int)param_3 < 9) && param_6 < 0xf ||
            ((bVar5 && param_4 < 9) && (int)param_3 < 9) && param_6 == 0xf) && (param_5 + 3U < 7))
         && ((param_7 == 3 || ((param_3 & 1) == (uint)(param_7 != 1))))) {
        uVar8 = param_2 & 0xfffffff8;
        while ((int)param_3 < param_4) {
          iVar6 = FUN_180008380(param_7,param_4,param_4,param_5,param_6);
          uVar9 = (uint)uVar10;
          uVar8 = iVar6 + uVar8;
          param_4 = extraout_w1 + -1;
        }
        lVar11 = *(longlong *)(lVar7 + 0x18) + (longlong)param_1 * 0x4e8;
        uVar2 = *(uint *)(lVar11 + 0x334);
        if (uVar8 < uVar2) {
          uVar3 = *(uint *)(&DAT_1800668d8 + (longlong)(int)param_3 * 4);
          uVar4 = uVar3 >> (ulonglong)((byte)(&DAT_1800668d3)[param_5] & 0x1f);
          if (uVar4 == 0) {
            uVar4 = 1;
          }
          uVar1 = uVar3;
          if (param_5 < 0) {
            uVar1 = uVar4;
            uVar4 = uVar3;
          }
          uVar3 = *(int *)(lVar11 + 0x330) + uVar8;
          lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x328);
          uVar9 = ((uVar4 | uVar1 << 0x10) >> 0x10) * uVar9 *
                  (uint)(byte)(&DAT_180066908)[(int)param_6];
          if (uVar2 < uVar9 + uVar8) {
            uVar9 = uVar2 - uVar8;
          }
          thunk_FUN_1800010d8((undefined8 *)(lVar11 + (ulonglong)uVar3),param_8,(ulonglong)uVar9);
          (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x290))
                    (*(longlong **)(lVar7 + 0x18),lVar11 + (ulonglong)uVar3,uVar3,(ulonglong)uVar9);
        }
      }
    }
    FUN_1800643d0((uint *)(lVar7 + 0x60));
  }
  return;
}


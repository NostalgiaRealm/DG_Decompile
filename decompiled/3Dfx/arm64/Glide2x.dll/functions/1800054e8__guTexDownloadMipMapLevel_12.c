/*
 * _guTexDownloadMipMapLevel@12 at 1800054e8
 * undefined __cdecl _guTexDownloadMipMapLevel@12(uint param_1, uint param_2, longlong * param_3)
 * Address ranges: 1800054e8-180005663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexDownloadMipMapLevel_12(uint param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_w15;
  longlong lVar7;
  
                    /* 0x54e8  132  _guTexDownloadMipMapLevel@12
                       0x54e8  289  guTexDownloadMipMapLevel */
  lVar3 = FUN_180016878();
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar3 + 0x60));
    if ((*(longlong *)(lVar3 + 0xa0) != 0 && param_1 != 0xffffffff) &&
       (param_1 < *(uint *)(lVar3 + 0xa8))) {
      lVar7 = *(longlong *)(lVar3 + 0xa0) + (ulonglong)param_1 * 0xd0;
      iVar1 = *(int *)(lVar7 + 0x4c);
      if (iVar1 < *(int *)(*(longlong *)(lVar3 + 0x30) + 0x833)) {
        if ((((param_1 == *(uint *)(lVar3 + 0xb8)) || (param_1 == *(uint *)(lVar3 + 0xbc))) ||
            (param_1 == *(uint *)(lVar3 + 0xc0))) && (*(char *)(lVar3 + 100) != '\0')) {
          FUN_1800608b0((uint *)(lVar3 + 0x60));
          (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x30))();
          FUN_1800608a0((uint *)(lVar3 + 0x60));
        }
        uVar6 = *(uint *)(lVar7 + 0x50);
        uVar5 = *(uint *)(lVar7 + 0x10);
        uVar4 = FUN_180018a70(uVar6,(ulonglong)param_2,param_2,uVar5,
                              (ulonglong)*(uint *)(lVar7 + 0x20));
        uVar2 = *(uint *)(&DAT_180063bd0 + (longlong)(int)param_2 * 4) >>
                (ulonglong)((byte)(&DAT_180063bc4)[(int)uVar5] & 0x1f);
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        if (uVar5 - 4 < 3) {
          uVar2 = *(uint *)(&DAT_180063bd0 + (longlong)(int)param_2 * 4);
        }
        FUN_180018458(lVar3,iVar1,*(uint *)(lVar7 + 0x54),param_2,*(uint *)(lVar7 + 0x48),uVar5,
                      extraout_w15,uVar6,(undefined8 *)*param_3,0,(uVar2 & 0xffff) - 1);
        *param_3 = *param_3 + (uVar4 & 0xffffffff);
      }
    }
    FUN_1800608a0((uint *)(lVar3 + 0x60));
  }
  return;
}


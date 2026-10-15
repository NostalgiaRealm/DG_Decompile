/*
 * _guTexDownloadMipMapLevel@12 at 180003318
 * undefined __fastcall _guTexDownloadMipMapLevel@12(uint param_1, uint param_2, longlong * param_3)
 * Address ranges: 180003318-180003452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexDownloadMipMapLevel_12(uint param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
                    /* 0x3318  136  _guTexDownloadMipMapLevel@12
                       0x3318  297  guTexDownloadMipMapLevel */
  uVar8 = (ulonglong)param_1;
  puVar6 = FUN_180015384();
  if (puVar6[100] != '\0') {
    LOCK();
    *(int *)(puVar6 + 0x60) = *(int *)(puVar6 + 0x60) + 1;
    UNLOCK();
    lVar4 = *(longlong *)(puVar6 + 0xa0);
    if (((lVar4 != 0) && (uVar7 = (uint)uVar8, uVar7 != 0xffffffff)) &&
       (uVar7 < *(uint *)(puVar6 + 0xa8))) {
      lVar9 = uVar8 * 0xd0;
      iVar1 = *(int *)(lVar9 + 0x4c + lVar4);
      if (iVar1 < *(int *)(*(longlong *)(puVar6 + 0x30) + 0x833)) {
        if ((((uVar7 == *(uint *)(puVar6 + 0xb8)) || (uVar7 == *(uint *)(puVar6 + 0xbc))) ||
            (uVar7 == *(uint *)(puVar6 + 0xc0))) && (puVar6[100] != '\0')) {
          LOCK();
          *(int *)(puVar6 + 0x60) = *(int *)(puVar6 + 0x60) + 1;
          UNLOCK();
          (**(code **)(**(longlong **)(puVar6 + 0x18) + 0x30))();
          LOCK();
          *(int *)(puVar6 + 0x60) = *(int *)(puVar6 + 0x60) + -1;
          UNLOCK();
        }
        uVar7 = *(uint *)(lVar9 + 0x10 + lVar4);
        uVar2 = *(uint *)(lVar9 + 0x50 + lVar4);
        uVar3 = *(uint *)(lVar9 + 0x20 + lVar4);
        uVar5 = FUN_180017d78(uVar2,param_2,param_2,uVar7,uVar3);
        FUN_1800175f0((longlong)puVar6,iVar1,*(uint *)(lVar9 + 0x54 + lVar4),param_2,
                      *(uint *)(lVar9 + 0x48 + lVar4),uVar7,uVar3,uVar2,(undefined8 *)*param_3);
        *param_3 = *param_3 + (ulonglong)uVar5;
      }
    }
    LOCK();
    *(int *)(puVar6 + 0x60) = *(int *)(puVar6 + 0x60) + -1;
    UNLOCK();
  }
  return;
}


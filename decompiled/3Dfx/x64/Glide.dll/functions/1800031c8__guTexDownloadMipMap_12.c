/*
 * _guTexDownloadMipMap@12 at 1800031c8
 * undefined __fastcall _guTexDownloadMipMap@12(uint param_1, undefined8 * param_2, undefined8 * param_3)
 * Address ranges: 1800031c8-180003317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guTexDownloadMipMap_12(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
                    /* 0x31c8  135  _guTexDownloadMipMap@12
                       0x31c8  296  guTexDownloadMipMap */
  uVar8 = (ulonglong)param_1;
  puVar5 = FUN_180015384();
  if (puVar5[100] != '\0') {
    LOCK();
    *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
    UNLOCK();
    lVar3 = *(longlong *)(puVar5 + 0xa0);
    if (((lVar3 != 0) && (uVar7 = (uint)uVar8, uVar7 != 0xffffffff)) &&
       (uVar7 < *(uint *)(puVar5 + 0xa8))) {
      lVar6 = uVar8 * 0xd0;
      iVar2 = *(int *)(lVar6 + 0x4c + lVar3);
      if (iVar2 < *(int *)(*(longlong *)(puVar5 + 0x30) + 0x833)) {
        if ((((uVar7 == *(uint *)(puVar5 + 0xb8)) || (uVar7 == *(uint *)(puVar5 + 0xbc))) ||
            (uVar7 == *(uint *)(puVar5 + 0xc0))) && (puVar5[100] != '\0')) {
          LOCK();
          *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
          UNLOCK();
          (**(code **)(**(longlong **)(puVar5 + 0x18) + 0x30))();
          LOCK();
          *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + -1;
          UNLOCK();
        }
        *(undefined8 **)(lVar6 + 0x18 + lVar3) = param_2;
        FUN_1800170cc((longlong)puVar5,iVar2,*(uint *)(lVar6 + 0x54 + lVar3),
                      *(uint *)(lVar6 + 0x50 + lVar3),*(uint *)(lVar6 + 0x44 + lVar3),
                      *(uint *)(lVar6 + 0x48 + lVar3),*(uint *)(lVar6 + 0x10 + lVar3),
                      *(uint *)(lVar6 + 0x20 + lVar3),param_2);
        if (((*(int *)(lVar6 + 0x20 + lVar3) - 1U & 0xfffffff7) == 0) &&
           (param_3 != (undefined8 *)0x0)) {
          uVar4 = param_3[1];
          puVar1 = (undefined8 *)(lVar6 + 0x5c + lVar3);
          *puVar1 = *param_3;
          puVar1[1] = uVar4;
          uVar4 = param_3[3];
          puVar1 = (undefined8 *)(lVar6 + 0x6c + lVar3);
          *puVar1 = param_3[2];
          puVar1[1] = uVar4;
          uVar4 = param_3[5];
          puVar1 = (undefined8 *)(lVar6 + 0x7c + lVar3);
          *puVar1 = param_3[4];
          puVar1[1] = uVar4;
          uVar4 = param_3[7];
          puVar1 = (undefined8 *)(lVar6 + 0x8c + lVar3);
          *puVar1 = param_3[6];
          puVar1[1] = uVar4;
          uVar4 = param_3[9];
          puVar1 = (undefined8 *)(lVar6 + 0x9c + lVar3);
          *puVar1 = param_3[8];
          puVar1[1] = uVar4;
          uVar4 = param_3[0xb];
          puVar1 = (undefined8 *)(lVar6 + 0xac + lVar3);
          *puVar1 = param_3[10];
          puVar1[1] = uVar4;
          uVar4 = param_3[0xd];
          puVar1 = (undefined8 *)(lVar6 + 0xbc + lVar3);
          *puVar1 = param_3[0xc];
          puVar1[1] = uVar4;
        }
      }
    }
    LOCK();
    *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + -1;
    UNLOCK();
  }
  return;
}


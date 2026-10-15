/*
 * FUN_100346a0 at 100346a0
 * undefined __fastcall FUN_100346a0(int param_1)
 * Address ranges: 100346a0-10034830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100346a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  int local_118 [65];
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  local_c = param_1;
  FUN_100ada8e(local_118,0,0x100);
  local_10 = *(uint *)(param_1 + 0xde50);
  uVar10 = 0;
  uVar7 = 0;
  bVar11 = local_10 == 0;
  if (!bVar11) {
    for (; (local_10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  while (!bVar11) {
    uVar10 = uVar7 & 0xff;
    pbVar6 = (byte *)((int)&local_10 + ((int)uVar7 >> 3));
    *pbVar6 = *pbVar6 & ~('\x01' << (uVar7 & 7));
    piVar9 = *(int **)(param_1 + 0xdc98 + uVar10 * 4);
    if (piVar9 != (int *)0x0) {
      lVar12 = (**(code **)(*piVar9 + 4))();
      local_14 = (undefined4)lVar12;
      iVar8 = param_1;
      if (lVar12 != 0) {
        uVar7 = *(uint *)(param_1 + 0x6ec + uVar10 * 4);
        local_118[uVar10 * 4] = (int)(lVar12 + (ulonglong)uVar7);
        iVar8 = local_c;
        local_118[uVar10 * 4 + 1] = (int)(lVar12 + (ulonglong)uVar7 >> 0x20);
        uVar1 = *(uint *)(*(int *)(iVar8 + 0xdc98 + uVar10 * 4) + 0x28);
        iVar8 = 0;
        if (uVar7 <= uVar1) {
          iVar8 = uVar1 - uVar7;
        }
        local_118[uVar10 * 4 + 2] = iVar8;
        local_118[uVar10 * 4 + 3] = *(int *)(local_c + 0x6a8 + uVar10 * 4);
        iVar8 = local_c;
      }
      (**(code **)(*(int *)(*(int *)(iVar8 + 0xdc98 + uVar10 * 4) + 0x38) + 8))(uVar10);
      param_1 = local_c;
      iVar2 = *(int *)(*(int *)(iVar8 + 0xd9b8) + 0x1304);
      uVar3 = *(undefined4 *)(iVar2 + 0x93c);
      iVar4 = *(int *)(local_c + 0xdc98 + uVar10 * 4);
      uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0xd9b8) + 0x1300) + 0xc);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar2 + 0x938);
      *(undefined4 *)(iVar4 + 0x10) = uVar5;
      *(undefined4 *)(iVar4 + 0x1c) = uVar3;
      iVar8 = *(int *)(*(int *)(local_c + 0xd9b8) + 0x1304);
      FUN_1009ec92(*(void **)(*(int *)(local_c + 0xd9b4) + 0x172c0),
                   *(undefined4 *)(local_c + 0xdc98 + uVar10 * 4),
                   *(int *)(*(int *)(local_c + 0xd9b8) + 0x1300),iVar8,*(int *)(iVar8 + 0x938),
                   *(int *)(iVar8 + 0x93c));
      iVar8 = *(int *)(param_1 + 0xdc98 + uVar10 * 4);
      uVar3 = *(undefined4 *)(param_1 + 0xdcf4);
      *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(param_1 + 0xdcf0);
      *(undefined4 *)(iVar8 + 0x24) = uVar3;
      piVar9 = (int *)(*(int *)(param_1 + 0xdc98 + uVar10 * 4) + 0x30);
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
    }
    uVar10 = uVar10 + 1;
    uVar7 = 0;
    bVar11 = local_10 == 0;
    if (!bVar11) {
      for (; (local_10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
  }
  FUN_100993f3(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304),0,uVar10,(int)local_118);
  *(undefined1 *)(param_1 + 0xd97f) = 0;
  return;
}


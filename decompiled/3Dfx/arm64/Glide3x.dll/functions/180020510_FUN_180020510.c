/*
 * FUN_180020510 at 180020510
 * undefined8 __cdecl FUN_180020510(longlong param_1, ulonglong param_2)
 * Address ranges: 180020510-1800206e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180020510(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180 [41];
  undefined4 local_38;
  
  uVar4 = (uint)param_2;
  if ((0x21 < uVar4) || ((0x260800000U >> (param_2 & 0x3f) & 1) == 0)) {
    if (uVar4 != 0x29) {
      return 0;
    }
    local_38 = 0;
    uStack_188 = 0;
    local_190 = 0;
    local_180[1] = 0;
    local_180[0] = 0;
    local_180[3] = 0;
    local_180[2] = 0;
    local_180[5] = 0;
    local_180[4] = 0;
    local_180[0x28] = 0xffffffff00000000;
    local_180[7] = 0;
    local_180[6] = 0;
    local_180[9] = 0;
    local_180[8] = 0;
    local_180[0xb] = 0;
    local_180[10] = 0;
    local_180[0xd] = 0;
    local_180[0xc] = 0;
    local_180[0xf] = 0;
    local_180[0xe] = 0;
    local_180[0x11] = 0;
    local_180[0x10] = 0;
    local_180[0x13] = 0;
    local_180[0x12] = 0;
    local_180[0x15] = 0;
    local_180[0x14] = 0;
    local_180[0x17] = 0;
    local_180[0x16] = 0;
    local_180[0x19] = 0;
    local_180[0x18] = 0;
    local_180[0x1b] = 0;
    local_180[0x1a] = 0;
    local_180[0x1d] = 0;
    local_180[0x1c] = 0;
    local_180[0x1f] = 0;
    local_180[0x1e] = 0;
    local_180[0x21] = 0;
    local_180[0x20] = 0;
    local_180[0x23] = 0;
    local_180[0x22] = 0;
    local_180[0x25] = 0;
    local_180[0x24] = 0;
    local_180[0x27] = 0;
    local_180[0x26] = 0;
    lVar8 = 0;
    do {
      bVar2 = (&DAT_180066988)[lVar8];
      cVar3 = (&DAT_180066978)[lVar8];
      lVar1 = lVar8 + 1;
      *(uint *)((longlong)&local_190 + lVar8 * 0x18 + 4) = (uint)bVar2;
      *(int *)(local_180 + lVar8 * 3 + -1) = (int)cVar3;
      local_180[lVar8 * 3] = param_1 + 0x4720 + (ulonglong)bVar2 * 4;
      lVar8 = lVar1;
    } while (lVar1 != 0xe);
    FUN_18000b9a0((longlong)&local_190,param_1 + 0x4720,0,0,1);
    thunk_FUN_1800010d8((undefined8 *)(param_1 + 0x45c0),&local_190,0x160);
  }
  lVar8 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar8 + 0x12c0));
  if (*(char *)(lVar8 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_180038310(lVar8 + 0x12c0,0x10);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar8 + 0x14c0));
      puVar5[1] = 0x10;
      puVar5[2] = param_1;
      puVar7 = (undefined8 *)((longlong)puVar5 + 0x23U & 0xfffffffffffffff8);
      *(uint *)(puVar5 + 3) = uVar4;
      *puVar7 = 0;
      *puVar5 = FUN_1800206f0;
      *(undefined8 **)(lVar8 + (ulonglong)*(uint *)(lVar8 + 0x14bc) * 0x28 + 0x1350) = puVar7;
      if (*(char *)(lVar8 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar8 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar8 + 0x1340));
        return 1;
      }
      goto LAB_1800206cc;
    }
    *(undefined4 *)(lVar8 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar8 + 0x12c0));
  }
  plVar6 = *(longlong **)(lVar8 + 0x14a0);
  *plVar6 = param_1;
  *(uint *)(plVar6 + 1) = uVar4;
  FUN_1800206f0(plVar6);
LAB_1800206cc:
  *(undefined4 *)(lVar8 + 0x12c0) = 0;
  return 1;
}


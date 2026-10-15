/*
 * FUN_1800b3268 at 1800b3268
 * undefined FUN_1800b3268(void)
 * Address ranges: 1800b3268-1800b369b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b3268(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined4 local_60;
  
  local_60 = 1;
  if (param_2 != 0) {
    FUN_1800015a0(param_2 + 0xc);
  }
  if (*(longlong *)(param_1 + 0xc488) != 0) {
    lVar11 = FUN_1800c0ac0(param_1 + 0x6910);
    if ((lVar11 != 0) && (*(char *)(param_1 + 0x21) == '\0')) {
      psVar2 = (short *)(lVar11 + 0x18);
      iVar12 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar12 * 2;
        lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar6] * 0x10;
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)(ushort)psVar2[uVar6] & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(lVar1 + 0x53e0);
        puVar10 = (undefined8 *)(lVar1 + 0xb520);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))();
        iVar12 = iVar12 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      iVar12 = 0;
      psVar2 = (short *)(lVar11 + 0x1dc);
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar12 * 2;
        lVar1 = param_1 + (ulonglong)(ushort)psVar2[uVar6] * 0x10;
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)(ushort)psVar2[uVar6] & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(lVar1 + 0x6a50);
        puVar10 = (undefined8 *)(lVar1 + 0xc320);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 400))();
        iVar12 = iVar12 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      iVar12 = 0;
      psVar2 = (short *)(lVar11 + 0x200);
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar12 * 2;
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)(ushort)psVar2[uVar6];
        lVar11 = param_1 + (ulonglong)(ushort)psVar2[uVar6] * 4;
        puVar9 = (undefined8 *)(lVar11 + 0x6a10);
        puVar10 = (undefined8 *)(lVar11 + 0xc420);
        for (uVar8 = uVar7 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if ((uVar7 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x198))();
        iVar12 = iVar12 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
    }
    FUN_1800c1c08(*(undefined8 *)(param_1 + 0xc488));
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xc488) = 0;
    *(undefined8 *)(param_1 + 0x67e8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))(*(longlong **)(param_1 + 0x28),0);
  }
  else if (param_3 == 0) {
    local_60 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xc488) = param_2;
    *(undefined8 *)(param_1 + 0x67e8) = *(undefined8 *)(param_3 + 8);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))
              (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_3 + 8));
    if (*(char *)(param_1 + 0x21) == '\0') {
      psVar2 = (short *)(param_3 + 0x18);
      iVar12 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar12 * 2;
        uVar4 = psVar2[uVar6];
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)uVar4 & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar4 * 0x10 + 0x414);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)uVar4 * 0x10 + 0xb520);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x130))();
        iVar12 = iVar12 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      psVar2 = (short *)(param_3 + 0x1dc);
      iVar12 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar12 * 2;
        uVar4 = psVar2[uVar6];
        uVar7 = (uint)(ushort)psVar2[uVar6 + 1] - (uint)uVar4 & 0x3fffffff;
        uVar8 = uVar7 << 1;
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar4 * 0x10 + 0x1a0);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)uVar4 * 0x10 + 0xc320);
        while (uVar7 != 0) {
          *puVar10 = *puVar9;
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          uVar7 = uVar8;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 400))();
        iVar12 = iVar12 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
      psVar2 = (short *)(param_3 + 0x200);
      iVar12 = 0;
      sVar3 = *psVar2;
      while (sVar3 != -1) {
        uVar6 = iVar12 * 2;
        uVar4 = psVar2[uVar6];
        uVar5 = psVar2[uVar6 + 1];
        puVar9 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + (ulonglong)uVar4 * 4 + 0x2b0);
        puVar10 = (undefined8 *)(param_1 + (ulonglong)uVar4 * 4 + 0xc420);
        for (uVar8 = (uint)uVar5 - (uint)uVar4 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        if (((uint)uVar5 - (uint)uVar4 & 1) != 0) {
          *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x198))();
        iVar12 = iVar12 + 1;
        sVar3 = psVar2[uVar6 + 2];
      }
    }
  }
  *(undefined1 *)(param_1 + 0xd10) = 1;
  return local_60;
}


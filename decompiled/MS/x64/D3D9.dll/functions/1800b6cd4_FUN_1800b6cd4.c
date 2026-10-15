/*
 * FUN_1800b6cd4 at 1800b6cd4
 * undefined1 __fastcall FUN_1800b6cd4(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 1800b6cd4-1800b7334
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800b6cd4(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 local_res10;
  int local_res20;
  
  local_res10 = 1;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0xc490) != 0) {
    lVar11 = FUN_1800bed58(param_1 + 0x68b8,*(ulonglong *)(param_1 + 0xc490));
    if (lVar11 != 0) {
      if ((*(char *)(param_1 + 0x21) == '\0') ||
         (*(char *)(*(longlong *)(lVar11 + 0x10) + 0x44e) != '\0')) {
        bVar8 = true;
        bVar9 = true;
      }
      else {
        bVar9 = false;
        FUN_1800b1124(param_1);
        bVar8 = false;
      }
      local_res20 = 0;
      sVar2 = *(short *)(lVar11 + 0x18);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(lVar11 + 0x18 + (ulonglong)(uint)(local_res20 * 2) * 2);
        uVar17 = (uint)uVar3;
        uVar4 = *(ushort *)(lVar11 + 0x18 + (ulonglong)(local_res20 * 2 + 1) * 2);
        uVar16 = (uint)uVar4;
        puVar14 = (undefined4 *)(param_1 + 0x13e0 + (ulonglong)((uint)uVar3 * 4) * 4);
        puVar15 = (undefined4 *)(param_1 + 0x71e0 + (ulonglong)((uint)uVar3 * 4) * 4);
        for (uVar12 = (ulonglong)((uVar16 - uVar3) * 4); uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        if (bVar8) {
          uVar5 = *(uint *)(param_1 + 0x680c);
          uVar18 = (uint)uVar3;
          if (*(int *)(param_1 + 0x6814) == 1) {
            if (*(uint *)(param_1 + 0x6810) <= uVar5) goto LAB_1800b6ea8;
            if ((*(uint *)(param_1 + 0x6810) <= (uint)uVar3 && uVar18 != *(uint *)(param_1 + 0x6810)
                ) || ((uint)uVar4 < *(uint *)(param_1 + 0x680c))) {
              iVar19 = *(int *)(param_1 + 0x6814);
              if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
                FUN_1800b10d4(param_1,iVar19,*(uint *)(param_1 + 0x680c),
                              *(undefined4 *)(param_1 + 0x6810));
                bVar8 = bVar9;
              }
              *(int *)(param_1 + 0x6814) = iVar19;
              goto LAB_1800b6ea8;
            }
            if (*(uint *)(param_1 + 0x680c) < uVar18) {
              uVar17 = *(uint *)(param_1 + 0x680c);
            }
            *(uint *)(param_1 + 0x680c) = uVar17;
            if (uVar16 < *(uint *)(param_1 + 0x6810)) {
              uVar16 = *(uint *)(param_1 + 0x6810);
            }
          }
          else {
            if (uVar5 < *(uint *)(param_1 + 0x6810)) {
              FUN_1800b10d4(param_1,*(int *)(param_1 + 0x6814),uVar5,
                            *(undefined4 *)(param_1 + 0x6810));
              bVar8 = bVar9;
            }
            *(undefined4 *)(param_1 + 0x6814) = 1;
LAB_1800b6ea8:
            *(uint *)(param_1 + 0x680c) = uVar18;
          }
          *(uint *)(param_1 + 0x6810) = uVar16;
        }
        local_res20 = local_res20 + 1;
        sVar2 = *(short *)(lVar11 + 0x18 + (ulonglong)(uint)(local_res20 * 2) * 2);
      }
      iVar19 = 0;
      sVar2 = *(short *)(lVar11 + 0x81c);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(lVar11 + 0x81c + (ulonglong)(uint)(iVar19 * 2) * 2);
        uVar4 = *(ushort *)(lVar11 + 0x81c + (ulonglong)(iVar19 * 2 + 1) * 2);
        puVar14 = (undefined4 *)(param_1 + 0x69d0 + (ulonglong)((uint)uVar3 * 4) * 4);
        puVar15 = (undefined4 *)(param_1 + 0xb230 + (ulonglong)((uint)uVar3 * 4) * 4);
        for (uVar12 = (ulonglong)(((uint)uVar4 - (uint)uVar3) * 4); uVar12 != 0; uVar12 = uVar12 - 1
            ) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        if (*(char *)(param_1 + 0x21) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))
                    (*(undefined8 *)(param_1 + 0x28),uVar3,uVar4,
                     param_1 + 0x69d0 + (ulonglong)((uint)uVar3 * 4) * 4);
        }
        iVar19 = iVar19 + 1;
        sVar2 = *(short *)(lVar11 + 0x81c + (ulonglong)(uint)(iVar19 * 2) * 2);
      }
      iVar19 = 0;
      sVar2 = *(short *)(lVar11 + 0x840);
      while (sVar2 != -1) {
        uVar3 = *(ushort *)(lVar11 + 0x840 + (ulonglong)(uint)(iVar19 * 2) * 2);
        uVar13 = (ulonglong)uVar3;
        uVar4 = *(ushort *)(lVar11 + 0x840 + (ulonglong)(iVar19 * 2 + 1) * 2);
        puVar14 = (undefined4 *)(param_1 + 0x6990 + uVar13 * 4);
        puVar15 = (undefined4 *)(param_1 + 0xb330 + uVar13 * 4);
        for (uVar12 = (ulonglong)((uint)uVar4 - (uint)uVar3); uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        if (*(char *)(param_1 + 0x21) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x188))
                    (*(longlong **)(param_1 + 0x28),uVar13,uVar4,param_1 + 0x6990 + uVar13 * 4);
        }
        iVar19 = iVar19 + 1;
        sVar2 = *(short *)(lVar11 + 0x840 + (ulonglong)(uint)(iVar19 * 2) * 2);
      }
    }
    puVar7 = *(undefined8 **)(param_1 + 0xc490);
    LOCK();
    piVar1 = (int *)((longlong)puVar7 + 0xc);
    iVar19 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar19 + -1 + *(int *)(puVar7 + 1) == 0) {
      FUN_1800c30a8(puVar7);
    }
  }
  uVar10 = MXCSR;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xc490) = 0;
  }
  else if (param_3 == 0) {
    local_res10 = 0;
  }
  else {
    *(longlong *)(param_1 + 0xc490) = param_2;
    MXCSR = 0x3fc0;
    if ((*(char *)(param_1 + 0x21) == '\0') ||
       (*(char *)(*(longlong *)(param_3 + 0x10) + 0x44e) != '\0')) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    iVar19 = 0;
    sVar2 = *(short *)(param_3 + 0x18);
    while (sVar2 != -1) {
      if (!bVar8) {
        FUN_1800b1124(param_1);
      }
      uVar3 = *(ushort *)(param_3 + 0x18 + (ulonglong)(uint)(iVar19 * 2) * 2);
      uVar17 = (uint)uVar3;
      uVar4 = *(ushort *)(param_3 + 0x18 + (ulonglong)(iVar19 * 2 + 1) * 2);
      uVar16 = (uint)uVar4;
      puVar14 = (undefined4 *)
                (*(longlong *)(param_3 + 0x10) + ((ulonglong)((uint)uVar3 * 4) + 0x214) * 4);
      puVar15 = (undefined4 *)(param_1 + 0x71e0 + (ulonglong)((uint)uVar3 * 4) * 4);
      for (uVar12 = (ulonglong)((uVar16 - uVar3) * 4); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      if (bVar8) {
        uVar5 = *(uint *)(param_1 + 0x680c);
        uVar18 = (uint)uVar3;
        if (*(int *)(param_1 + 0x6814) == 1) {
          if (*(uint *)(param_1 + 0x6810) <= uVar5) goto LAB_1800b719d;
          if ((*(uint *)(param_1 + 0x6810) <= (uint)uVar3 && uVar18 != *(uint *)(param_1 + 0x6810))
             || ((uint)uVar4 < *(uint *)(param_1 + 0x680c))) {
            iVar6 = *(int *)(param_1 + 0x6814);
            if (*(uint *)(param_1 + 0x680c) < *(uint *)(param_1 + 0x6810)) {
              FUN_1800b10d4(param_1,iVar6,*(uint *)(param_1 + 0x680c),
                            *(undefined4 *)(param_1 + 0x6810));
            }
            *(int *)(param_1 + 0x6814) = iVar6;
            goto LAB_1800b719d;
          }
          if (*(uint *)(param_1 + 0x680c) < uVar18) {
            uVar17 = *(uint *)(param_1 + 0x680c);
          }
          *(uint *)(param_1 + 0x680c) = uVar17;
          if (uVar16 < *(uint *)(param_1 + 0x6810)) {
            uVar16 = *(uint *)(param_1 + 0x6810);
          }
        }
        else {
          if (uVar5 < *(uint *)(param_1 + 0x6810)) {
            FUN_1800b10d4(param_1,*(int *)(param_1 + 0x6814),uVar5,*(undefined4 *)(param_1 + 0x6810)
                         );
          }
          *(undefined4 *)(param_1 + 0x6814) = 1;
LAB_1800b719d:
          *(uint *)(param_1 + 0x680c) = uVar18;
        }
        *(uint *)(param_1 + 0x6810) = uVar16;
      }
      iVar19 = iVar19 + 1;
      sVar2 = *(short *)(param_3 + 0x18 + (ulonglong)(uint)(iVar19 * 2) * 2);
    }
    iVar19 = 0;
    sVar2 = *(short *)(param_3 + 0x81c);
    while (sVar2 != -1) {
      uVar3 = *(ushort *)(param_3 + 0x81c + (ulonglong)(uint)(iVar19 * 2) * 2);
      uVar4 = *(ushort *)(param_3 + 0x81c + (ulonglong)(iVar19 * 2 + 1) * 2);
      puVar14 = (undefined4 *)
                (*(longlong *)(param_3 + 0x10) + ((ulonglong)((uint)uVar3 * 4) + 0x1236) * 4);
      puVar15 = (undefined4 *)(param_1 + 0xb230 + (ulonglong)((uint)uVar3 * 4) * 4);
      for (uVar12 = (ulonglong)(((uint)uVar4 - (uint)uVar3) * 4); uVar12 != 0; uVar12 = uVar12 - 1)
      {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))
                  (*(undefined8 *)(param_1 + 0x28),uVar3,uVar4,
                   *(longlong *)(param_3 + 0x10) + ((ulonglong)((uint)uVar3 * 4) + 0x1236) * 4);
      }
      iVar19 = iVar19 + 1;
      sVar2 = *(short *)(param_3 + 0x81c + (ulonglong)(uint)(iVar19 * 2) * 2);
    }
    iVar19 = 0;
    sVar2 = *(short *)(param_3 + 0x840);
    while (sVar2 != -1) {
      uVar3 = *(ushort *)(param_3 + 0x840 + (ulonglong)(uint)(iVar19 * 2) * 2);
      uVar13 = (ulonglong)uVar3;
      uVar4 = *(ushort *)(param_3 + 0x840 + (ulonglong)(iVar19 * 2 + 1) * 2);
      puVar14 = (undefined4 *)(*(longlong *)(param_3 + 0x10) + (uVar13 + 0x127a) * 4);
      puVar15 = (undefined4 *)(param_1 + 0xb330 + uVar13 * 4);
      for (uVar12 = (ulonglong)((uint)uVar4 - (uint)uVar3); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
      if (*(char *)(param_1 + 0x21) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x188))
                  (*(longlong **)(param_1 + 0x28),uVar13,uVar4,
                   *(longlong *)(param_3 + 0x10) + 0x49e8 + uVar13 * 4);
      }
      iVar19 = iVar19 + 1;
      sVar2 = *(short *)(param_3 + 0x840 + (ulonglong)(uint)(iVar19 * 2) * 2);
    }
  }
  *(undefined1 *)(param_1 + 0xc50a) = 1;
  MXCSR = uVar10;
  return local_res10;
}


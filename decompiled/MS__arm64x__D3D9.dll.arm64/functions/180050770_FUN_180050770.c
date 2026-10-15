/*
 * FUN_180050770 at 180050770
 * undefined FUN_180050770(void)
 * Address ranges: 180050770-180050a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180050770(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  
  uVar8 = (*__imp_KERNEL32_dll_GetCurrentThread)();
  (*__imp_KERNEL32_dll_SetThreadPriority)(uVar8,1);
  plVar19 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18);
  do {
    if (*(char *)(param_1 + 0xb8) != '\0') {
      return 0;
    }
    uVar15 = 0;
    (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x80);
    uVar10 = uVar15;
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar9 = (**(code **)(**(longlong **)
                             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18) + 0x40))();
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x50);
      while (iVar16 = (int)uVar17, uVar10 = uVar15, iVar16 != -1) {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + uVar17 * 0x40);
        uVar17 = *puVar1;
        if ((uVar17 == 0) || (uVar10 = puVar1[2], uVar9 < puVar1[2])) break;
        if (*(char *)((longlong)puVar1 + 0x3d) == '\0') {
          iVar7 = *(int *)(uVar17 + 0x10);
          if (iVar7 - 9U < 2) {
            local_70 = 0;
            plVar18 = (longlong *)puVar1[4];
            uVar10 = 0;
            lVar6 = (ulonglong)(uint)puVar1[5] * 8;
            lStack_60 = (ulonglong)((uint)puVar1[5] + 1) << 3;
            local_68 = lVar6;
            iVar7 = (**(code **)(*plVar18 + 0x40))(plVar18,0,&local_68,&local_70);
            if (-1 < iVar7) {
              uVar10 = *(ulonglong *)(lVar6 + local_70);
              local_68 = 0;
              lStack_60 = 0;
              (**(code **)(*plVar18 + 0x48))(plVar18,0,&local_68);
            }
            cVar11 = *(char *)((longlong)puVar1 + 0x3c);
            uVar17 = *puVar1;
LAB_1800508d0:
            FUN_18004e178(uVar17,uVar10,puVar1[1],cVar11);
          }
          else {
            if (iVar7 == 8) {
              cVar11 = '\x01';
              uVar10 = 1;
              goto LAB_1800508d0;
            }
            if (iVar7 == 0xb) {
              cVar11 = *(char *)((longlong)puVar1 + 0x3c);
              uVar10 = (ulonglong)(cVar11 == '\0');
              goto LAB_1800508d0;
            }
          }
          if ((*(char *)((longlong)puVar1 + 0x3c) != '\0') &&
             (uVar4 = *(uint *)(param_1 + 0x78), uVar4 != 0)) {
            uVar10 = *puVar1;
            uVar13 = 0;
            uVar12 = uVar4;
            do {
              uVar5 = uVar12 + uVar13 >> 1;
              uVar17 = (ulonglong)uVar5;
              uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar17 * 0x18);
              if (uVar14 <= uVar10) {
                if (uVar10 <= uVar14) break;
                uVar13 = uVar5 + 1;
                uVar17 = (ulonglong)(uVar5 + 1);
                uVar5 = uVar12;
              }
              uVar12 = uVar5;
            } while (uVar12 != uVar13);
            if (((uint)uVar17 != uVar4) &&
               (*(ulonglong *)(*(longlong *)(param_1 + 0x70) + uVar17 * 0x18) == uVar10)) {
              uVar13 = (uint)uVar17 + 1;
              if (uVar13 < uVar4) {
                do {
                  uVar10 = (ulonglong)uVar13;
                  puVar2 = (undefined8 *)
                           (*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar13 - 1) * 0x18);
                  uVar13 = uVar13 + 1;
                  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + uVar10 * 0x18);
                  uVar8 = *puVar3;
                  puVar2[1] = puVar3[1];
                  *puVar2 = uVar8;
                  puVar2[2] = puVar3[2];
                } while (uVar13 < *(uint *)(param_1 + 0x78));
              }
              *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
            }
          }
        }
        uVar4 = (uint)puVar1[7];
        uVar17 = (ulonglong)uVar4;
        *puVar1 = 0;
        if ((uVar4 != 0xffffffff) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar17 * 0x40) != 0)) {
          *(uint *)(param_1 + 0x50) = uVar4;
          *(undefined4 *)(puVar1 + 7) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 + 0x38)
          ;
          *(int *)(*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x40 +
                  0x38) = iVar16;
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      }
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x80);
    if (uVar10 != 0) {
      (**(code **)(*plVar19 + 0x48))(plVar19,uVar10,*(undefined8 *)(param_1 + 0xb0));
    }
    (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(param_1 + 0xb0),0xffffffff);
  } while( true );
}


/*
 * FUN_100a3d7b at 100a3d7b
 * uint __thiscall FUN_100a3d7b(void * this, int param_1)
 * Address ranges: 100a3d7b-100a425f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100a3d7b(void *this,int param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = param_1 * 0x16c0;
  bVar6 = *(byte *)(param_1 * 0x18 + 0x52c + (int)this) & 1;
  uVar2 = *(uint *)(param_1 * 0x18 + 0x52c + (int)this) >> 2;
  if ((bVar6 != 0) || ((uVar2 & 1) != 0)) {
    iVar7 = (int)this + 0x520;
    if (this == (void *)0x0) {
      iVar7 = 0;
    }
    piVar3 = FUN_100a6d60(iVar7,param_1);
    *(int **)(iVar9 + 0x1cac + (int)this) = piVar3;
  }
  iVar7 = (int)this + 0x520;
  if (this == (void *)0x0) {
    iVar7 = 0;
  }
  piVar3 = FUN_1009cf85(iVar7,param_1,0,0x100b5744);
  *(int **)(iVar9 + 0x19c0 + (int)this) = piVar3;
  puVar5 = (undefined4 *)0x0;
  if (piVar3 != (int *)0x0) {
    if (bVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(iVar9 + 0x1cac + (int)this);
    }
    puVar4 = FUN_100984b8(iVar7,param_1,piVar3,0,*(undefined4 *)((int)this + 0x172c0),uVar8,uVar8,
                          "[Global graphics queue with autoflush]",uVar8);
    *(undefined4 **)(iVar9 + 0x19c4 + (int)this) = puVar4;
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = FUN_1009cf85(iVar7,param_1,3,0x100b57a0);
      *(int **)(iVar9 + 0x19c8 + (int)this) = piVar3;
      puVar5 = (undefined4 *)0x0;
      if (piVar3 != (int *)0x0) {
        if ((uVar2 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(iVar9 + 0x1cac + (int)this);
        }
        puVar4 = FUN_100984b8(iVar7,param_1,piVar3,3,*(undefined4 *)((int)this + 0x172c0),uVar8,
                              uVar8,"[Global copy queue with autoflush]",uVar8);
        *(undefined4 **)(iVar9 + 0x19cc + (int)this) = puVar4;
        puVar5 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_100a1f06(this,param_1);
          if ((char)puVar5 != '\0') {
            puVar5 = FUN_10097808(iVar7,param_1,0);
            *(undefined4 **)(iVar9 + 0x1c98 + (int)this) = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              puVar5 = FUN_10097808(iVar7,param_1,2);
              *(undefined4 **)(iVar9 + 0x1c9c + (int)this) = puVar5;
              if (puVar5 != (undefined4 *)0x0) {
                puVar5 = FUN_10097808(iVar7,param_1,3);
                *(undefined4 **)(iVar9 + 0x1ca0 + (int)this) = puVar5;
                if (puVar5 != (undefined4 *)0x0) {
                  puVar5 = FUN_10097808(iVar7,param_1,1);
                  *(undefined4 **)(iVar9 + 0x1ca4 + (int)this) = puVar5;
                  if (puVar5 != (undefined4 *)0x0) {
                    puVar5 = FUN_1009fb6f(iVar7,param_1,0,0x100,1);
                    *(undefined4 **)(iVar9 + 0x1ca8 + (int)this) = puVar5;
                    if (puVar5 != (undefined4 *)0x0) {
                      uVar8 = *(undefined4 *)((int)this + 0x172c0);
                      puVar5 = (undefined4 *)((int)this + iVar9 + 0x1d00);
                      puVar5[2] = param_1;
                      *puVar5 = uVar8;
                      puVar5[1] = iVar7;
                      uVar8 = *(undefined4 *)((int)this + 0x172c0);
                      *(int *)(iVar9 + 0x1d30 + (int)this) = param_1;
                      *(undefined4 *)(iVar9 + 0x1d28 + (int)this) = uVar8;
                      *(int *)(iVar9 + 0x1d2c + (int)this) = iVar7;
                      FUN_1009db1c((void *)((int)this + iVar9 + 0x19d0),iVar7,param_1,0,0x800,
                                   0x200000,0xc00000);
                      FUN_1009db1c((void *)((int)this + iVar9 + 0x1a30),iVar7,param_1,0,0x400,
                                   0x800000,0x8000000);
                      FUN_1009db1c((void *)((int)this + iVar9 + 0x1a90),iVar7,param_1,0,0x400,
                                   0x400000,0x4000000);
                      FUN_1009db1c((void *)((int)this + iVar9 + 0x1af0),iVar7,param_1,0,0x400,
                                   0x800000,0x4000000);
                      FUN_1009db1c((void *)((int)this + iVar9 + 0x1b50),iVar7,param_1,1,0x400,
                                   0x800000,0x8000000);
                      FUN_100a7c47((void *)((int)this + iVar9 + 0x1be8),0x2000000,0);
                      FUN_100a7c47((void *)((int)this + iVar9 + 0x1c40),0x4000000,0);
                      lpCriticalSection = (LPCRITICAL_SECTION)((int)this + iVar9 + 0x1bb0);
                      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x400;
                      lpCriticalSection[1].LockCount = 0x800000;
                      lpCriticalSection[1].RecursionCount = 0;
                      InitializeCriticalSection(lpCriticalSection);
                      *(undefined4 **)(iVar9 + 0x1cbc + (int)this) = puVar5;
                      *(undefined4 **)(iVar9 + 0x1ccc + (int)this) = puVar5;
                      *(undefined4 *)(iVar9 + 0x1d50 + (int)this) =
                           *(undefined4 *)(iVar9 + 0x1ca4 + (int)this);
                      *(undefined4 **)(iVar9 + 0x1cdc + (int)this) = puVar5;
                      *(undefined4 *)(iVar9 + 0x734 + (int)this) = 0;
                      *(undefined4 *)(iVar9 + 0x700 + (int)this) = 0;
                      *(undefined4 *)(iVar9 + 0x73c + (int)this) = 0;
                      *(undefined4 *)(iVar9 + 0x74c + (int)this) = 0;
                      *(undefined4 **)(iVar9 + 0x1cec + (int)this) = puVar5;
                      *(undefined4 **)(iVar9 + 0x1cfc + (int)this) = puVar5;
                      *(undefined4 *)(iVar9 + 0x730 + (int)this) = 1;
                      *(undefined4 *)(iVar9 + 0x6f0 + (int)this) = 0xffffffff;
                      *(undefined4 *)(iVar9 + 0x738 + (int)this) = 1;
                      *(undefined4 *)(iVar9 + 0x704 + (int)this) = 3;
                      *(undefined4 *)(iVar9 + 0x748 + (int)this) = 1;
                      *(undefined1 *)((int)this + 0x4e4) = 1;
                      return 1;
                    }
                    puVar5 = *(undefined4 **)(iVar9 + 0x1ca4 + (int)this);
                    if (puVar5 != (undefined4 *)0x0) {
                      FUN_100973db(puVar5);
                      FUN_100ad48c(puVar5);
                    }
                    *(undefined4 *)(iVar9 + 0x1ca4 + (int)this) = 0;
                  }
                  puVar5 = *(undefined4 **)(iVar9 + 0x1ca0 + (int)this);
                  if (puVar5 != (undefined4 *)0x0) {
                    FUN_100973db(puVar5);
                    FUN_100ad48c(puVar5);
                  }
                  *(undefined4 *)(iVar9 + 0x1ca0 + (int)this) = 0;
                }
                puVar5 = *(undefined4 **)(iVar9 + 0x1c9c + (int)this);
                if (puVar5 != (undefined4 *)0x0) {
                  FUN_100973db(puVar5);
                  FUN_100ad48c(puVar5);
                }
                *(undefined4 *)(iVar9 + 0x1c9c + (int)this) = 0;
              }
              puVar5 = *(undefined4 **)(iVar9 + 0x1c98 + (int)this);
              if (puVar5 != (undefined4 *)0x0) {
                FUN_100973db(puVar5);
                FUN_100ad48c(puVar5);
              }
              *(undefined4 *)(iVar9 + 0x1c98 + (int)this) = 0;
            }
            puVar5 = (undefined4 *)FUN_100a20ab(this,param_1);
          }
          puVar4 = *(undefined4 **)(iVar9 + 0x19cc + (int)this);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = FUN_1009850e(puVar4);
          }
          *(undefined4 *)(iVar9 + 0x19cc + (int)this) = 0;
        }
        pvVar1 = *(LPVOID *)(iVar9 + 0x19c8 + (int)this);
        if (pvVar1 != (LPVOID)0x0) {
          FUN_1009ceab((int)pvVar1);
          puVar5 = (undefined4 *)FUN_100ad48c(pvVar1);
        }
        *(undefined4 *)(iVar9 + 0x19c8 + (int)this) = 0;
      }
      puVar4 = *(undefined4 **)(iVar9 + 0x19c4 + (int)this);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = FUN_1009850e(puVar4);
      }
      *(undefined4 *)(iVar9 + 0x19c4 + (int)this) = 0;
    }
    pvVar1 = *(LPVOID *)(iVar9 + 0x19c0 + (int)this);
    if (pvVar1 != (LPVOID)0x0) {
      FUN_1009ceab((int)pvVar1);
      puVar5 = (undefined4 *)FUN_100ad48c(pvVar1);
    }
    *(undefined4 *)(iVar9 + 0x19c0 + (int)this) = 0;
  }
  return (uint)puVar5 & 0xffffff00;
}


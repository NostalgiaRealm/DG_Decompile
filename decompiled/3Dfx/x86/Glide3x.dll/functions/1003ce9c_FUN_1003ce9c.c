/*
 * FUN_1003ce9c at 1003ce9c
 * uint __thiscall FUN_1003ce9c(void * this, int param_1)
 * Address ranges: 1003ce9c-1003d380
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003ce9c(void *this,int param_1)

{
  LPVOID pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
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
    puVar3 = FUN_1004e26a(iVar7,param_1);
    *(undefined4 **)(iVar9 + 0x1cac + (int)this) = puVar3;
  }
  iVar7 = (int)this + 0x520;
  if (this == (void *)0x0) {
    iVar7 = 0;
  }
  piVar4 = FUN_10039c4a(iVar7,param_1,0,0x10057330);
  *(int **)(iVar9 + 0x19c0 + (int)this) = piVar4;
  puVar3 = (undefined4 *)0x0;
  if (piVar4 != (int *)0x0) {
    if (bVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(iVar9 + 0x1cac + (int)this);
    }
    puVar5 = FUN_1003f740(iVar7,param_1,piVar4,0,*(undefined4 *)((int)this + 0x172c0),uVar8,uVar8,
                          "[Global graphics queue with autoflush]",uVar8);
    *(undefined4 **)(iVar9 + 0x19c4 + (int)this) = puVar5;
    puVar3 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      piVar4 = FUN_10039c4a(iVar7,param_1,3,0x1005738c);
      *(int **)(iVar9 + 0x19c8 + (int)this) = piVar4;
      puVar3 = (undefined4 *)0x0;
      if (piVar4 != (int *)0x0) {
        if ((uVar2 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(iVar9 + 0x1cac + (int)this);
        }
        puVar5 = FUN_1003f740(iVar7,param_1,piVar4,3,*(undefined4 *)((int)this + 0x172c0),uVar8,
                              uVar8,"[Global copy queue with autoflush]",uVar8);
        *(undefined4 **)(iVar9 + 0x19cc + (int)this) = puVar5;
        puVar3 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_1004778d(this,param_1);
          if ((char)puVar3 != '\0') {
            puVar3 = FUN_1003ecfe(iVar7,param_1,0);
            *(undefined4 **)(iVar9 + 0x1c98 + (int)this) = puVar3;
            if (puVar3 != (undefined4 *)0x0) {
              puVar3 = FUN_1003ecfe(iVar7,param_1,2);
              *(undefined4 **)(iVar9 + 0x1c9c + (int)this) = puVar3;
              if (puVar3 != (undefined4 *)0x0) {
                puVar3 = FUN_1003ecfe(iVar7,param_1,3);
                *(undefined4 **)(iVar9 + 0x1ca0 + (int)this) = puVar3;
                if (puVar3 != (undefined4 *)0x0) {
                  puVar3 = FUN_1003ecfe(iVar7,param_1,1);
                  *(undefined4 **)(iVar9 + 0x1ca4 + (int)this) = puVar3;
                  if (puVar3 != (undefined4 *)0x0) {
                    puVar3 = FUN_1003e752(iVar7,param_1,0,0x100,1);
                    *(undefined4 **)(iVar9 + 0x1ca8 + (int)this) = puVar3;
                    if (puVar3 != (undefined4 *)0x0) {
                      uVar8 = *(undefined4 *)((int)this + 0x172c0);
                      puVar3 = (undefined4 *)((int)this + iVar9 + 0x1d00);
                      puVar3[2] = param_1;
                      *puVar3 = uVar8;
                      puVar3[1] = iVar7;
                      uVar8 = *(undefined4 *)((int)this + 0x172c0);
                      *(int *)(iVar9 + 0x1d30 + (int)this) = param_1;
                      *(undefined4 *)(iVar9 + 0x1d28 + (int)this) = uVar8;
                      *(int *)(iVar9 + 0x1d2c + (int)this) = iVar7;
                      FUN_1004c2ac((void *)((int)this + iVar9 + 0x19d0),iVar7,param_1,0,0x800,
                                   0x200000,0xc00000);
                      FUN_1004c2ac((void *)((int)this + iVar9 + 0x1a30),iVar7,param_1,0,0x400,
                                   0x800000,0x8000000);
                      FUN_1004c2ac((void *)((int)this + iVar9 + 0x1a90),iVar7,param_1,0,0x400,
                                   0x400000,0x4000000);
                      FUN_1004c2ac((void *)((int)this + iVar9 + 0x1af0),iVar7,param_1,0,0x400,
                                   0x800000,0x4000000);
                      FUN_1004c2ac((void *)((int)this + iVar9 + 0x1b50),iVar7,param_1,1,0x400,
                                   0x800000,0x8000000);
                      FUN_10051bfe((void *)((int)this + iVar9 + 0x1be8),0x2000000,0);
                      FUN_10051bfe((void *)((int)this + iVar9 + 0x1c40),0x4000000,0);
                      lpCriticalSection = (LPCRITICAL_SECTION)((int)this + iVar9 + 0x1bb0);
                      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x400;
                      lpCriticalSection[1].LockCount = 0x800000;
                      lpCriticalSection[1].RecursionCount = 0;
                      InitializeCriticalSection(lpCriticalSection);
                      *(undefined4 **)(iVar9 + 0x1cbc + (int)this) = puVar3;
                      *(undefined4 **)(iVar9 + 0x1ccc + (int)this) = puVar3;
                      *(undefined4 *)(iVar9 + 0x1d50 + (int)this) =
                           *(undefined4 *)(iVar9 + 0x1ca4 + (int)this);
                      *(undefined4 **)(iVar9 + 0x1cdc + (int)this) = puVar3;
                      *(undefined4 *)(iVar9 + 0x734 + (int)this) = 0;
                      *(undefined4 *)(iVar9 + 0x700 + (int)this) = 0;
                      *(undefined4 *)(iVar9 + 0x73c + (int)this) = 0;
                      *(undefined4 *)(iVar9 + 0x74c + (int)this) = 0;
                      *(undefined4 **)(iVar9 + 0x1cec + (int)this) = puVar3;
                      *(undefined4 **)(iVar9 + 0x1cfc + (int)this) = puVar3;
                      *(undefined4 *)(iVar9 + 0x730 + (int)this) = 1;
                      *(undefined4 *)(iVar9 + 0x6f0 + (int)this) = 0xffffffff;
                      *(undefined4 *)(iVar9 + 0x738 + (int)this) = 1;
                      *(undefined4 *)(iVar9 + 0x704 + (int)this) = 3;
                      *(undefined4 *)(iVar9 + 0x748 + (int)this) = 1;
                      *(undefined1 *)((int)this + 0x4e4) = 1;
                      return 1;
                    }
                    puVar3 = *(undefined4 **)(iVar9 + 0x1ca4 + (int)this);
                    if (puVar3 != (undefined4 *)0x0) {
                      FUN_1003e8d1(puVar3);
                      FUN_10052276(puVar3);
                    }
                    *(undefined4 *)(iVar9 + 0x1ca4 + (int)this) = 0;
                  }
                  puVar3 = *(undefined4 **)(iVar9 + 0x1ca0 + (int)this);
                  if (puVar3 != (undefined4 *)0x0) {
                    FUN_1003e8d1(puVar3);
                    FUN_10052276(puVar3);
                  }
                  *(undefined4 *)(iVar9 + 0x1ca0 + (int)this) = 0;
                }
                puVar3 = *(undefined4 **)(iVar9 + 0x1c9c + (int)this);
                if (puVar3 != (undefined4 *)0x0) {
                  FUN_1003e8d1(puVar3);
                  FUN_10052276(puVar3);
                }
                *(undefined4 *)(iVar9 + 0x1c9c + (int)this) = 0;
              }
              puVar3 = *(undefined4 **)(iVar9 + 0x1c98 + (int)this);
              if (puVar3 != (undefined4 *)0x0) {
                FUN_1003e8d1(puVar3);
                FUN_10052276(puVar3);
              }
              *(undefined4 *)(iVar9 + 0x1c98 + (int)this) = 0;
            }
            puVar3 = (undefined4 *)FUN_1004793c(this,param_1);
          }
          puVar5 = *(undefined4 **)(iVar9 + 0x19cc + (int)this);
          if (puVar5 != (undefined4 *)0x0) {
            puVar3 = FUN_1003d381(puVar5);
          }
          *(undefined4 *)(iVar9 + 0x19cc + (int)this) = 0;
        }
        pvVar1 = *(LPVOID *)(iVar9 + 0x19c8 + (int)this);
        if (pvVar1 != (LPVOID)0x0) {
          FUN_10039b70((int)pvVar1);
          puVar3 = (undefined4 *)FUN_10052276(pvVar1);
        }
        *(undefined4 *)(iVar9 + 0x19c8 + (int)this) = 0;
      }
      puVar5 = *(undefined4 **)(iVar9 + 0x19c4 + (int)this);
      if (puVar5 != (undefined4 *)0x0) {
        puVar3 = FUN_1003d381(puVar5);
      }
      *(undefined4 *)(iVar9 + 0x19c4 + (int)this) = 0;
    }
    pvVar1 = *(LPVOID *)(iVar9 + 0x19c0 + (int)this);
    if (pvVar1 != (LPVOID)0x0) {
      FUN_10039b70((int)pvVar1);
      puVar3 = (undefined4 *)FUN_10052276(pvVar1);
    }
    *(undefined4 *)(iVar9 + 0x19c0 + (int)this) = 0;
  }
  return (uint)puVar3 & 0xffffff00;
}

